#include "class_defs.h"
#include<bits/stdc++.h>
using namespace std;


//symbol table

class symbol_table *Symtable = new symbol_table();
Visitor *v = new interpreter();

//methods
void symbol_table::insert(sym_types *type){
  //cout<<" inserting value "<<type->id<<endl;
  stable.push_back(type);
}

string symbol_table::lookup(string val){
    for(int i=0; i<stable.size(); i++)
    {
      if(stable[i]->id == val)
      return "present";
    }
    return "Not present";

}

void symbol_table::update(string val, int indx, int updval){
  for(int i=0; i<stable.size(); i++)
  {
    if(stable[i]->id == val)
    {
      if(indx == -1 && stable[i]->array == NULL)
      {
        stable[i]->val=updval;
      }
      else if(indx != -1 && stable[i]->array != NULL)
      {
          if(indx<stable[i]->bound)
          stable[i]->array[indx]=updval;
          else
          {
            cout<<"seg fault , accessing out of bound value"<<endl;
            exit(0);
          }
      }
      else
      {
        cout<<"seg fault accessing out of bound value"<<endl;
        exit(0);
      }
    }
  }
}

int symbol_table::getval(string val,int indx){
  for(int i=0; i<stable.size(); i++)
  {
    if(stable[i]->id == val)
    {
      if(indx == -1 && stable[i]->array == NULL)
      {
        return stable[i]->val;
      }
      else if(indx != -1 && stable[i]->array != NULL)
      {
          if(indx<stable[i]->bound)
          return stable[i]->array[indx];
          else
          {
            cout<<"seg fault,accessing out of bound value"<<endl;
            exit(0);
          }
      }
      else
      {
        cout<<"seg fault,accessing out of bound value"<<endl;
        exit(0);
      }
    }
  }
}

void symbol_table::upd_goto_indx(string name,int idx)
{
  for(int i=0; i<stable.size(); i++)
  {
    if(stable[i]->id == name)
    stable[i]->index = idx;
  }

}

int symbol_table::get_goto_indx(string name)
{
  for(int i=0; i<stable.size(); i++)
  {
    if(stable[i]->id == name)
    return stable[i]->index;
  }

}


//Constructors

Var::Var(string decl_type,string name,unsigned int length){
  this->decl_type = decl_type;
  this->name = name;
  this->length = length;
}

Var::Var(string decl_type,string name){
  this->decl_type = decl_type;
  this->name = name;
}

type_n_variables::type_n_variables(string datatype, class Vars* varlist){
  this->datatype=datatype;
  this->vars_list=varlist->getVarslist();
  for(int i=0; i<vars_list.size(); i++)
  vars_list[i]->setDataType(this->datatype);
}

decl_list::decl_list(){
}

decl_block::decl_block(class decl_list* decllist){
  this->declarations_list=decllist;
}


Prog::Prog(class decl_block* declblock,class code_block *codeblock){
  this->dec = declblock;
  this->code = codeblock;
}

//code_block Constructor

code_block::code_block(class statement_list* stmt){
  this->statements_list=stmt;
}

statements::statements(string type,string name,class statement* stmt){
  this->type = type;
  this->name=name;
  this->stmt=stmt;
}


statements::statements(string type,class statement *stmt){
  this->type = type;
  this->stmt=stmt;
}

if_stmt::if_stmt(class boolean_expr* expression,class statement_list * ifstmtlist, class else_stmt* elsestmt){
  this->expression=expression;
  this->ifstmtlist=ifstmtlist;
  this->elsestmt = elsestmt;
}

else_stmt::else_stmt(class statement_list *elsestmtlist){
  this->elsestmtlist=elsestmtlist;
}

assign_stmt::assign_stmt(class id_arr* iden,string opr, class expr* expression){
  this->id_or_arr=iden;
  this->opr=opr;
  this->expression=expression;
  this->stype=stmttypes::assign;
}

for_stmt::for_stmt(class id_arr* iden,int from_val,int to_val,class statement_list*forstmtlist){
  this->id_or_arr=iden;
  this->from_val=from_val;
  this->to_val=to_val;
  this->incr_val = 1;
  this->format="first";
  this->forstmtlist=forstmtlist;
}


