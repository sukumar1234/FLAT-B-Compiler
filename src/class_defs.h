#include<bits/stdc++.h>
using namespace std;

enum stmttypes{
	assign=0,
	if_statement=1,
	for_statement=2,
	while_statement=3,
	goto_statement=4,
	print_statement=5,
	read_statement=6,
	println_statement=7
};

enum exprtype{
	arith=0,
	boolean=1
};
union Node{

	class Prog *prog;
	class decl_block* decls;
	class decl_list* decllist;
	class type_n_variables* type_n_varlist;
	class Vars* varslist;
	class Var* varlist;
	class code_block* codes;
	class statement_list *Statement_list;
	class statements *Statements;
	class statement *Statement;
	class assign_stmt *Assign_statement;
	class if_stmt *If_stmt;
	class else_stmt *Else_stmt;
	class for_stmt *For_stmt;
	class while_stmt *While_stmt;
	class print_stmt *Print_stmt;
	class println_stmt *Println_stmt;
	class rd_st *Rd_st;
	class read_stmt *Read_stmt;
	class goto_stmt *Goto_stmt;
	class id_arr* Id_arr;
	class expr* Expr;
	class boolean_expr* Boolean_expr;
//	class arithexpr *Arithexpr;
	int intval;
	char* stringvalue;
  Node(){
    intval = 0;
    stringvalue = NULL;
		decls=NULL;
		codes=NULL;
		decllist=NULL;
		type_n_varlist=NULL;
		varslist=NULL;
		varlist=NULL;
		Statement_list =NULL;
		Statements=NULL;
		Statement=NULL;
		Assign_statement=NULL;
		If_stmt=NULL;
		Else_stmt=NULL;
		For_stmt=NULL;
		While_stmt=NULL;
		Print_stmt=NULL;
		Println_stmt=NULL;
		Rd_st=NULL;
		Read_stmt=NULL;
		Goto_stmt=NULL;
		Id_arr=NULL;
		Expr=NULL;
		Boolean_expr=NULL;
  }
  ~Node(){}
};

typedef union Node YYSTYPE;

#define YYSTYPE_IS_DECLARED 1


/*
class Prog;
class decl_block;
class code_block;
class decl_list;
class variable;
class identifier;
class expr;
class statement_list
class statements;
class id_arr;
class if_stmt;
class for_stmt;
class while_stmt;
class goto_stmt;
class print_stmt;
class read_stmt;
class println_stmt;
class cd_identifier;
class boolean_expr;
class rd_st;
class all_num;
*/

//class declarations
class AstNode;
class Prog;
class decl_block;
class decl_list;
class type_n_variables;
class Vars;
class Var;
class code_block;
class statement_list;
class statements;
class statement;
class assign_stmt;
class if_stmt;
class else_stmt;
class for_stmt;
class while_stmt;
class print_stmt;
class println_stmt;
class read_stmt;
class rd_st;
class goto_stmt;
class id_arr;
class expr;
class boolean_expr;
class arithexpr;
class Integer;




//visitor base class

class Visitor{
public:
//	virtual void visit(statement* stmt);
//	virtual void visit(expr* Expr);
	virtual int visit(arithexpr* Arithexpr)=0;
	virtual int visit(boolean_expr* boolexpr)=0;
	virtual int visit(Integer* integer)=0;
	virtual int visit(id_arr* idarr)=0;
	virtual int visit(assign_stmt* Assign_stmt)=0;
	virtual int visit(for_stmt* For_stmt)=0;
	virtual int visit(while_stmt* While_stmt)=0;
	virtual int visit(goto_stmt* Goto_stmt)=0;
	virtual int visit(if_stmt* If_stmt)=0;
	virtual int visit(else_stmt* Else_stmt)=0;
	virtual int visit(read_stmt *Read_stmt)=0;
	virtual void visit(rd_st* Rd_st)=0;
	virtual int visit(print_stmt* Print_stmt)=0;
	virtual int visit(println_stmt* Println_stmt)=0;
	virtual int visit(statements* Statements)=0;
	virtual void visit(statement_list* Statement_list)=0;
	virtual void visit(code_block* cd_blk)=0;
	virtual void visit(Prog* prg)=0;
};

