%{
#include <stdio.h> 
#include <stdlib.h> 
#include <sys/malloc.h> 

extern int cur_line_num;
int yylex();
void printProduction(char* nonTerminal,char* symbol);
void yyerror(const char* msg);
%}

%start Program

/*bison可以从这个定义中产生yylval的定义*/ 
%union { 
    int      ival;
    char     *sval;
    double   dval;
    int      bval;
}

%token    T_Le                
%token    T_Ge                
%token    T_Eq                
%token    T_Ne                
%token    T_And               
%token    T_Or                
%token    T_Void              
%token    T_Int               
%token    T_Double            
%token    T_Boolean           
%token    T_String    
%token    T_Null             
%token    T_For               
%token    T_While             
%token    T_If                
%token    T_Else              
%token    T_Return            
%token    T_Break            
%token    T_Print             
%token    T_ReadInteger       
%token    T_ReadLine          
%token    <ival>   T_IntConstant       
%token    <dval>   T_DoubleConstant    
%token    <sval>   T_StringConstant    
%token    <sval>   T_Identifier        
%token    <bval>   T_BooleanConstant   
%token    T_Lineend           

%left ')' ']'
%left ','
%left '='
%left T_OR
%left T_AND
%nonassoc T_Eq T_Ne
%nonassoc '<' '>' T_LET T_HET
%left '+' '-'
%left '*' '/' '%'
%right '!'
%left '.' '(' '['
%nonassoc T_ELSE
%nonassoc T_IFX

%%
Program     :   Fieldlist               { printProduction( "Program", "Fieldlist");                 } 
            |   Fieldlist Function      { printProduction( "Program", "Fieldlist Function");        } 
            |   error                   { yyerror("Program");                                       }
            ; 

/* 函数 */             
Function    :   Type T_Identifier '(' FormalParams ')' StmtBlock 
                                       { printf("%15s -> %-15s \n",  "Function", "Type Identifier(FormalParams) StmtBlock"); } 
            ;

Fieldlist   :   Fieldlist Field         { printProduction("Fieldlist", "Fieldlist Field");          } 
            |                           { printProduction("Fieldlist", " ");                        }
            |   error                   { yyerror("Fieldlist");                                     }
            ;

Field       :   Variable                { printProduction("Field", "Variable");                     }
            |   Function                { printProduction("Field", "Function");                     } 
            ;
/* 变量定义 */
VariableDecl:   Type T_Identifier       { printProduction("VariableDecl", "Type Identifier");       }
            |   error                   { yyerror("Variable");                                      }
            ;

Variable    :   VariableDecl ';'        { printProduction("Variable", "VariableDecl");              } 
            |   error                   { yyerror("Variable");                                      }
            ;

/* 变量类型 */
Type        :   T_Int                   { printProduction("Type", "Int");                           } 
            |   T_Double                { printProduction("Type", "Double");                        } 
            |   T_Boolean               { printProduction("Type", "Bool");                          } 
            |   T_String                { printProduction("Type", "String");                        } 
            |   T_Void                  { printProduction("Type", "Void");                          } 
            |   Type '[' ']'            { printProduction("Type", "Type[]");                        } 
            |   error                   { yyerror("Type");                                          }
            ;

/* 函数参数列表 */
FormalParams:   VariableDecl            { printProduction("FormalParams", "VariableDecl");          } 
            |   FormalParams ',' VariableDecl { printProduction("FormalParams", "FormalParams , VariableDecl");   } 
            |                           { printProduction("FormalParams", " ");                     } 
            ;

/* 语句块 */            
StmtBlock   :   '{' Stmtlist '}'        { printProduction("StmtBlock", ":{ Stmtlist } ");           } 
            |   error                   { yyerror("StmtBlock");                                     }
            ;

Stmtlist    :   Stmtlist Stmt           { printProduction("Stmtlist", "Stmtlist Stmt");             } 
            |                           { printProduction("Stmtlist", " ");                         }
            ; 

Stmt        :   Variable                { printProduction("Stmt", "Variable");                      } 
            |   SimpleStmt ';'          { printProduction("Stmt", "SimpleStmt ;");                  } 
            |   IfStmt                  { printProduction("Stmt", "IfStmt");                        } 
            |   WhileStmt               { printProduction("Stmt", "WhileStmt ");                    } 
            |   ForStmt                 { printProduction("Stmt", "ForStmt ");                      } 
            |   BreakStmt ';'           { printProduction("Stmt", "BreakStmt ;");                   } 
            |   ReturnStmt ';'          { printProduction("Stmt", "ReturnStmt ;");                  } 
            |   PrintStmt ';'           { printProduction("Stmt", "PrintStmt ;");                   } 
            |   StmtBlock               { printProduction("Stmt", "StmtBlock ");                    }
            ;

/* 语句 */
SimpleStmt  :   LValue '=' Expr         { printProduction("SimpleStmt", "LValue = Expr ");          } 
            |   Call                    { printProduction("SimpleStmt", "Call ");                   } 
            |                           { printProduction("SimpleStmt", " ");                       } 
            |   error                   { yyerror("SimpleStmt");                                    }
            ;