for_stmt::for_stmt(class id_arr* iden,int from_val,int incr_val,int to_val,class statement_list*forstmtlist){
  this->id_or_arr=iden;
  this->from_val=from_val;
  this->incr_val=incr_val;
  this->to_val=to_val;
  this->format="second";
  this->forstmtlist=forstmtlist;
}

while_stmt::while_stmt(class boolean_expr* expression,class statement_list*whilestmtlist){
  this->expression=expression;
  this->whilestmtlist=whilestmtlist;
}

print_stmt::print_stmt(string print_matter){
  this->print_matter=print_matter;
  this->rdst=NULL;
}

print_stmt::print_stmt(string print_matter,class rd_st *rdst){
  this->print_matter = print_matter;
  this->rdst=rdst;
}

println_stmt::println_stmt(string print_matter){
  this->print_matter=print_matter;
  this->rdst = NULL;
}

println_stmt::println_stmt(string print_matter,class rd_st *rdst){
  this->print_matter = print_matter;
  this->rdst=rdst;
}

goto_stmt::goto_stmt(string name,class boolean_expr* expression){
  this->name=name;
  this->expression=expression;
}

goto_stmt::goto_stmt(string name){
  this->name=name;
}

id_arr::id_arr(string type,string name){
  this->type=type;
  this->name=name;
}

id_arr::id_arr(string type,string name,class expr*expressed_val){
  this->type=type;
  this->name=name;
  this->expressed_val=expressed_val;
}

rd_st::rd_st(class id_arr* rdlist){
  rdst_list.push_back(rdlist);
}

read_stmt::read_stmt(class rd_st* rd){
  rvalues = rd->getrdlist();
}

arithexpr::arithexpr(class expr* expr1,string opr,class expr* expr2){
  this->lhs=expr1;
  this->rhs=expr2;
  this->opr=opr;
  this->etype=exprtype::arith;
}


boolean_expr::boolean_expr(class expr* expr1,string opr,class expr* expr2){
  this->lhs=expr1;
  this->rhs=expr2;
  this->opr=opr;
  this->etype=exprtype::boolean;
}

Integer::Integer(int num){
  this->value=num;
}

//METHODS

bool Var::is_array(){
  if(this->decl_type == "Normal")
  return "False";
  else
  return "True";
}

void Var::setDataType(string datatype){
  this->datatype=datatype;
}


void Vars::push_back(class Var* variable){
  variables_list.push_back(variable);
}

vector<class Var*> Vars::getVarslist(){
  return variables_list;
}

/*void type_n_variables::push_back(class Var* variable){
  cout<<"hlo"<<datatype<<endl;
  variable->setDataType(datatype);
  vars_list.push_back(variable);
}*/

void decl_list::push_back(class type_n_variables* typevars){
  Varstype.push_back(typevars);
}

//code_block Methods

void statement_list::push_back(class statements* stmts){
  stmt_list.push_back(stmts);
}

void rd_st::push_back(class id_arr* rdlist){
  rdst_list.push_back(rdlist);
}

vector<class id_arr*> rd_st::getrdlist(){
  return rdst_list;
}




/*traversals*/

void Prog::traverse(){
//  cout<<"Program Traversal"<<endl;
if(dec!=NULL)
  dec->traverse();
if(code!=NULL)
  code->traverse();
}

void code_block::traverse(){
//  cout<<"code block Traversal"<<endl;
if(statements_list!=NULL)
  statements_list->traverse();
}

void statement_list::traverse(){
//  cout<<"statement List Traversal"<<endl;
  for(int i=0; i<stmt_list.size();i++)
  if(stmt_list[i]!=NULL)
  stmt_list[i]->traverse();
}

void statements::traverse(){
//  cout<<"statements- Traversal"<<endl;
  if(type == "goto type")
  {
    cout<<name<<endl;
    sym_types *syms = (sym_types*)malloc(sizeof(sym_types));
    syms->id=name;
    syms->val=0;
    syms->type = "Goto";
    string rettype = Symtable->lookup(syms->id);
    if(rettype == "present")
    {
      cout<<"Variable already used"<<endl;
      exit(0);
    }
    else
      Symtable->insert(syms);
  }
  if(stmt!=NULL)
  stmt->traverse();
}

void goto_stmt::traverse(){
//  cout<<"Goto statement Traversal"<<endl;
//  cout<<name<<endl;
  if(expression!=NULL)
    expression->traverse();
}

