%{
	#include <stdlib.h>
	#include <stdio.h>
	FILE* f;
	int i;
	int comment_flag;
    int string_flag;
	int comment_begin;
    int string_begin;
    void printToken(int line,char* type,char* text);
    void printError(int line,char* msg,char* text);
%}
/* 记录行号 */
%option yylineno

/*常量*/
INT 0|[1-9][0-9]*
INT_HEX 0[xX][a-fA-F0-9]+
INT_OCT 0[1-7][0-7]*
INT_BIN 0[bB][01]+
FLOAT {INT}\.[0-9]+
SCIENCE (([0-9]+\.[0-9]*)|([0-9]*\.[0-9]+)|INT)[Ee][-+]?[0-9]+
INTEGER {INT_HEX}|{INT}|{INT_OCT}|{INT_BIN}
DOUBLE {SCIENCE}|{FLOAT}
STRING \"[^\"\n]*\"
STRING_BEGIN \"

/*标识符*/
ID [a-z_A-Z][a-z_A-Z0-9]*
/*关键字*/
STRUCT struct
RETURN return
IF if
ELSE else
WHILE while
TYPE int|float

/*运算符*/
COMMA ,
ASSIGNOP  =
PLUS  \+
MINUS \-
STAR  \*
DIV   \/
AND   &&
DOT   \.
NOT   \!
/* 界符 */
SEMI  ;
LP    \(
RP    \)
LB    \[
RB    \]
LC    \{
RC    \}
SPACE [ \f\n\r\t\v]+

/*注释*/
COMMENT ("//".*)|("/*"([*]*(([^*/])+([/])*)*)*"*/")
COMMENT_BEGIN "/*"

/*错误*/
AERROR .
INT_HEX_ERROR 0[xX][a-fA-F0-9]*[g-zG-Z]+[a-fA-F0-9]*
INT_OCT_ERROR 0[0-7]*[89]+[0-7]*
INT_BIN_ERROR 0[bB][01]*[2-9]+[01]*
STRING_END_ERROR \"[^\"\n]*$

%%
 /*跳过空白和注释*/
{SPACE}             { ECHO; }
{COMMENT}           { printToken(yylineno,"注释",yytext);}
{COMMENT_BEGIN} {
	comment_flag = 1;
	comment_begin = yylineno;}
{STRING_BEGIN} {
	string_flag = 1;
	string_begin = yylineno;}
 /*未终结注释错误*/
<<EOF>> {
	if(comment_flag == 1){
        printError(comment_begin, "注释未终结","");
		comment_flag = 0;}
    if(string_flag == 1){
        printError(string_begin, "字符串未终结","");
        string_flag = 0;
    }
	yyterminate();
}
 /*关键字*/
{TYPE}              |
{STRUCT}            |
{RETURN}            |
{IF}                |
{ELSE}              |
{WHILE}             { printToken(yylineno,"关键字",yytext);}
 /*数字类型错误*/
{INT_HEX_ERROR}     {if(comment_flag!=1) printError(yylineno, "十六进制数错误",yytext);}
{INT_OCT_ERROR}     {if(comment_flag!=1) printError(yylineno, "八进制数错误",yytext);}
{INT_BIN_ERROR}     {if(comment_flag!=1) printError(yylineno, "二进制数错误",yytext);}
 /*常量表示*/
{INTEGER}            {if(comment_flag!=1)  printToken(yylineno,"整数",yytext);}
{DOUBLE}            {if(comment_flag!=1)  printToken(yylineno,"浮点数",yytext);}
{STRING}            {
                        if(yytext[yyleng-2]=='\\'){
                            yyless(yyleng-1);
                            yymore();
                        }
                        else{
                            printToken(yylineno,"字符串",yytext);
                        }
                    }
{STRING_END_ERROR}  { printError(yylineno,"字符串未终结",yytext); }
 /*标点*/
{SEMI}              |
{COMMA}             {if(comment_flag!=1)  printToken(yylineno,"标点",yytext);}
 /*运算符*/
{ASSIGNOP}          |
{PLUS}              |
{MINUS}             |
{STAR}              |
{DIV}               |
{AND}               |
{DOT}               |
{NOT}               {if(comment_flag!=1)  printToken(yylineno,"运算符",yytext);}
 /*括号*/
{LP}                |
{RP}                |
{LB}                |
{RB}                |
{LC}                |
{RC}                {if(comment_flag!=1)  printToken(yylineno,"括号",yytext);}
 /*标识符*/
{ID}                {if(comment_flag!=1)  printToken(yylineno,"标识符",yytext);}
{AERROR}            {if(comment_flag!=1) printError(yylineno, "错误字符",yytext);}
%%

int main(int argc,char** argv){
	if(argc<2){
		yylex();
		return 0;
	}
	for(i=1;i<argc;i++){
		f=fopen(argv[i],"r");
		if(!f){
			perror(argv[i]);
			return 1;
		}
		comment_flag = 0;
        yyrestart(f);
        yylex();
        fclose(f);
	}
	return 0;
}

void printToken(int line,char* type,char* text){
    printf("<%d, %s, %s>",line,type,text);
}

void printError(int line,char* msg,char* text){
    printf("<error: %d, msg: %s, %s>",line,msg,text);
}


int yywrap() {
    return 1;
}
