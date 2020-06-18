/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     T_And = 262,
     T_Or = 263,
     T_Void = 264,
     T_Int = 265,
     T_Double = 266,
     T_Boolean = 267,
     T_String = 268,
     T_Class = 269,
     T_Interface = 270,
     T_Null = 271,
     T_This = 272,
     T_Extends = 273,
     T_Implements = 274,
     T_For = 275,
     T_While = 276,
     T_If = 277,
     T_Else = 278,
     T_Return = 279,
     T_Break = 280,
     T_New = 281,
     T_NewArray = 282,
     T_Print = 283,
     T_ReadInteger = 284,
     T_ReadLine = 285,
     T_IntConstant = 286,
     T_DoubleConstant = 287,
     T_StringConstant = 288,
     T_Identifier = 289,
     T_BooleanConstant = 290,
     T_Lineend = 291,
     T_OR = 292,
     T_AND = 293,
     T_HET = 294,
     T_LET = 295,
     T_ELSE = 296,
     T_IFX = 297
   };
#endif
/* Tokens.  */
#define T_Le 258
#define T_Ge 259
#define T_Eq 260
#define T_Ne 261
#define T_And 262
#define T_Or 263
#define T_Void 264
#define T_Int 265
#define T_Double 266
#define T_Boolean 267
#define T_String 268
#define T_Class 269
#define T_Interface 270
#define T_Null 271
#define T_This 272
#define T_Extends 273
#define T_Implements 274
#define T_For 275
#define T_While 276
#define T_If 277
#define T_Else 278
#define T_Return 279
#define T_Break 280
#define T_New 281
#define T_NewArray 282
#define T_Print 283
#define T_ReadInteger 284
#define T_ReadLine 285
#define T_IntConstant 286
#define T_DoubleConstant 287
#define T_StringConstant 288
#define T_Identifier 289
#define T_BooleanConstant 290
#define T_Lineend 291
#define T_OR 292
#define T_AND 293
#define T_HET 294
#define T_LET 295
#define T_ELSE 296
#define T_IFX 297




/* Copy the first part of user declarations.  */
#line 1 "e2.y"

#include <stdio.h> 
#include <stdlib.h> 
#include <sys/malloc.h> 