void println_stmt::traverse(){
//  cout<<"println_stmt Traversal"<<endl;
//  cout<<print_matter<<endl;
if(rdst!=NULL)
  rdst->traverse();
}

void print_stmt::traverse(){
//  cout<<"print statement Traversal"<<endl;
//  cout<<print_matter<<endl;
if(rdst!=NULL)
  rdst->traverse();
}

void read_stmt::traverse(){
  for(int i=0; i<rvalues.size();i++)
  if(rvalues[i]!=NULL)
  rvalues[i]->traverse();
}
void rd_st::traverse(){
//  cout<<"Read statement Traversal"<<endl;
  for(int i=0; i<rdst_list.size(); i++)
  if(rdst_list[i]!=NULL)
  rdst_list[i]->traverse();
}

void while_stmt::traverse(){
//  cout<<"while statement Traversal"<<endl;
if(expression!=NULL)
  expression->traverse();
if(whilestmtlist!=NULL)
  whilestmtlist->traverse();
}

void for_stmt::traverse(){
  //cout<<"for statement Traversal"<<endl;
  if(id_or_arr!=NULL)
  id_or_arr->traverse();
//  cout<<incr_val<<" ";
//  cout<<from_val<<" ";
//  cout<<to_val<<endl;
if(forstmtlist!=NULL)
  forstmtlist->traverse();
}

void else_stmt::traverse(){
//  cout<<"Else statement Traversal"<<endl;
  if(elsestmtlist!=NULL)
  elsestmtlist->traverse();
}

void if_stmt::traverse(){
//  cout<<"If statement Traversal"<<endl;
if(expression!=NULL)
  expression->traverse();
if(ifstmtlist!=NULL)
  ifstmtlist->traverse();
if(elsestmt!=NULL)
  elsestmt->traverse();
}

void assign_stmt::traverse(){
  //cout<<"assignment statement Traversal"<<endl;
  if(id_or_arr!=NULL)
  id_or_arr->traverse();
  if(expression!=NULL)
  expression->traverse();
//  cout<<opr<<endl;
}

void id_arr::traverse(){
//  cout<<"id_arr"<<endl;
  string rettype = Symtable->lookup(name);
  if(rettype == "Not present")
  {
    cout<<"Variable not declared"<<endl;
    exit(0);
  }
  if(type=="array")
  if(expressed_val!=NULL)
  expressed_val->traverse();
}

void Integer::traverse(){
//  cout<<value<<endl;
}

void  arithexpr::traverse(){
  if(lhs!=NULL)
  lhs->traverse();
//  cout<<opr<<endl;
if(rhs!=NULL)
  rhs->traverse();
}

void boolean_expr::traverse(){
  if(lhs!=NULL)
  lhs->traverse();
//  cout<<opr<<endl;
if(rhs!=NULL)
  rhs->traverse();
}

void decl_block::traverse(){
  //cout<<"decl block Traversal"<<endl;
  if(declarations_list!=NULL)
  declarations_list->traverse();
}

void decl_list::traverse(){
//  cout<<"decl_list Traversal"<<endl;
  for(int i=0; i<Varstype.size(); i++)
  if(Varstype[i]!=NULL)
  Varstype[i]->traverse();
}

void type_n_variables::traverse(){
//  cout<<"type_n_variables"<<endl;
  for(int i=0; i<vars_list.size(); i++)
  if(vars_list[i]!=NULL)
  vars_list[i]->traverse();
}

void Var::traverse(){
//  cout<<"Var"<<endl;
//  cout<<name<<" ";
//  cout<<datatype<<endl;
  sym_types *syms = (sym_types*)malloc(sizeof(sym_types));
  syms->id=this->name;
  syms->val=0;
  syms->datatype=this->datatype;
  if(decl_type=="Array" )
  {
    if(length == 0)
    {
      cout<<"error in array length , must be greater than 0"<<endl;
      exit(0);
    }
    syms->bound=length;
    syms->array=(int *)malloc(length*sizeof(int));
    for(int i=0; i<length; i++)
    syms->array[i] = 0;
//    cout<<length<<endl;
  }
  else{
      syms->bound=0;
      syms->array = NULL;
  }
  string rettype = Symtable->lookup(name);
  if(rettype=="present")
  {
    cout<<"variable redeclared"<<endl;
    exit(0);
  }
  else
    Symtable->insert(syms);
}

