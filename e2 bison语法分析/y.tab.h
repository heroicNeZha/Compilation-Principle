/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_Le = 258,
     T_Ge = 259,
     T_Eq = 260,
     T_Ne = 261,
     T_Ic = 262,
     T_Dc = 263,
     T_And = 264,
     T_Or = 265,
     T_Void = 266,
     T_Int = 267,
     T_Double = 268,
     T_Boolean = 269,
     T_String = 270,
     T_Null = 271,
     T_For = 272,
     T_While = 273,
     T_If = 274,
     T_Else = 275,
     T_Return = 276,
     T_Break = 277,
     T_Print = 278,
     T_ReadInteger = 279,
     T_ReadLine = 280,
     T_IntConstant = 281,
     T_DoubleConstant = 282,
     T_StringConstant = 283,
     T_Identifier = 284,
     T_BooleanConstant = 285,
     T_Lineend = 286,
     T_OR = 287,
     T_AND = 288,
     T_ELSE = 289,
     T_IFX = 290
   };
#endif
/* Tokens.  */
#define T_Le 258
#define T_Ge 259
#define T_Eq 260
#define T_Ne 261
#define T_Ic 262
#define T_Dc 263
#define T_And 264
#define T_Or 265
#define T_Void 266
#define T_Int 267
#define T_Double 268
#define T_Boolean 269
#define T_String 270
#define T_Null 271
#define T_For 272
#define T_While 273
#define T_If 274
#define T_Else 275
#define T_Return 276
#define T_Break 277
#define T_Print 278
#define T_ReadInteger 279
#define T_ReadLine 280
#define T_IntConstant 281
#define T_DoubleConstant 282
#define T_StringConstant 283
#define T_Identifier 284
#define T_BooleanConstant 285
#define T_Lineend 286
#define T_OR 287
#define T_AND 288
#define T_ELSE 289
#define T_IFX 290




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 15 "e2.y"
{ 
    int      ival;
    char     *sval;
    double   dval;
    int      bval;
}
/* Line 1529 of yacc.c.  */
#line 126 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