class interpreter:public Visitor{
public:
	interpreter(){}
//	void visit(statement* stmt);
//	void visit(expr* Expr);
	int visit(arithexpr* Arithexpr);
	int visit(boolean_expr* boolexpr);
	int visit(Integer* integer);
	int visit(id_arr* idarr);
	int visit(assign_stmt* Assign_stmt);
	int visit(for_stmt* For_stmt);
	int visit(while_stmt* While_stmt);
	int visit(goto_stmt* Goto_stmt);
	int visit(if_stmt* If_stmt);
	int visit(else_stmt* Else_stmt);
	int visit(read_stmt *Read_stmt);
	void visit(rd_st* Rd_st);
	int visit(print_stmt* Print_stmt);
	int visit(println_stmt* Println_stmt);
	int visit(statements* Statements);
	void visit(statement_list* Statement_list);
	void visit(code_block* cd_blk);
	void visit(Prog* prg);
};


class AstNode{
};



//for variable NT
class Var:public AstNode{
private:
public:
	string decl_type; /*array or normal*/
	string name;    /*name of the variable*/
	string datatype;/*datatype of variable*/
	unsigned int length; /*length of the given array*/
	/*Constructors*/

	Var(string,string,unsigned int);
	Var(string,string);
	/*Methods*/
	void setDataType(string);/*set data type*/
	bool is_array();
	string getName(){return name;}
	int getLength(){return length;}
	void traverse();
//	void accept(Visitor *v){
//		v->visit(this);
//	}

};

//for variables NT
class Vars:public AstNode{
private:
public:
	vector<class Var*>	variables_list;
	Vars(){}
	void push_back(class Var*);
	vector<class Var*> getVarslist();
	void traverse();
/*	void accept(Visitor *v){
		v->visit(this);
	}*/

};


//for type variables NT
class type_n_variables:public AstNode{
private:
public:
	string datatype;
	vector<class Var*> vars_list;
	type_n_variables(string,class Vars*);
	vector<class Var*> getVarslist();
	void traverse();
	// void accept(Visitor *v){
	// 	v->visit(this);
	// }

};

//for decl_list NT
class decl_list:public AstNode{
private:
public:
	vector<class type_n_variables*> Varstype;
	decl_list();
	void push_back(class type_n_variables*);
	void traverse();
	// void accept(Visitor *v){
	// 	v->visit(this);
	// }

};


// for decl_block NT
class decl_block:public AstNode{
public:
	class decl_list* declarations_list;
	int cnt;
	decl_block(class decl_list*);
	void traverse();
	// void accept(Visitor *v){
	// 	v->visit(this);
	// }

};


//code_block begins


//for statement NT
class statement:public AstNode{
public:
	stmttypes stype;
	statement(){}
	virtual void traverse(){}
	virtual int accept(Visitor *v){
	}

};

//for expression NT
class expr:public AstNode{
public:
	exprtype etype;
	virtual void traverse(){}
	virtual int accept(Visitor *v){
	}

};

class boolean_expr:public expr{
public:
	string opr;
	class expr* lhs;
	class expr* rhs;
	boolean_expr(class expr*,string,class expr*);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};


class arithexpr:public expr{
public:
	string opr;
	class expr* lhs;
	class expr* rhs;
	arithexpr(class expr*,string,class expr*);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};

//for integer
class Integer:public expr{
public:
	int value;
	Integer(int);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};


//id_arr
class id_arr:public expr{
public:
	string name;
	string type; //array or normal
	class expr* expressed_val;
	id_arr(string,string);
	id_arr(string,string,class expr*);
	void updval(int);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};