//updating values in symbol table

void id_arr::updval(int a){
  if(type == "Array")
  {
    int indx;
    if(expressed_val!=NULL)
    indx = expressed_val->accept(v);
  //  cout<<"index :"<<indx<<endl;
    Symtable->update(name,indx,a);
  }
  else
  Symtable->update(name,-1,a);
}


//Interpreting values

//visitor class


void interpreter::visit(Prog* prg){
  if(prg->code!=NULL)
  prg->code->accept(v);
}

void interpreter::visit(code_block *cd_blk){
  Symtable->all_stmts = cd_blk->statements_list->stmt_list;
  if(cd_blk->statements_list!=NULL)
  cd_blk->statements_list->accept(v);
}

void interpreter::visit(statement_list *Statement_list){
  for(int i=0; i<Statement_list->stmt_list.size(); i++)
    if(Statement_list->stmt_list[i]!=NULL)
    if(Statement_list->stmt_list[i]->type == "goto type")
    Symtable->upd_goto_indx(Statement_list->stmt_list[i]->name,i);
  // for(int i=0; i<Symtable->all_stmts.size(); i++)
  // if(Symtable->all_stmts[i]!=NULL)
  // {
  //   if(Symtable->all_stmts[i]->type == "goto type")
  //   cout<<Symtable->all_stmts[i]->name<<"yaahoo"<<endl;
  // }

  for(int i=0; i<Statement_list->stmt_list.size(); i++)
  if(Statement_list->stmt_list[i]!=NULL)
  {
    int retval = Statement_list->stmt_list[i]->accept(v);
    if(retval == 0)
    break;
  }
}

int interpreter::visit(statements *Statements){
  if(Statements->stmt!=NULL)
{
//  cout<<Statements->name<<"hi"<<endl;
    return(Statements->stmt->accept(v));
  }
}

int interpreter::visit(goto_stmt *Goto_stmt){
  int rettype=0;
  if(Goto_stmt->expression!=NULL)
    rettype = Goto_stmt->expression->accept(v);
  else
    rettype = 1;
  if(rettype == 1)
  {
    string rettype = Symtable->lookup(Goto_stmt->name);
    if(rettype == "Not present")
    {
      cout<<"label not present"<<endl;
      exit(0);
    }

    int index = Symtable->get_goto_indx(Goto_stmt->name);
  //  cout<<index<<"hlo"<<endl;
    for(int i=index; i<Symtable->all_stmts.size(); i++)
    {
      int retval = Symtable->all_stmts[i]->accept(v);
      if(retval == 0)
      break;
    }
    /*if(Goto_stmt->stmt_list!=NULL)
    Goto_stmt->stmt_list->accept(v);*/
    return 0;
  }
  return 1;
}

int interpreter::visit(println_stmt *Println_stmt){
  if(Println_stmt->print_matter!="")
  cout<<Println_stmt->print_matter<<" ";
  if(Println_stmt->rdst!=NULL)
  Println_stmt->rdst->accept(v);
  cout<<endl;
  return 1;
}

int interpreter::visit(print_stmt *Print_stmt){
  if(Print_stmt->print_matter!="")
  cout<<Print_stmt->print_matter<<" ";
  if(Print_stmt->rdst != NULL)
  Print_stmt->rdst->accept(v);
  return 1;
}

int interpreter::visit(read_stmt *Read_stmt){
  for(int i=0; i<Read_stmt->rvalues.size();i++)
  {
    if(Read_stmt->rvalues[i]!=NULL)
    {
      int a;
      cin>>a;
      Read_stmt->rvalues[i]->updval(a);
    }
  }
  return 1;
}

void interpreter::visit(rd_st *Rd_st){
  for(int i=0; i<Rd_st->rdst_list.size(); i++)
  {
    if(Rd_st->rdst_list[i]!=NULL)
    {
      int retval = Rd_st->rdst_list[i]->accept(v);
      cout<<retval<<" ";
    }
  }
//  cout<<endl;
}

