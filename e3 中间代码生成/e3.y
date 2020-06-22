%{
#include <stdio.h> 
#include <stdlib.h> 
#include <sys/malloc.h> 

extern int cur_lineno;
int yylex();
void yyerror(const char* msg);
/* IF栈 */
int ii = 0, itop = -1, istack[100];
#define _BEG_IF     {istack[++itop] = ++ii;}
#define _END_IF     {itop--;}
#define _i          (istack[itop])

/* While栈 */
int ww = 0, wtop = -1, wstack[100];
#define _BEG_WHILE  {wstack[++wtop] = ++ww;}
#define _END_WHILE  {wtop--;}
#define _w          (wstack[wtop])
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
%token    T_Ic                
%token    T_Dc                
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

/* 左值是string类型 */
%type <sval> LValue

%left ')' ']'
%left ','
%left '='
%left T_OR
%left T_AND
%nonassoc T_Eq T_Ne
%nonassoc '<' '>' T_Le T_Ge
%left '+' '-'
%left '*' '/' '%'
%right '!'
%left T_Ic T_Dc
%left '.' '(' '['
%nonassoc T_ELSE
%nonassoc T_IFX

%%
/* 解析起点 */
Program     :   Fieldlist           { /* empty */      }
            |   Fieldlist Function  { /* empty */    } 
            |   error               { yyerror("Program");                                   }
            ; 
/* 函数 */             
Function    :   Type FuncName  '(' FormalParams ')' StmtBlock 
                                    { printf( "ENDFUNC\n\n"); } 
            ;

FuncName    :   T_Identifier        { printf("FUNC @%s:\n", $1); }
            ;
/* 字段列表 */
Fieldlist   :   Fieldlist Field     { /* empty */      } 
            |                       { /* empty */                    }
            |   error               { yyerror("Fieldlist");                                 }
            ;
/* 字段 */
Field       :   Variable            { /* empty */                 }
            |   Function            { /* empty */          }
            ;
/* 变量声明 */
VariableDecl:   Type T_Identifier   { printf("\tvar %s",$2); }
            |   error               { yyerror("VariableDecl");                              }
            ;
/* 变量定义 */
Variable    :   /* empty */         { /* empty */ }
            |   Variable VariableDecl ';'   { printf("\n\n");   }
            |   error               { yyerror("Variable");                                  }
            ;
/* 变量类型 */
Type        :   T_Int               { /* empty */                }
            |   T_Double            { /* empty */             }
            |   T_Boolean           { /* empty */               }
            |   T_String            { /* empty */             }
            |   T_Void              { /* empty */               }
            |   Type '[' ']'        { /* empty */             }
            |   error               { yyerror("Type");                                      }
            ;
/* 形式参数 */
FormalParams:                       { /* empty */          }
            |    _Params            { printf("\n\n");         }
            ;
_Params     :   Type T_Identifier   { printf("\targ %s", $2);     } 
            |   _Params ',' Type T_Identifier { printf(", %s", $4);  } 
            |                       { /* empty */          }
            ;

/* 语句块 */            
StmtBlock   :   '{' Stmtlist '}'    { /* empty */ }
            |   error               { yyerror("StmtBlock");                                 }
            ;
/* 语句列表 */
Stmtlist    :   Stmtlist Stmt       { /* empty */  }
            |                       { /* empty */                     }
            ; 
/* 语句 */
Stmt        :   Variable            { /* empty */           }
            |   SimpleStmt ';'      { /* empty */       }
            |   IfStmt              { /* empty */             }
            |   WhileStmt           { /* empty */         }
            |   ForStmt             { /* empty */           }
            |   BreakStmt ';'       { /* empty */        }
            |   ReturnStmt ';'      { /* empty */       }
            |   PrintStmt ';'       { /* empty */        }
            |   StmtBlock           { /* empty */                }
            ;

/* 简单语句 如赋值自增 */
SimpleStmt  :   LValue '=' Expr     { printf("\tpop %s\n\n", $1);      } 
            |   IncrementStmt       { /* empty */      } 
            |   DecrementStmt       { /* empty */      } 
            |   Call                { /* empty */        }
            |                       { /* empty */            }
            |   error               { yyerror("SimpleStmt");                                }
            ;
/* 自增语句 */
IncrementStmt:   LValue T_Ic         { printf("\tpush #1\n\tadd\n");   } 
            ;
/* 自减语句 */
DecrementStmt:   LValue T_Dc         { printf("\tpush #1\n\tsub\n");   } 
            ;

/* 左值 */            
LValue      :   T_Identifier        { $$ = $1;            }
            |   Expr '[' Expr ']'   { /* empty */   }
            |   error               { yyerror("LValue");                                    }
            ;

/* 调用 */            
Call        :   T_Identifier '(' ActualParams ')'
                                    { /* empty */} 
            ;
/* 实参 */
ActualParams:   ExprMore            { /* empty */   }
            |                       { /* empty */                }
            ;
/* 多个表达式 */
ExprMore    :   Expr                { /* empty */           }
            |   ExprMore ',' Expr   { /* empty */           }
            ;
/* For语句 */
ForStmt     :   T_For '(' SimpleStmt ';' BoolExpr ';' SimpleStmt ')' Stmt   
                                    { /* empty */} 
            ;
/* while */
WhileStmt   :   While '(' BoolExpr ')' Do StmtBlock EndWhile
                                    { /* empty */ } 
            ;

While       :   T_While         { _BEG_WHILE; printf("_begWhile_%d:\n", _w); }
            ;

Do          :   /* empty */     { printf("\tjz _endWhile_%d\n", _w); }
            ;

EndWhile    :   /* empty */     { printf("\tjmp _begWhile_%d\n_endWhile_%d:\n\n", _w, _w); _END_WHILE; }
            ;
/* If */
IfStmt      :   If '(' BoolExpr ')' Then StmtBlock EndThen EndIf    { /* empty */}
            |   If '(' BoolExpr ')' Then Stmt EndThen EndIf    { /* empty */}
            |   If '(' BoolExpr ')' Then StmtBlock EndThen T_Else StmtBlock EndIf    { /* empty */}
            |   If '(' BoolExpr ')' Then Stmt EndThen T_Else Stmt EndIf    { /* empty */}
            ;

If          :   T_If                { _BEG_IF; printf("_begIf_%d:\n", _i); }

Then        :   /* empty */         { printf("\tjz _elseIf_%d\n", _i); }
            ;

EndThen     :   /* empty */         { printf("\tjmp _endIf_%d\n_elseIf_%d:\n", _i, _i); }
            ;

EndIf       :   /* empty */         { printf("_endIf_%d:\n\n", _i); _END_IF; }
            ;
/* Return */
ReturnStmt  :   T_Return            { printf("\tret\n\n");       }
            |   T_Return Expr       { printf("\tret ~\n\n"); }
            ;
/* Break */
BreakStmt   :   T_Break             { printf("\tjmp _endWhile_%d\n", _w); }
            ;

PrintStmt   :   T_Print '(' ExprMore ')'{ /* empty */} 
            ;

BoolExpr    :   Expr                { /* empty */           }
            ;
/* 表达式 */
Expr        :   Constant            { /* empty */          }
            |   LValue              { /* empty */                     }
            |   Call                { /* empty */               }
            |   '('Expr')'          { /* empty */           }
            |   Expr '+' Expr       { printf("\tadd\n");       }
            |   Expr '-' Expr       { printf("\tsub\n");      }
            |   Expr '*' Expr       { printf("\tmul\n");       }
            |   Expr '/' Expr       { printf("\tdiv\n");       }
            |   Expr '%' Expr       { printf("\tmod\n");      }
            |   '-' Expr            { printf("\tneg\n");            }
            |   Expr T_Dc           { printf("\tpush #1\n\tadd\n");     }
            |   Expr T_Ic           { printf("\tpush #1\n\tadd\n");     }
            |   Expr '<' Expr       { printf("\tcmplt\n");       }
            |   Expr T_Le Expr      { printf("\tcmple\n");    }
            |   Expr '>' Expr       { printf("\tcmpgt\n");       }
            |   Expr T_Ge Expr      { printf("\tcmpge\n");       }
            |   Expr T_Eq Expr      { printf("\tcmpeq\n");        }
            |   Expr T_Ne Expr      { printf("\tcmpne\n");     }
            |   Expr T_And Expr     { printf("\tand\n");          }
            |   Expr T_Or Expr      { printf("\tor\n");           }
            |   '!' Expr            { printf("\tnot\n");            }
            |   T_ReadInteger '(' LValue ')'   { printf("\treadint %s\n", $3); } 
            |   T_ReadLine '(' LValue')'  { printf("\treadline %s\n", $3);        }
            ;

/* 常量 */            
Constant    :   T_IntConstant       { printf("\tpush #%d\n", $1);  } 
            |   T_DoubleConstant    { printf("\tpush #%f\n", $1); } 
            |   T_BooleanConstant   { printf("\tpush #%d\n", $1);   }  
            |   T_StringConstant    { printf("\tpush #%s\n", $1); } 
            |   T_Null              {                  }
            ;
%%

int main() {
    return yyparse();
}

void yyerror(const char* msg) {
    printf("ERROR: %s at line %d \n", msg, cur_lineno);
}