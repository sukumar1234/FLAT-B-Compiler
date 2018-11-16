%{
  #include<bits/stdc++.h>
  #include "class_defs.h"



  using namespace std;
  int yylex();
  extern "C" int yyparse();
  extern int yylineno;
  void yyerror(char const *s);
	extern "C" FILE *yyin;
  extern Visitor *v;
  void check_dec(char *, int);
  set <string> var_declared;
  set <string> arr_declared;
  class Prog* start=NULL;
%}


%token IF
%token<stringvalue> DATATYPE
%token<intval> NUMBER
%token<stringvalue> IDENTIFIER
%token ETOK
%token COMMA
%token COL
%token WHILE
%token GOTO
%token PRINT
%token PRINTLN
%token READ
%token<stringvalue> PRINT_MATTER
%token<stringvalue> DEC_BLOCK
%token<stringvalue> CODE_BLOCK
%token ELSE
%token FOR
%left ASSIGN EQ GT_EQ LT_EQ LT GT NE
%left '+' '-'
%left '*' '/'
%left AND OR BIT_AND BIT_OR XOR NEG MOD
%left '{' '}' '[' ']' '(' ')'
%token SEMI_COLON


/*non terminal symbols types*/

%type<prog> program;
%type<decls> decl_block;
%type<decllist> decl_list;
%type<type_n_varlist> type_variables;
%type<varslist> variables;
%type<varlist>variable;
%type<codes> code_block;
%type<Statement_list> statement_list;
%type<Statements> statements;
%type<Statement> statement;
%type<Assign_statement> assign_stmt;
%type<If_stmt> if_stmt;
%type<Else_stmt> else_stmt;
%type<For_stmt> for_stmt;
%type<While_stmt> while_stmt;
%type<Print_stmt> print_stmt;
%type<Println_stmt> println_stmt;
%type<Rd_st> rd_st;
%type<Goto_stmt> goto_stmt;
%type<Read_stmt> read_stmt;
%type<Id_arr> id_arr;
%type<Expr> expr;
%type<Boolean_expr> boolean_expr;

//Grammar starts

%%
program		:	decl_block code_block           {$$=new Prog($1,$2); start =$$;}


/*DECLARATION BLOCK BEGINS */

decl_block	:	DEC_BLOCK '{' decl_list '}'       {$$=new decl_block($3);}

decl_list	:	type_variables SEMI_COLON             {$$=new decl_list();$$->push_back($1);}
		      | decl_list type_variables SEMI_COLON   {$$->push_back($2);}
		      ;

type_variables  :   DATATYPE variables            {$$ = new type_n_variables(string($1),$2);}
                ;

variables	:   variable                             {$$=new Vars();$$->push_back($1);}
          |   variables COMMA variable            {$$->push_back($3);}
          ;

variable : IDENTIFIER                             {$$=new Var(string("Normal"),string($1));}
        |   IDENTIFIER'['NUMBER']'                {$$=new Var(string("Array"),string($1),$3);}
        ;


/*DECLARATION BLOCK ENDS*/



/*CODE BLOCK BEGINS*/
code_block	:	CODE_BLOCK '{' statement_list '}'   {$$=new code_block($3);}

statement_list	: statement_list statements        {$$->push_back($2);}
                |                                  {$$=new statement_list();}
		            ;


statements  :   IDENTIFIER COL statement           {$$ = new statements(string("goto type"),string($1),$3);}
            |  statement                           {$$=new statements(string("Normal"),$1);}
            ;
statement    :  assign_stmt SEMI_COLON            {$$=$1;}
              | if_stmt                           {$$=$1;}
              | for_stmt                          {$$=$1;}
              | while_stmt                        {$$=$1;}
              |goto_stmt   SEMI_COLON             {$$=$1;}
              |print_stmt  SEMI_COLON             {$$=$1;}
              | read_stmt   SEMI_COLON            {$$=$1;}
              |println_stmt  SEMI_COLON           {$$=$1;}
              ;


/*
statements	:	id_arr ASSIGN expr SEMI_COLON
		|	IDENTIFIER COL statements
		|	if_stmt
		| 	for_stmt
		|	while_stmt
		| 	goto_stmt
		|	print_stmt
		|	read_stmt
		|	println_stmt
		|	SEMI_COLON
		;
*/

assign_stmt : id_arr ASSIGN expr                        {$$=new assign_stmt($1,string("="),$3);}

goto_stmt	:	 GOTO IDENTIFIER IF boolean_expr             {$$=new goto_stmt(string($2),$4);}
		|	 GOTO IDENTIFIER                                   {$$=new goto_stmt(string($2));}
		;

print_stmt	:	PRINT PRINT_MATTER COMMA rd_st            {$$=new print_stmt(string($2),$4);}
		|	PRINT PRINT_MATTER                                {$$=new print_stmt(string($2));}
    | PRINT rd_st                                       {$$=new print_stmt(string(""),$2);}
		;