extern int cur_line_num;
int yylex();
void yyerror(const char* msg) {
    printf("ERROR: %s at line %d \n", msg, cur_line_num);
}


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "e2.y"
{ 
    int     integerConstant; 
    int     boolConstant; 
    const   char *stringConstant; 
    double  doubleConstant; 
    char    identifier[128]; 


    int      ival;
    char     *sval;
    double   dval;
    int      bval;
}
/* Line 193 of yacc.c.  */
#line 206 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 219 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   601

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNRULES -- Number of states.  */
#define YYNSTATES  175

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,    51,     2,     2,
      54,    37,    49,    47,    39,    48,    53,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    58,
      43,    40,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    41,    42,    45,    46,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    15,    18,    20,
      22,    24,    26,    28,    30,    33,    37,    39,    41,    42,
      44,    48,    55,    62,    69,    72,    73,    76,    77,    79,
      81,    83,    85,    89,    91,    94,    95,    97,   100,   102,
     104,   106,   109,   112,   115,   117,   121,   123,   124,   126,
     130,   132,   137,   139,   146,   151,   153,   154,   156,   160,
     170,   176,   182,   190,   192,   195,   197,   202,   204,   206,
     208,   210,   212,   216,   220,   224,   228,   232,   236,   239,
     243,   247,   251,   255,   259,   263,   267,   271,   274,   278,
     282,   287,   294,   296,   298,   300,   302
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    70,    -1,    62,    70,    -1,     1,    -1,
      64,    58,    -1,     1,    -1,    65,    34,    -1,     1,    -1,
      10,    -1,    11,    -1,    12,    -1,    13,    -1,     9,    -1,
      14,    34,    -1,    65,    55,    38,    -1,     1,    -1,    67,
      -1,    -1,    64,    -1,    67,    39,    64,    -1,    65,    34,
      54,    66,    37,    58,    -1,    65,    34,    54,    66,    37,
      74,    -1,    14,    34,    71,    59,    72,    60,    -1,    18,
      34,    -1,    -1,    72,    73,    -1,    -1,     1,    -1,    63,
      -1,    68,    -1,    69,    -1,    59,    75,    60,    -1,     1,
      -1,    75,    76,    -1,    -1,    63,    -1,    77,    58,    -1,
      84,    -1,    83,    -1,    82,    -1,    86,    58,    -1,    85,
      58,    -1,    87,    58,    -1,    74,    -1,    78,    40,    89,
      -1,    79,    -1,    -1,     1,    -1,    89,    53,    34,    -1,
      34,    -1,    89,    55,    89,    38,    -1,     1,    -1,    89,
      53,    34,    54,    80,    37,    -1,    34,    54,    80,    37,
      -1,    81,    -1,    -1,    89,    -1,    81,    39,    89,    -1,
      20,    54,    77,    58,    88,    58,    77,    37,    76,    -1,
      21,    54,    88,    37,    76,    -1,    22,    54,    88,    37,
      76,    -1,    22,    54,    88,    37,    76,    23,    76,    -1,
      24,    -1,    24,    89,    -1,    25,    -1,    28,    54,    81,
      37,    -1,    89,    -1,    90,    -1,    78,    -1,    17,    -1,
      79,    -1,    54,    89,    37,    -1,    89,    47,    89,    -1,
      89,    48,    89,    -1,    89,    49,    89,    -1,    89,    50,
      89,    -1,    89,    51,    89,    -1,    48,    89,    -1,    89,
      43,    89,    -1,    89,     3,    89,    -1,    89,    44,    89,
      -1,    89,     4,    89,    -1,    89,     5,    89,    -1,    89,
       6,    89,    -1,    89,     7,    89,    -1,    89,     8,    89,
      -1,    52,    89,    -1,    29,    54,    37,    -1,    30,    54,
      37,    -1,    26,    34,    54,    37,    -1,    27,    54,    89,
      39,    65,    37,    -1,    31,    -1,    32,    -1,    35,    -1,
      33,    -1,    16,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    81,    82,    85,    86,    90,    94,    98,
      99,   100,   101,   102,   103,   107,   108,   112,   113,   116,
     117,   122,   129,   134,   138,   139,   142,   143,   144,   147,
     148,   149,   153,   154,   157,   158,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   173,   174,   175,   176,   180,
     181,   182,   183,   187,   189,   193,   194,   197,   198,   201,
     205,   209,   211,   215,   216,   219,   222,   225,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   252,   257,   261,   265,   269,   273
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Le", "T_Ge", "T_Eq", "T_Ne", "T_And",
  "T_Or", "T_Void", "T_Int", "T_Double", "T_Boolean", "T_String",
  "T_Class", "T_Interface", "T_Null", "T_This", "T_Extends",
  "T_Implements", "T_For", "T_While", "T_If", "T_Else", "T_Return",
  "T_Break", "T_New", "T_NewArray", "T_Print", "T_ReadInteger",
  "T_ReadLine", "T_IntConstant", "T_DoubleConstant", "T_StringConstant",
  "T_Identifier", "T_BooleanConstant", "T_Lineend", "')'", "']'", "','",
  "'='", "T_OR", "T_AND", "'<'", "'>'", "T_HET", "T_LET", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "'.'", "'('", "'['", "T_ELSE", "T_IFX",
  "';'", "'{'", "'}'", "$accept", "Program", "VariableDecl", "Variable",
  "Type", "Formals", "VariableMore", "FunctionDecl", "FunctionDefn",
  "ClassDefn", "ExtendsQ", "Fieldlist", "Field", "StmtBlock", "Stmtlist",
  "Stmt", "SimpleStmt", "LValue", "Call", "Actuals", "ExprMore", "ForStmt",
  "WhileStmt", "IfStmt", "ReturnStmt", "BreakStmt", "PrintStmt",
  "BoolExpr", "Expr", "Constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    41,    93,    44,
      61,   292,   293,    60,    62,   294,   295,    43,    45,    42,
      47,    37,    33,    46,    40,    91,   296,   297,    59,   123,
     125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    62,    63,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    66,    66,    67,
      67,    68,    69,    70,    71,    71,    72,    72,    72,    73,
      73,    73,    74,    74,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    77,    77,    77,    77,    78,
      78,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      83,    84,    84,    85,    85,    86,    87,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     3,     1,     1,     0,     1,
       3,     6,     6,     6,     2,     0,     2,     0,     1,     1,
       1,     1,     3,     1,     2,     0,     1,     2,     1,     1,
       1,     2,     2,     2,     1,     3,     1,     0,     1,     3,
       1,     4,     1,     6,     4,     1,     0,     1,     3,     9,
       5,     5,     7,     1,     2,     1,     4,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       4,     6,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     2,    25,     1,     3,     0,     0,
      24,     0,    28,     0,     6,    13,     9,    10,    11,    12,
       0,    23,    29,     0,     0,    30,    31,    26,    14,     5,
       7,     0,     0,    15,     8,    19,     0,     0,    17,     7,
       0,     0,    33,    21,    35,    22,    20,     0,     6,    96,
      70,     0,     0,     0,     0,    65,     0,     0,     0,     0,
       0,    92,    93,    95,    50,    94,     0,     0,     0,    32,
      36,    44,    34,     0,    69,    71,    40,    39,    38,     0,
       0,     0,     0,    68,     0,     0,     0,    52,    69,    71,
      64,     0,     0,     0,     0,     0,     0,    78,    87,     0,
      37,     0,    42,    41,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,    67,     0,     0,     0,     0,    57,    88,
      89,     0,    55,    72,    45,    80,    82,    83,    84,    85,
      86,    79,    81,    73,    74,    75,    76,    77,    49,     0,
       0,     0,     0,    90,     0,    66,     0,    54,     0,    51,
       0,    60,    61,    16,     0,    58,     0,     0,     0,    91,
      53,     0,    62,     0,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    70,    23,    36,    37,    38,    25,    26,     4,
       9,    13,    27,    71,    47,    72,    73,    88,    89,   131,
     132,    76,    77,    78,    79,    80,    81,   122,    82,    83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -133