//assign statement
class assign_stmt:public statement{
public:
	class id_arr* id_or_arr;
	class expr* expression;
	string opr;
	assign_stmt(class id_arr*,string,class expr*);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};


//if stmt NT

class if_stmt:public statement{
public:
	class boolean_expr* expression;
	class statement_list* ifstmtlist;
	class else_stmt* elsestmt;
	if_stmt(class boolean_expr*,class statement_list*,class else_stmt*);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};

class else_stmt:public statement{
public:
	class statement_list* elsestmtlist;
	else_stmt(class statement_list*);
	else_stmt(){elsestmtlist=NULL;}
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};

//for stmt NT

class for_stmt:public statement{
public:
	class id_arr * id_or_arr;
	int from_val;
	int to_val;
	int incr_val;
	string format;
	class statement_list* forstmtlist;
	for_stmt(class id_arr*,int,int,class statement_list*);
	for_stmt(class id_arr*,int,int,int,class statement_list*);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};

//while stmt NT
class while_stmt:public statement{
public:
	class boolean_expr *expression;
	class statement_list *whilestmtlist;
	while_stmt(class boolean_expr*, class statement_list*);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};

//rd_st NT
//read statement NT is nothing but rd_st

class rd_st:public AstNode{
public:
	vector<class id_arr*> rdst_list;
	rd_st(class id_arr*);
	vector<class id_arr*> getrdlist();
	void push_back(class id_arr*);
	void traverse();
	void accept(Visitor *v){
		v->visit(this);
	}

};

//for read statement
class read_stmt:public statement{
public:
	vector<class id_arr*> rvalues;
	read_stmt(class rd_st*);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}
};



//print statement NT
class print_stmt:public statement{
public:
	string print_matter;
	class rd_st* rdst;
	print_stmt(string,class rd_st*);
	print_stmt(string);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};

//println statement NT
class println_stmt:public statement{
public:
	string print_matter;
	class rd_st *rdst;
	println_stmt(string,class rd_st*);
	println_stmt(string);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};

//Goto statement NT
class goto_stmt:public statement{
public:
	string name;
	class boolean_expr* expression;
	goto_stmt(string,class boolean_expr*);
	goto_stmt(string);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};


//for statements NT
class statements:public AstNode{
public:
	class statement* stmt;
	string type;
	string name;
	statements(string,string,class statement*);
	statements(string,class statement*);
	void traverse();
	int accept(Visitor *v){
		v->visit(this);
	}

};



//for statement_list NT
class statement_list:public AstNode{
public:
	vector<class statements*> stmt_list;
	statement_list(){}
	void push_back(class statements*);
	void traverse();
	void accept(Visitor *v){
		v->visit(this);
	}

};



class code_block:public AstNode{
public:
	class statement_list* statements_list;
	code_block(class statement_list*);
	void traverse();
	void accept(Visitor *v){
		v->visit(this);
	}

};

class Prog:public AstNode{
//  string name; /*name of the class */
public:
  class code_block* code;/*code written in code_block*/
	class decl_block* dec;/*code written in decl_block*/
  Prog(class decl_block*,class code_block*);
	void traverse();
	void accept(Visitor *v){
		v->visit(this);
	}

//	void traverse();
};


//symbol table

typedef struct sym_types{
	int val;		// stores the value of variable
	string id; // stores the variable
	string datatype; // datatype , can be int or float
	int *array; // to maintain the array for variable defined
	unsigned int bound; // length of the array
	string type; //goto or normal
	int index;
}sym_types;

class symbol_table{
private:
public:
	vector<sym_types*> stable;
	vector<class statements*> all_stmts;
	symbol_table(){}
	void insert(sym_types*);
	string lookup(string);
	int getval(string,int);
	void update(string,int,int);
	void upd_goto_indx(string,int);
	int get_goto_indx(string);
};