/* 左值 */            
LValue      :   T_Identifier            { printProduction("LValue", "T_Identifier");                }
            |   Expr '[' Expr ']'       { printProduction("LValue", "Expr [ Expr ] ");              } 
            |   error                   { yyerror("LValue");                                        }
            ;

/* 调用 */            
Call        :   T_Identifier '(' ActualParams ')'
                                        { printProduction( "Call", "T_Identifier ( ActualParams ) ");    } 
            ;

ActualParams:   ExprMore                { printProduction("ActualParams", "ExprMore");                   } 
            |                           { printProduction("Actuals", "");                           } 
            ;

ExprMore    :   Expr                    { printProduction("ExprMore", "Expr");                      } 
            |   ExprMore ',' Expr       { printProduction("ExprMore", "ExprMore , Expr");           } 
            ;

ForStmt     :   T_For '(' SimpleStmt ';' BoolExpr ';' SimpleStmt ')' Stmt   
                                        { printProduction("ForStmt", "For (SimpleStmt BoolExpr SimpleStmt ) Stmt ");} 
            ;

WhileStmt   :   T_While '(' BoolExpr ')' Stmt
                                        { printProduction("WhileStmt", "While ( BoolExpr ) Stmt "); } 
            ;

IfStmt      :   T_If '(' BoolExpr ')' Stmt %prec T_IFX
                                        { printProduction("IfStmt", "If (BoolExpr ) Stmt %prec T_IFX ");    }
            |   T_If '(' BoolExpr ')' Stmt T_Else Stmt
                                        { printProduction("IfStmt", "If (BoolExpr ) Stmt T_Else Stmt ");    }
            ;

ReturnStmt  :   T_Return                { printProduction("ReturnStmt", "Return");                  } 
            |   T_Return Expr           { printProduction("ReturnStmt", "Return Expr ");            } 
            ;
            
BreakStmt   :   T_Break                 { printProduction("ReturnStmt", "Break");                   }  
            ;

PrintStmt   :   T_Print '(' ExprMore ')'{ printProduction("PrintStmt", "Print (ExprMore) ");        } 
            ;

BoolExpr    :   Expr                    { printProduction("BoolExpr", "Expr");                      } 
            ;

Expr        :   Constant                { printProduction("Expr", "Constant");                      } 
            |   LValue                  { printProduction("Expr", "LValue");                        }
            |   Call                    { printProduction("Expr", "Call");                          } 
            |   '('Expr')'              { printProduction("Expr", "( Expr) ");                      } 
            |   Expr '+' Expr           { printProduction("Expr", "Expr + Expr ");                  } 
            |   Expr '-' Expr           { printProduction("Expr", "Expr - Expr ");                  } 
            |   Expr '*' Expr           { printProduction("Expr", "Expr * Expr ");                  } 
            |   Expr '/' Expr           { printProduction("Expr", "Expr /Expr ");                   } 
            |   Expr '%' Expr           { printProduction("Expr", "Expr % Expr ");                  } 
            |   '-' Expr                { printProduction("Expr", "- Expr ");                       } 
            |   Expr '<' Expr           { printProduction("Expr", "Expr < Expr ");                  } 
            |   Expr T_Le Expr          { printProduction("Expr", "LessEqual Expr ");               } 
            |   Expr '>' Expr           { printProduction("Expr", "Expr >Expr ");                   } 
            |   Expr T_Ge Expr          { printProduction("Expr", "GreaterEqual");                  } 
            |   Expr T_Eq Expr          { printProduction("Expr", "Equal Expr ");                   } 
            |   Expr T_Ne Expr          { printProduction("Expr", "NotEqual Expr ");                } 
            |   Expr T_And Expr         { printProduction("Expr", "And Expr ");                     } 
            |   Expr T_Or Expr          { printProduction("Expr", "Or Expr ");                      } 
            |   '!' Expr                { printProduction("Expr", "! Expr ");                       } 
            |   T_ReadInteger '(' ')'   { printProduction("Expr", "Expr ReadInteger ( ) ");         } 
            |   T_ReadLine '(' ')'      { printProduction("Expr", "Expr ReadLine ( ) ");            }
            ;

/* 常量 */            
Constant    :   T_IntConstant           { printProduction("Constant", "IntConstant");printf("%20c %-d\n",'|',$1);  } 
            |   T_DoubleConstant        { printProduction("Constant", "DoubleConstant");printf("%20c %-f\n",'|',$1);     } 
            |   T_BooleanConstant       { printProduction("Constant", "BoolConstant");printf("%20c %-d\n",'|',$1);   }  
            |   T_StringConstant        { printProduction("Constant", "StringConstant");printf("%20c %-s\n",'|',$1);     } 
            |   T_Null                  { printProduction("Constant", "Null");                      }
            ;

%%

int main() {
    return yyparse();
}

void printProduction(char* nonTerminal,char* symbol){
    printf("%15s -> %s\n",nonTerminal,symbol);
}

void yyerror(const char* msg) {
    printf("ERROR: %s at line %d \n", msg, cur_line_num);
}