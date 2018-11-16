%{
#include "class_defs.h"
#include<bits/stdc++.h>
#include "parser.tab.hpp"
using namespace std;
%}

%option noyywrap
%option yylineno

%%
"int"|"float"|"char"	{
			yylval.stringvalue = strdup(yytext);
			return DATATYPE;
		}
"if"		{
	yylval.stringvalue = strdup(yytext);
			return IF;
		}
"else"		{
yylval.stringvalue = strdup(yytext);
			return ELSE;
		}
"for"		{
yylval.stringvalue = strdup(yytext);
			return FOR;
		}
"while"		{
yylval.stringvalue = strdup(yytext);
			return WHILE;
		}
"goto"		{
yylval.stringvalue = strdup(yytext);
			return GOTO;
		}
"print"		{
yylval.stringvalue = strdup(yytext);
			return PRINT;
		}
"println"	{
yylval.stringvalue = strdup(yytext);
			return PRINTLN;
		}
"read"		{
yylval.stringvalue = strdup(yytext);
			return READ;
		}
\".*\"		{
			yylval.stringvalue = strdup(yytext);
			return PRINT_MATTER;
		}
\/\*.*\*\/	{
			printf("Comment Detected\n");
			//   \/\/.*;
		}
"declblock"	{
			yylval.stringvalue = strdup(yytext);
			return DEC_BLOCK;
		}
","		{
			yylval.stringvalue = strdup(yytext);
			return COMMA;
		}
";"		{
			yylval.stringvalue = strdup(yytext);
			return SEMI_COLON;
		}
"codeblock"	{
			yylval.stringvalue = strdup(yytext);
			return CODE_BLOCK;
		}
[0-9][0-9]*	{
			yylval.intval = atoi(yytext);
			return NUMBER;
                }

[a-zA-Z][a-zA-Z0-9\_]* {
			yylval.stringvalue = strdup(yytext);
			return IDENTIFIER;
		     }

"="		{
				yylval.stringvalue = strdup(yytext);
				return ASSIGN;
				}
"!="		{yylval.stringvalue = strdup(yytext);return NE;}
"^"		{yylval.stringvalue = strdup(yytext);return XOR;}
"%"		{yylval.stringvalue = strdup(yytext);return MOD;}
"~"		{yylval.stringvalue = strdup(yytext);return NEG;}
"&"		{yylval.stringvalue = strdup(yytext);return BIT_AND;}
"|"		{yylval.stringvalue = strdup(yytext);return BIT_OR;}
"||"	{yylval.stringvalue = strdup(yytext);	return OR;}
"&&"	{yylval.stringvalue = strdup(yytext);	return AND;}
":"		{yylval.stringvalue = strdup(yytext);return COL;}
">"		{yylval.stringvalue = strdup(yytext);return GT;}
"<"		{yylval.stringvalue = strdup(yytext);return LT;}
">="		{yylval.stringvalue = strdup(yytext);return GT_EQ;}
"<="		{yylval.stringvalue = strdup(yytext);return LT_EQ;}
"=="		{yylval.stringvalue = strdup(yytext);return EQ;}
"/"		{yylval.stringvalue = strdup(yytext);return '/';}
"+"		{yylval.stringvalue = strdup(yytext);return '+';}
"-"		{yylval.stringvalue = strdup(yytext);return '-';}
"*"		{yylval.stringvalue = strdup(yytext);return '*';}
"{"		{yylval.stringvalue = strdup(yytext);return '{';}
"}"		{yylval.stringvalue = strdup(yytext);return '}';}
"("		{yylval.stringvalue = strdup(yytext);return '(';}
")"		{yylval.stringvalue = strdup(yytext);return ')';}
"["		{yylval.stringvalue = strdup(yytext);return '[';}
"]"		{yylval.stringvalue = strdup(yytext);return ']';}
[ \t]		{ /* Do nothing */ }
[\n]		{ }
.		{
			yylval.stringvalue = strdup(yytext);
		  printf("Unexpected token encountered: %s\n", yytext);
		  return ETOK;
		}