static const yytype_int16 yypact[] =
{
      86,  -133,   -28,    10,  -133,    -9,  -133,  -133,   -17,   -31,
    -133,    20,  -133,    80,   -16,  -133,  -133,  -133,  -133,  -133,
      13,  -133,  -133,     0,   -20,  -133,  -133,  -133,  -133,  -133,
      28,    45,   350,  -133,   -18,  -133,   -12,    49,    59,  -133,
       3,   274,  -133,  -133,  -133,  -133,  -133,   133,   480,  -133,
    -133,    34,    50,    56,   224,  -133,    69,    58,    60,    62,
      64,  -133,  -133,  -133,    65,  -133,   380,   380,   380,  -133,
    -133,  -133,  -133,    55,    85,    19,  -133,  -133,  -133,    68,
      72,    73,   493,  -133,   263,   380,   380,  -133,  -133,  -133,
     493,    66,   380,   380,    91,    98,   302,    46,     4,   396,
    -133,   380,  -133,  -133,  -133,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   104,   380,
      26,    81,   111,   493,   114,   115,   413,     9,   493,  -133,
    -133,   119,   130,  -133,   493,   493,   493,   546,   546,   493,
     493,   129,   129,    46,    46,     4,     4,     4,   116,   466,
     380,   185,   185,  -133,   313,  -133,   380,  -133,   302,  -133,
     113,  -133,   151,  -133,   -32,   493,   138,   341,   185,  -133,
    -133,   146,  -133,   185,  -133
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,   175,    70,   -13,  -133,  -133,  -133,  -133,   186,
    -133,  -133,  -133,   150,  -133,  -132,   -82,   -46,   -44,    42,
     110,  -133,  -133,  -133,  -133,  -133,  -133,   -71,   -41,  -133
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -64
static const yytype_int16 yytable[] =
{
      24,    74,   121,    75,    42,   169,     5,   105,   106,     8,
       6,   109,   110,    90,    30,   124,   -16,    10,   -16,   161,
     162,    12,    39,    31,     2,    97,    98,    99,    11,   -27,
     -27,   -27,   -27,   -27,   -27,    31,   172,   -16,    74,   -16,
      75,   174,    -8,    31,   123,   123,   155,    28,   156,   105,
     106,   126,   128,   109,   110,   128,   -46,   118,    29,   119,
     134,    43,    44,   -48,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   -46,   149,   160,
     -27,    14,    32,    33,   -48,   171,    40,     1,    84,    15,
      16,    17,    18,    19,    20,   115,   116,   117,    41,   118,
       2,   119,    35,    91,    85,    74,    74,    75,    75,   123,
      86,    46,    92,   100,    93,   165,    94,   128,    95,    96,
     125,    74,    74,    75,    75,   101,   102,    74,   129,    75,
     103,   104,   105,   106,    48,   130,   109,   110,   148,   150,
      21,   164,    15,    16,    17,    18,    19,    20,   151,    49,
      50,   152,   153,    51,    52,    53,   157,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,   156,
     158,   167,   -64,   -64,   168,   170,   113,   114,   115,   116,
     117,    66,   118,   173,   119,    67,    48,    68,    22,     7,
      45,   -47,    44,    69,    15,    16,    17,    18,    19,    20,
     166,    49,    50,   127,     0,    51,    52,    53,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,    66,     0,     0,     0,    67,     0,    68,
      49,    50,     0,   -47,    44,     0,     0,     0,     0,     0,
      56,    57,     0,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,     0,    66,     0,     0,    34,    67,     0,    68,    49,
      50,     0,   -63,    15,    16,    17,    18,    19,    20,    56,
      57,     0,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    66,     0,     0,   163,    67,     0,    68,    49,    50,
       0,   -47,    15,    16,    17,    18,    19,    20,    56,    57,
       0,    59,    60,    61,    62,    63,    64,    65,     0,   -56,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
      66,    34,     0,     0,    67,     0,    68,    49,    50,    15,
      16,    17,    18,    19,    20,     0,     0,    56,    57,     0,
      59,    60,    61,    62,    63,    64,    65,     0,   -47,     0,
       0,    87,     0,     0,     0,     0,     0,   -18,     0,    66,
       0,     0,     0,    67,     0,    68,    49,    50,     0,   105,
     106,   107,   108,   109,   110,     0,    56,    57,     0,    59,
      60,    61,    62,    63,    64,    65,   105,   106,   107,   108,
     109,   110,     0,     0,     0,     0,     0,     0,    66,     0,
       0,     0,    67,   133,    68,     0,     0,     0,     0,   111,
     112,     0,     0,   113,   114,   115,   116,   117,     0,   118,
       0,   119,   154,     0,     0,     0,   111,   112,     0,     0,
     113,   114,   115,   116,   117,     0,   118,     0,   119,   105,
     106,   107,   108,   109,   110,     0,     0,     0,     0,     0,
       0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,     0,     0,   159,     0,     0,     0,     0,   111,
     112,     0,     0,   113,   114,   115,   116,   117,     0,   118,
     -52,   119,     0,   -52,   -52,     0,     0,   -52,     0,   -52,
     -52,   -52,     0,   -52,     0,   -16,   111,   112,     0,     0,
     113,   114,   115,   116,   117,     0,   118,     0,   119,   105,
     106,   -64,   -64,   109,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
     112,     0,     0,   113,   114,   115,   116,   117,     0,   118,
       0,   119
};

static const yytype_int16 yycheck[] =
{
      13,    47,    84,    47,     1,    37,    34,     3,     4,    18,
       0,     7,     8,    54,    34,    86,    34,    34,    34,   151,
     152,     1,    34,    55,    14,    66,    67,    68,    59,     9,
      10,    11,    12,    13,    14,    55,   168,    55,    84,    55,
      84,   173,    58,    55,    85,    86,    37,    34,    39,     3,
       4,    92,    93,     7,     8,    96,    37,    53,    58,    55,
     101,    58,    59,    37,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    58,   119,   150,
      60,     1,    54,    38,    58,   167,    37,     1,    54,     9,
      10,    11,    12,    13,    14,    49,    50,    51,    39,    53,
      14,    55,    32,    34,    54,   151,   152,   151,   152,   150,
      54,    41,    54,    58,    54,   156,    54,   158,    54,    54,
      54,   167,   168,   167,   168,    40,    58,   173,    37,   173,
      58,    58,     3,     4,     1,    37,     7,     8,    34,    58,
      60,   154,     9,    10,    11,    12,    13,    14,    37,    16,
      17,    37,    37,    20,    21,    22,    37,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    39,
      54,    58,    43,    44,    23,    37,    47,    48,    49,    50,
      51,    48,    53,    37,    55,    52,     1,    54,    13,     3,
      40,    58,    59,    60,     9,    10,    11,    12,    13,    14,
     158,    16,    17,    93,    -1,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    -1,    54,
      16,    17,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,     1,    52,    -1,    54,    16,
      17,    -1,    58,     9,    10,    11,    12,    13,    14,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,     1,    52,    -1,    54,    16,    17,
      -1,    58,     9,    10,    11,    12,    13,    14,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,     1,    -1,    -1,    52,    -1,    54,    16,    17,     9,
      10,    11,    12,    13,    14,    -1,    -1,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    48,
      -1,    -1,    -1,    52,    -1,    54,    16,    17,    -1,     3,
       4,     5,     6,     7,     8,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    52,    37,    54,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    -1,    53,
      -1,    55,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    48,    49,    50,    51,    -1,    53,    -1,    55,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    -1,    53,
      40,    55,    -1,    43,    44,    -1,    -1,    47,    -1,    49,
      50,    51,    -1,    53,    -1,    55,    43,    44,    -1,    -1,
      47,    48,    49,    50,    51,    -1,    53,    -1,    55,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    -1,    53,
      -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    14,    62,    70,    34,     0,    70,    18,    71,
      34,    59,     1,    72,     1,     9,    10,    11,    12,    13,
      14,    60,    63,    64,    65,    68,    69,    73,    34,    58,
      34,    55,    54,    38,     1,    64,    65,    66,    67,    34,
      37,    39,     1,    58,    59,    74,    64,    75,     1,    16,
      17,    20,    21,    22,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    48,    52,    54,    60,
      63,    74,    76,    77,    78,    79,    82,    83,    84,    85,
      86,    87,    89,    90,    54,    54,    54,     1,    78,    79,
      89,    34,    54,    54,    54,    54,    54,    89,    89,    89,
      58,    40,    58,    58,    58,     3,     4,     5,     6,     7,
       8,    43,    44,    47,    48,    49,    50,    51,    53,    55,
       1,    77,    88,    89,    88,    54,    89,    81,    89,    37,
      37,    80,    81,    37,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    34,    89,
      58,    37,    37,    37,    39,    37,    39,    37,    54,    38,
      88,    76,    76,     1,    65,    89,    80,    58,    23,    37,
      37,    77,    76,    37,    76
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 80 "e2.y"
    { printf("%15s -> %s \n", "Program", "ClassDefn");         }
    break;

  case 3:
#line 81 "e2.y"
    { printf("%15s -> %s \n", "Program", "Program ClassDefn"); }
    break;

  case 4:
#line 82 "e2.y"
    { yyerror("Program");                                      }
    break;

  case 5:
#line 85 "e2.y"
    { printf("%15s -> %s \n",  "VariableDecl", "Variable ;");  }
    break;

  case 6:
#line 86 "e2.y"
    { yyerror("VariableDecl");                                 }
    break;

  case 7:
#line 90 "e2.y"
    { 
                                          printf("%15s -> %-15s |",  "Variable", "Type Identifier");  
                                          printf("%15s -> %s %s \n",  "Variable", "Type", (yyvsp[(2) - (2)].sval));  
                                        }
    break;

  case 8:
#line 94 "e2.y"
    { yyerror("Variable");                                     }
    break;

  case 9:
#line 98 "e2.y"
    { printf("%15s -> %s \n",  "Type", "Int");       }
    break;

  case 10:
#line 99 "e2.y"
    { printf("%15s -> %s \n",  "Type", "Double");    }
    break;

  case 11:
#line 100 "e2.y"
    { printf("%15s -> %s \n",  "Type", "Bool");      }
    break;

  case 12:
#line 101 "e2.y"
    { printf("%15s -> %s \n",  "Type", "String");    }
    break;

  case 13:
#line 102 "e2.y"
    { printf("%15s -> %s \n",  "Type", "Void");      }
    break;

  case 14:
#line 103 "e2.y"
    { 
                                          printf("%15s -> %-15s |","Type", "Identifier");  
                                          printf("%15s -> %s %s\n", "Type", "class", (yyvsp[(2) - (2)].sval));
                                        }
    break;

  case 15:
#line 107 "e2.y"
    { printf("%15s -> %s \n",  "Type", "Type[]");    }
    break;

  case 16:
#line 108 "e2.y"
    { yyerror("Type");                               }
    break;

  case 17:
#line 112 "e2.y"
    { printf("%15s -> %s \n",  "Formals", "VariableMore,"); }
    break;

  case 18:
#line 113 "e2.y"
    { printf("%15s -> %s \n",  "Formals", " ");             }
    break;

  case 19:
#line 116 "e2.y"
    { printf("%15s -> %s \n",  "VariableMore", "Variable");           }
    break;

  case 20:
#line 118 "e2.y"
    { printf("%15s -> %s \n",  "Formals", "VariableMore , Variable"); }
    break;

  case 21:
#line 122 "e2.y"
    { 
                                        printf("%15s -> %-15s |",  "FunctionDecl", "Identifier(Formals)"); 
                                        printf("%15s -> %s \n",    "FunctionDecl", (yyvsp[(2) - (6)].sval));           
                                        }
    break;

  case 22:
#line 130 "e2.y"
    { printf("%15s -> %-15s \n",  "FunctionDefn", "Identifier(Formals) StmtBlock"); }
    break;

  case 23:
#line 135 "e2.y"
    { printf("Class Identifier ExtendsQ { Fieldlist } \n");           }
    break;

  case 24:
#line 138 "e2.y"
    { printf("%15s -> %s \n",  "ExtendsQ", "T_Extends T_Identifier"); }
    break;

  case 25:
#line 139 "e2.y"
    { printf("%15s -> %s \n",  "ExtendsQ", " ");                      }
    break;

  case 26:
#line 142 "e2.y"
    { printf("%15s -> %s \n",  "Fieldlist", "Fieldlist Field");       }
    break;

  case 27:
#line 143 "e2.y"
    { printf("%15s -> %s \n",  "Fieldlist", " ");                     }
    break;

  case 28:
#line 144 "e2.y"
    { yyerror("Fieldlist");                                           }
    break;

  case 29:
#line 147 "e2.y"
    { printf("%15s -> %s \n",  "Field", "VariableDecl");     }
    break;

  case 30:
#line 148 "e2.y"
    { printf("%15s -> %s \n",  "Field", "FunctionDecl");     }
    break;

  case 31:
#line 149 "e2.y"
    { printf("%15s -> %s \n",  "Field", "FunctionDefn");     }
    break;

  case 32:
#line 153 "e2.y"
    { printf("%15s -> %s \n",  "StmtBlock", ":{ Stmtlist } ");}
    break;

  case 33:
#line 154 "e2.y"
    { yyerror("StmtBlock");                                   }
    break;

  case 34:
#line 157 "e2.y"
    { printf("%15s -> %s \n",  "Stmtlist", "Stmtlist Stmt");  }
    break;

  case 35:
#line 158 "e2.y"
    { printf("%15s -> %s \n",  "Stmtlist", " ");              }
    break;

  case 36:
#line 161 "e2.y"
    { printf("%15s -> %s \n",  "Stmt", "VariableDecl");       }
    break;

  case 37:
#line 162 "e2.y"
    { printf("%15s -> %s \n",  "Stmt", "SimpleStmt ;");       }
    break;

  case 38:
#line 163 "e2.y"
    { printf("%15s -> %s \n",  "Stmt", "IfStmt");             }
    break;

  case 39:
#line 164 "e2.y"
    { printf("%15s -> %s \n",  "Stmt", "WhileStmt ");         }
    break;

  case 40:
#line 165 "e2.y"
    { printf("%15s -> %s \n",  "Stmt", "ForStmt ");           }
    break;

  case 41:
#line 166 "e2.y"
    { printf("%15s -> %s \n",  "Stmt", "BreakStmt ;");        }
    break;

  case 42:
#line 167 "e2.y"
    { printf("%15s -> %s \n",  "Stmt", "ReturnStmt ;");       }
    break;

  case 43:
#line 168 "e2.y"
    { printf("%15s -> %s \n",  "Stmt", "PrintStmt ;");        }
    break;

  case 44:
#line 169 "e2.y"
    { printf("%15s -> %s \n",  "Stmt", "StmtBlock ");         }
    break;

  case 45:
#line 173 "e2.y"
    { printf("%15s -> %s \n",  "SimpleStmt", "LValue = Expr ");}
    break;

  case 46:
#line 174 "e2.y"
    { printf("%15s -> %s \n",  "SimpleStmt", "Call ");         }
    break;

  case 47:
#line 175 "e2.y"
    { printf("%15s -> %s \n",  "SimpleStmt", " ");             }
    break;

  case 48:
#line 176 "e2.y"
    { yyerror("SimpleStmt");                                   }
    break;

  case 49:
#line 180 "e2.y"
    { printf("%15s -> %s \n",  "LValue", "Expr . T_Identifier");}
    break;

  case 50:
#line 181 "e2.y"
    { printf("%15s -> %s \n",  "LValue", "T_Identifier");       }
    break;

  case 51:
#line 182 "e2.y"
    { printf("%15s -> %s \n",  "LValue", "Expr [ Expr ] ");     }
    break;

  case 52:
#line 183 "e2.y"
    { yyerror("LValue");                                        }
    break;

  case 53:
#line 188 "e2.y"
    { printf("%15s -> %s \n", "Call", "Expr . T_Identifier ( Actuals ) ");}
    break;

  case 54:
#line 190 "e2.y"
    { printf("%15s -> %s \n", "Call", "T_Identifier ( Actuals ) ");       }
    break;

  case 55:
#line 193 "e2.y"
    { printf("%15s -> %s \n",  "Actuals", "ExprMore");                    }
    break;

  case 56:
#line 194 "e2.y"
    { printf("%15s -> %s \n",  "Actuals", "");                            }
    break;

  case 57:
#line 197 "e2.y"
    { printf("%15s -> %s \n",  "ExprMore", "Expr");                       }
    break;

  case 58:
#line 198 "e2.y"
    { printf("%15s -> %s \n",  "ExprMore", "ExprMore , Expr");            }
    break;

  case 59:
#line 202 "e2.y"
    { printf("%15s -> %s \n",  "ForStmt", "For (SimpleStmt BoolExpr SimpleStmt ) Stmt ");}
    break;

  case 60:
#line 206 "e2.y"
    { printf("%15s -> %s \n",  "WhileStmt", "While ( BoolExpr ) Stmt ");  }
    break;

  case 61:
#line 210 "e2.y"
    { printf("%15s -> %s \n",  "IfStmt", "If (BoolExpr ) Stmt %prec T_IFX "); }
    break;

  case 62:
#line 212 "e2.y"
    { printf("%15s -> %s \n",  "IfStmt", "If (BoolExpr ) Stmt T_Else Stmt "); }
    break;

  case 63:
#line 215 "e2.y"
    { printf("%15s -> %s \n",  "ReturnStmt", "Return");                   }
    break;

  case 64:
#line 216 "e2.y"
    { printf("%15s -> %s \n",  "ReturnStmt", "Return Expr ");             }
    break;

  case 65:
#line 219 "e2.y"
    { printf("%15s -> %s \n",  "ReturnStmt", "Break");                    }
    break;

  case 66:
#line 222 "e2.y"
    { printf("%15s -> %s \n",  "PrintStmt", "Print (ExprMore) ");         }
    break;

  case 67:
#line 225 "e2.y"
    { printf("%15s -> %s \n",  "BoolExpr", "Expr");          }
    break;

  case 68:
#line 228 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Constant");          }
    break;

  case 69:
#line 229 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "LValue");            }
    break;

  case 70:
#line 230 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "This");              }
    break;

  case 71:
#line 231 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Call");              }
    break;

  case 72:
#line 232 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "( Expr) ");          }
    break;

  case 73:
#line 233 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Expr + Expr ");      }
    break;

  case 74:
#line 234 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Expr - Expr ");      }
    break;

  case 75:
#line 235 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Expr * Expr ");      }
    break;

  case 76:
#line 236 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Expr /Expr ");       }
    break;

  case 77:
#line 237 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Expr % Expr ");      }
    break;

  case 78:
#line 238 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "- Expr ");           }
    break;

  case 79:
#line 239 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Expr < Expr ");      }
    break;

  case 80:
#line 240 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "LessEqual Expr ");   }
    break;

  case 81:
#line 241 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Expr >Expr ");       }
    break;

  case 82:
#line 242 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "GreaterEqual");      }
    break;

  case 83:
#line 243 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Equal Expr ");       }
    break;

  case 84:
#line 244 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "NotEqual Expr ");    }
    break;

  case 85:
#line 245 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "And Expr ");         }
    break;

  case 86:
#line 246 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Or Expr ");          }
    break;

  case 87:
#line 247 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "! Expr ");           }
    break;

  case 88:
#line 248 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Expr ReadInteger ( ) "); }
    break;

  case 89:
#line 249 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "Expr ReadLine ( ) ");    }
    break;

  case 90:
#line 251 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "New Identifier ( ) ");   }
    break;

  case 91:
#line 253 "e2.y"
    { printf("%15s -> %s \n",  "Expr", "NewArray ( Expr , Type )");}
    break;

  case 92:
#line 257 "e2.y"
    { 
                                        printf("%15s -> %-15s |",  "Constant", "IntConstant");   
                                        printf("%15s -> %d \n",    "Constant", (yyvsp[(1) - (1)].ival));                     
                                        }
    break;

  case 93:
#line 261 "e2.y"
    { 
                                        printf("%15s -> %-15s |",  "Constant", "DoubleConstant");
                                        printf("%15s -> %f \n",    "Constant", (yyvsp[(1) - (1)].dval));                       
                                        }
    break;

  case 94:
#line 265 "e2.y"
    { 
                                        printf("%15s -> %-15s |",  "Constant", "BoolConstant"); 
                                        printf("%15s -> %d \n",    "Constant", (yyvsp[(1) - (1)].bval));   
                                        }
    break;

  case 95:
#line 269 "e2.y"
    { 
                                        printf("%15s -> %-15s |",  "Constant", "StringConstant"); 
                                        printf("%15s -> %s \n",     "Constant", (yyvsp[(1) - (1)].sval));   
                                        }
    break;

  case 96:
#line 273 "e2.y"
    { printf("%15s -> %s\n",      "Constant", "Null");           }
    break;


/* Line 1267 of yacc.c.  */
#line 2158 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 276 "e2.y"


int main() {
    return yyparse();
}