int interpreter::visit(while_stmt *While_stmt){
  int rettype;
  if(While_stmt->expression!=NULL)
  rettype = While_stmt->expression->accept(v);
  while(rettype)
  {
    if(While_stmt->whilestmtlist!=NULL)
    While_stmt->whilestmtlist->accept(v);
    if(While_stmt->expression!=NULL)
    rettype = While_stmt->expression->accept(v);
  }
  return 1;
}


int interpreter::visit(for_stmt *For_stmt){
  int val = For_stmt->id_or_arr->accept(v);
  For_stmt->id_or_arr->updval(val+For_stmt->from_val);
  for(int i=For_stmt->from_val; i<=For_stmt->to_val; i=i+For_stmt->incr_val)
  {
    val = For_stmt->id_or_arr->accept(v);
    if(For_stmt->forstmtlist!=NULL)
    For_stmt->forstmtlist->accept(v);
    if(For_stmt->format=="first")
      For_stmt->id_or_arr->updval(val+1);
    else
    For_stmt->id_or_arr->updval(val+For_stmt->incr_val);

  }
  return 1;
}

int interpreter::visit(else_stmt *Else_stmt){
  if(Else_stmt->elsestmtlist!=NULL)
  Else_stmt->elsestmtlist->accept(v);
  return 1;
}

int interpreter::visit(if_stmt *If_stmt){
  int rettype;
  if(If_stmt->expression!=NULL)
  rettype = If_stmt->expression->accept(v);
  if(rettype==1)
  {
    if(If_stmt->ifstmtlist!=NULL)
      If_stmt->ifstmtlist->accept(v);
    }
  else
  {
    if(If_stmt->elsestmt!=NULL)
      If_stmt->elsestmt->accept(v);
    }
    return 1;
}


int interpreter::visit(assign_stmt *Assign_stmt){
  int a;
  if(Assign_stmt->expression!=NULL)
  a=Assign_stmt->expression->accept(v);
//  cout<<"assign "<<a<<endl;
  Assign_stmt->id_or_arr->updval(a);
  return 1;
}

int interpreter::visit(id_arr *idarr){
  int ret;
  if(idarr->type == "Array")
  {
    int a;
    if(idarr->expressed_val!=NULL)
      a = idarr->expressed_val->accept(v);
      ret = Symtable->getval(idarr->name,a);
  }
  else
    ret = Symtable->getval(idarr->name,-1);
    return ret;
}


int interpreter::visit(Integer *integer){
  return integer->value;
}

int interpreter::visit(arithexpr *Arithexpr){
  int a,b;
  if(Arithexpr->lhs!=NULL)
  a = Arithexpr->lhs->accept(v);
  if(Arithexpr->rhs!=NULL)
  b= Arithexpr->rhs->accept(v);
  if(Arithexpr->opr == "+")
  return a+b;
  else if(Arithexpr->opr == "-")
  return a-b;
  else if(Arithexpr->opr == "*")
  return a*b;
  else if(Arithexpr->opr == "/")
  return a/b;
  else if(Arithexpr->opr == "&")
  return a&b;
  else if(Arithexpr->opr == "|")
  return a|b;
  else if(Arithexpr->opr == "^")
  return a^b;
  else if(Arithexpr->opr == "%")
  return a%b;
}

int interpreter::visit(boolean_expr *Boolean_expr){
  int a,b;
  if(Boolean_expr->lhs!=NULL)
  a = Boolean_expr->lhs->accept(v);
  if(Boolean_expr->rhs!=NULL)
  b = Boolean_expr->rhs->accept(v);
  if(Boolean_expr->opr == "<=")
  {
    if(a<=b)
    return 1;
    else return 0;
  }
  if(Boolean_expr->opr == "<")
  {
      if(a<b)
    return 1;
    else return 0;
  }
  if(Boolean_expr->opr == ">=")
  {
    if(a>=b)
    return 1;
    else return 0;
  }
  if(Boolean_expr->opr == ">")
  {
      if(a>b)
    return 1;
    else return 0;
  }
  if(Boolean_expr->opr == "==")
  {
    if(a==b)
    return 1;
    else return 0;
  }
  if(Boolean_expr->opr == "!=")
  {
      if(a!=b)
    return 1;
    else return 0;
  }
  if(Boolean_expr->opr == "&&")
  {  if(a && b)
    return 1;
    else return 0;
  }
  if(Boolean_expr->opr == "||")
  {
      if(a||b)
    return 1;
    else return 0;
  }
}
