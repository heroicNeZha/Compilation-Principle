%{
#include "y.tab.h"
int comment_flag;
int string_flag;
int comment_begin;
void lex_error(char* msg, int line);
%}

/*常量*/
INT ([+|-]?[0-9]+)
INT_HEX (0[xX][a-fA-F0-9]+)
INT_OCT (0[1-7][0-7]*)
INT_BIN (0[bB][01]+)
INTEGER {INT}|{INT_HEX}|{INT_OCT}|{INT_BIN}
FLOAT {INT}\.[0-9]+
SCIENCE (([0-9]+\.[0-9]*)|([0-9]*\.[0-9]+)|INT)[Ee][-+]?[0-9]+
DOUBLE {SCIENCE}|{FLOAT}
STRING \"[^\"\n]*\"
STRING_BEGIN \"

/*标识符*/
IDENTIFIER [a-z_A-Z][a-z_A-Z0-9]*
/*关键字*/
KW_LE <=
KW_GE >=
KW_EQ ==
KW_NE !=
KW_IC "++"
KW_DC "--"
KW_AND &&
KW_OR "||"
KW_VOID void
KW_INT int
KW_DOUBLE double
KW_BOOLEAN bool
KW_STRING string
KW_NULL null
KW_FOR for
KW_WHILE while
KW_IF if
KW_ELSE else 
KW_RETURN return
KW_BREAK break
KW_PRINT print
KW_READINT readInt   
KW_READLINE readLine
KW_TRUE true
KW_FALSE false
WHITESPACE   [ \t\r\a]+
OPERATOR [+*-/%=,;!<>(){}\[\]]

/*注释*/
COMMENT ("//".*)|("/*"([*]*(([^*/])+([/])*)*)*"*/")
COMMENT_BEGIN "/*"

/*错误*/
AERROR .
STRING_END_ERROR \"[^\"\n]*$

%%
[\n]            { cur_lineno++;           }
{OPERATOR}      { return yytext[0];         }   
{KW_LE}         { return T_Le;              }
{KW_GE}         { return T_Ge;              }
{KW_EQ}         { return T_Eq;              }
{KW_NE}         { return T_Ne;              }
{KW_IC}         { return T_Ic;              }
{KW_DC}         { return T_Dc;              }
{KW_AND}        { return T_And;             }
{KW_OR}         { return T_Or;              }
{KW_VOID}       { return T_Void;            }
{KW_INT}        { return T_Int;             }
{KW_DOUBLE}     { return T_Double;          }
{KW_BOOLEAN}    { return T_Boolean;         }
{KW_STRING}     { return T_String;          }
{KW_NULL}       { return T_Null;            }
{KW_FOR}        { return T_For;             }
{KW_WHILE}      { return T_While;           }
{KW_IF}         { return T_If;              }
{KW_ELSE}       { return T_Else;            }
{KW_RETURN}     { return T_Return;          }
{KW_BREAK}      { return T_Break;           }
{KW_PRINT}      { return T_Print;           }
{KW_READINT}    { return T_ReadInteger;     }
{KW_READLINE}   { return T_ReadLine;        }

{KW_TRUE}       { yylval.bval = 1;            return T_BooleanConstant; }
{KW_FALSE}      { yylval.bval = 0;            return T_BooleanConstant; }

{INTEGER}       { yylval.ival = atoi(yytext); return T_IntConstant;     }
{DOUBLE}        { yylval.dval = atof(yytext); return T_DoubleConstant;  }
{STRING}        { yylval.sval = yytext;       return T_StringConstant;  }
{IDENTIFIER}    { yylval.sval = yytext;       return T_Identifier;      }
{WHITESPACE}    { /* skip */                }
{COMMENT}       { /* skip */                }

{AERROR}        { lex_error("Unrecognized character", cur_lineno);    }
{STRING_END_ERROR}  {lex_error("String whithout end", cur_lineno);}
<<EOF>>        { return 0;                 }


%%

void lex_error(char* msg, int line) {
    printf("\nError at line %-3d: %s\n\n", line, msg);
}

int yywrap(void) {
    return 1;
}