println_stmt	:	PRINTLN PRINT_MATTER COMMA rd_st           {$$=new println_stmt(string($2),$4);}
		|	PRINTLN PRINT_MATTER                                 {$$=new println_stmt(string($2));}
    | PRINTLN rd_st                                        {$$=new println_stmt(string(""),$2);}
		;


read_stmt	:	READ rd_st                               {$$=new read_stmt($2);}


while_stmt	:	WHILE boolean_expr '{' statement_list '}'      {$$=new while_stmt($2,$4);}

for_stmt	:	FOR id_arr ASSIGN NUMBER COMMA NUMBER '{' statement_list'}'          {$$=new for_stmt($2,$4,$6,$8);}
		|	FOR id_arr ASSIGN NUMBER COMMA NUMBER COMMA NUMBER '{' statement_list'}'   {$$=new for_stmt($2,$4,$6,$8,$10);}
		;

if_stmt		:	IF boolean_expr '{' statement_list '}' else_stmt  {$$=new if_stmt($2,$4,$6);}

else_stmt	:	ELSE '{' statement_list '}'                       {$$=new else_stmt($3);}
		|                                                         {$$=new else_stmt();}
		;

boolean_expr	:	expr LT_EQ expr                  {$$=new boolean_expr($1,string("<="),$3);}
		|	expr LT expr                               {$$=new boolean_expr($1,string("<"),$3);}
		|	expr GT_EQ expr                            {$$=new boolean_expr($1,string(">="),$3);}
		|	expr GT expr                               {$$=new boolean_expr($1,string(">"),$3);}
		|	expr EQ expr                               {$$=new boolean_expr($1,string("=="),$3);}
		| 	expr NE expr                             {$$=new boolean_expr($1,string("!="),$3);}
		| 	expr AND expr                            {$$=new boolean_expr($1,string("&&"),$3);}
		| 	expr OR expr                             {$$=new boolean_expr($1,string("||"),$3);}
		|	'('boolean_expr')'                         {$$=$2;}
		;

expr		:	expr '+' expr                          {$$=new arithexpr($1,string("+"),$3);}
		|	expr '-' expr                              {$$=new arithexpr($1,string("-"),$3);}
		|	expr '*' expr                              {$$=new arithexpr($1,string("*"),$3);}
		|	expr '/' expr                              {$$=new arithexpr($1,string("/"),$3);}
		| 	expr BIT_AND expr                        {$$=new arithexpr($1,string("&"),$3);}
		| 	expr BIT_OR expr                         {$$=new arithexpr($1,string("|"),$3);}
		| 	expr XOR expr                            {$$=new arithexpr($1,string("^"),$3);}
		| 	expr MOD expr                            {$$=new arithexpr($1,string("%"),$3);}
		|	NUMBER                                     {$$=new Integer($1);}
		|	id_arr                                     {$$=$1;}
		|	'('expr')'                                 {$$=$2;}
		;


rd_st		:	id_arr                                {$$=new rd_st($1);}
		|	rd_st COMMA id_arr                        {$$->push_back($3);}
		;

id_arr		:	IDENTIFIER                          {$$=new id_arr("Normal",string($1));}
		|	IDENTIFIER'['expr']'                      {$$=new id_arr("Array",string($1),$3);}
		;

/*cd_identifier	:	IDENTIFIER{}
		|	'-'IDENTIFIER{}
		;


all_num		:	NUMBER
		| 	'-'NUMBER
		;*/


%%

void yyerror (char const *s)
{
       fprintf (stderr, "%s near line no %d and near string %s\n", s,yylineno,yylval.stringvalue);
       exit(0);
}

void check_dec(char* s,int rd)
{
  if(rd == 1)
  {
      if(var_declared.find(s)!=var_declared.end())
      {
        printf("%s value redecleared at line no %d\n",s,yylineno);
        exit(0);
      }
      else
      {
          var_declared.insert(s);
      }
  }
  else if(rd == 2){
    if(var_declared.find(s)==var_declared.end())
    {
      fprintf(stderr,"%s variable not declared at line no %d\n",s,yylineno);
      exit(0);
    }
    }
    else if(rd == 3)
    {
        if(arr_declared.find(s)!=arr_declared.end())
        {
            printf("%s value redecleared at line no %d\n",s,yylineno);
            exit(0);
        }
        else
        {
          arr_declared.insert(s);
        }
    }
    else if(rd == 4){
      if(arr_declared.find(s)==arr_declared.end())
      {
        fprintf(stderr,"%s variable not declared at line no %d\n",s,yylineno);
        exit(0);
      }
  }
}


int main(int argc, char *argv[])
{
	if (argc == 1 ) {
		fprintf(stderr, "Correct usage: bcc filename\n");
		exit(1);
	}

	if (argc > 2) {
		fprintf(stderr, "Passing more arguments than necessary.\n");
		fprintf(stderr, "Correct usage: bcc filename\n");
	}
	yyin = fopen(argv[1], "r");
	yyparse();
  cout<<"Parse Tree annotated"<<endl;
  start->traverse();
  cout<<"done traversing"<<endl;
  //start->interpret();
  start->accept(v);
  cout<<"done interpreting"<<endl;

}
