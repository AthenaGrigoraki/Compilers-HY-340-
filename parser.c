
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "ph2.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "quads.h"



int yylex(void);
int yyerror(char* yaccProvidedMessage); /*kaleitai apo yacc gia na apokalipsei error*/


extern int yylineno;
extern char* yytext;
extern FILE* yyin;
int scope=0;
int funcounter=0;
char *aa;
int return_in_func=0;
int break_in_loop=0;
int con_in_loop=0;
int functionvar=0;
int libflag=0;
char *libflagname;


/* Line 189 of yacc.c  */
#line 101 "parser.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     WHILE = 260,
     FOR = 261,
     FUNCTION = 262,
     RETURN = 263,
     BREAK = 264,
     CONTINUE = 265,
     AND = 266,
     OR = 267,
     NOT = 268,
     LOCAL = 269,
     TRUE = 270,
     FALSE = 271,
     NIL = 272,
     PLUSPLUS = 273,
     MINMIN = 274,
     EQUAL = 275,
     NOTEQUAL = 276,
     ASSIGN = 277,
     PLUS = 278,
     MINUS = 279,
     MULTIPLY = 280,
     DIVIDE = 281,
     MODULO = 282,
     GREATEREQ = 283,
     LESSEQ = 284,
     GREATER = 285,
     LESS = 286,
     LEFT_PAR = 287,
     RIGHT_PAR = 288,
     LEFT_BR = 289,
     RIGHT_BR = 290,
     LEFT_SQ = 291,
     RIGHT_SQ = 292,
     DOUBLE_DOT = 293,
     DOT = 294,
     D_SCOPE = 295,
     SCOPE = 296,
     SEMICOLON = 297,
     COMMA = 298,
     INTEGER_C = 299,
     REAL_C = 300,
     ID = 301,
     STRING = 302,
     UMINUS = 303
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define WHILE 260
#define FOR 261
#define FUNCTION 262
#define RETURN 263
#define BREAK 264
#define CONTINUE 265
#define AND 266
#define OR 267
#define NOT 268
#define LOCAL 269
#define TRUE 270
#define FALSE 271
#define NIL 272
#define PLUSPLUS 273
#define MINMIN 274
#define EQUAL 275
#define NOTEQUAL 276
#define ASSIGN 277
#define PLUS 278
#define MINUS 279
#define MULTIPLY 280
#define DIVIDE 281
#define MODULO 282
#define GREATEREQ 283
#define LESSEQ 284
#define GREATER 285
#define LESS 286
#define LEFT_PAR 287
#define RIGHT_PAR 288
#define LEFT_BR 289
#define RIGHT_BR 290
#define LEFT_SQ 291
#define RIGHT_SQ 292
#define DOUBLE_DOT 293
#define DOT 294
#define D_SCOPE 295
#define SCOPE 296
#define SEMICOLON 297
#define COMMA 298
#define INTEGER_C 299
#define REAL_C 300
#define ID 301
#define STRING 302
#define UMINUS 303




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 86 "ph2.y"
 
	int intVal; 
	char* strVal; 
	float fltVal;
	struct Entry* exprNode;
	struct expr* expr;
	


/* Line 214 of yacc.c  */
#line 243 "parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 255 "parser.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   555

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNRULES -- Number of states.  */
#define YYNSTATES  179

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      20,    23,    26,    28,    30,    32,    34,    38,    42,    46,
      50,    54,    58,    62,    66,    70,    74,    78,    82,    86,
      88,    92,    95,    98,   101,   104,   107,   110,   112,   116,
     118,   120,   122,   126,   128,   130,   133,   136,   138,   142,
     147,   151,   156,   161,   164,   171,   173,   175,   179,   185,
     189,   191,   193,   194,   198,   202,   206,   208,   210,   216,
     217,   222,   223,   224,   233,   234,   235,   243,   245,   247,
     249,   251,   253,   255,   259,   261,   263,   264,   272,   278,
     279,   286,   287,   298,   302
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    -1,    52,    51,    -1,    -1,    53,
      42,    -1,    79,    -1,    80,    -1,    82,    -1,    84,    -1,
       9,    42,    -1,    10,    42,    -1,    69,    -1,    71,    -1,
      42,    -1,    55,    -1,    53,    23,    53,    -1,    53,    24,
      53,    -1,    53,    25,    53,    -1,    53,    26,    53,    -1,
      53,    27,    53,    -1,    53,    30,    53,    -1,    53,    28,
      53,    -1,    53,    31,    53,    -1,    53,    29,    53,    -1,
      53,    20,    53,    -1,    53,    21,    53,    -1,    53,    11,
      53,    -1,    53,    12,    53,    -1,    54,    -1,    32,    53,
      33,    -1,    24,    53,    -1,    13,    53,    -1,    18,    57,
      -1,    57,    18,    -1,    19,    57,    -1,    57,    19,    -1,
      56,    -1,    57,    22,    53,    -1,    57,    -1,    59,    -1,
      65,    -1,    32,    71,    33,    -1,    76,    -1,    46,    -1,
      14,    46,    -1,    40,    46,    -1,    58,    -1,    57,    39,
      46,    -1,    57,    36,    53,    37,    -1,    59,    39,    46,
      -1,    59,    36,    53,    37,    -1,    59,    32,    64,    33,
      -1,    57,    60,    -1,    32,    71,    33,    32,    64,    33,
      -1,    61,    -1,    62,    -1,    32,    64,    33,    -1,    38,
      46,    32,    64,    33,    -1,    63,    43,    53,    -1,    53,
      -1,    63,    -1,    -1,    36,    64,    37,    -1,    36,    67,
      37,    -1,    66,    43,    68,    -1,    68,    -1,    66,    -1,
      34,    53,    41,    53,    35,    -1,    -1,    34,    70,    51,
      35,    -1,    -1,    -1,     7,    46,    72,    32,    78,    33,
      73,    69,    -1,    -1,    -1,     7,    74,    32,    78,    33,
      75,    69,    -1,    44,    -1,    45,    -1,    47,    -1,    17,
      -1,    15,    -1,    16,    -1,    77,    43,    46,    -1,    46,
      -1,    77,    -1,    -1,     3,    32,    53,    33,    52,     4,
      52,    -1,     3,    32,    53,    33,    52,    -1,    -1,     5,
      32,    53,    33,    81,    52,    -1,    -1,     6,    32,    64,
      42,    53,    42,    64,    33,    83,    52,    -1,     8,    53,
      42,    -1,     8,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   130,   130,   133,   134,   137,   138,   139,   140,   141,
     142,   144,   146,   147,   148,   152,   153,   154,   155,   156,
     157,   158,   165,   166,   167,   168,   169,   170,   171,   172,
     175,   176,   179,   180,   181,   182,   183,   184,   187,   190,
     191,   192,   193,   194,   199,   205,   207,   208,   211,   212,
     213,   214,   217,   218,   219,   222,   223,   226,   229,   232,
     233,   238,   239,   243,   244,   249,   250,   253,   256,   263,
     263,   267,   267,   267,   268,   268,   268,   272,   273,   274,
     275,   276,   277,   280,   282,   285,   286,   290,   291,   294,
     294,   297,   297,   301,   302
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "FOR", "FUNCTION",
  "RETURN", "BREAK", "CONTINUE", "AND", "OR", "NOT", "LOCAL", "TRUE",
  "FALSE", "NIL", "PLUSPLUS", "MINMIN", "EQUAL", "NOTEQUAL", "ASSIGN",
  "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MODULO", "GREATEREQ", "LESSEQ",
  "GREATER", "LESS", "LEFT_PAR", "RIGHT_PAR", "LEFT_BR", "RIGHT_BR",
  "LEFT_SQ", "RIGHT_SQ", "DOUBLE_DOT", "DOT", "D_SCOPE", "SCOPE",
  "SEMICOLON", "COMMA", "INTEGER_C", "REAL_C", "ID", "STRING", "UMINUS",
  "$accept", "program", "stmt_list", "stmt", "expr", "term", "assignexpr",
  "primary", "lvalue", "member", "call", "callsuffix", "normcall",
  "methodcall", "expression", "elist", "objectdef", "indexed_list",
  "indexed", "indexedelem", "block", "$@1", "funcdef", "$@2", "$@3", "$@4",
  "$@5", "const", "final_idlist", "idlist", "ifstmt", "whilestmt", "$@6",
  "forstmt", "$@7", "returnstmt", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    54,    54,    54,    54,    54,    55,    56,
      56,    56,    56,    56,    57,    57,    57,    57,    58,    58,
      58,    58,    59,    59,    59,    60,    60,    61,    62,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    68,    70,
      69,    72,    73,    71,    74,    75,    71,    76,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    79,    79,    81,
      80,    83,    82,    84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       1,     1,     3,     1,     1,     2,     2,     1,     3,     4,
       3,     4,     4,     2,     6,     1,     1,     3,     5,     3,
       1,     1,     0,     3,     3,     3,     1,     1,     5,     0,
       4,     0,     0,     8,     0,     0,     7,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     0,     7,     5,     0,
       6,     0,    10,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,    74,     0,     0,     0,     0,     0,
      81,    82,    80,     0,     0,     0,     0,    69,    62,     0,
      14,    77,    78,    44,    79,     0,     2,     4,     0,    29,
      15,    37,    39,    47,    40,    41,    12,    13,    43,     6,
       7,     8,     9,     0,     0,    62,    71,     0,    94,     0,
      10,    11,    32,    45,     0,    33,     0,    35,    31,     0,
       0,     4,     0,    60,    61,     0,    67,     0,    66,    46,
       1,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,    34,    36,     0,    62,
       0,     0,     0,    53,    55,    56,    62,     0,     0,     0,
       0,     0,     0,    86,    93,     0,    30,    42,     0,     0,
       0,    63,     0,    64,    27,    28,    25,    26,    16,    17,
      18,    19,    20,    22,    24,    21,    23,    38,     0,     0,
       0,    48,     0,     0,    50,     0,    89,     0,    86,    84,
      85,     0,     0,    62,    70,     0,    59,    65,    57,    49,
      62,    52,    51,    88,     0,     0,     0,     0,    75,     0,
       0,     0,     0,    90,    62,    72,    83,     0,    54,    68,
      58,    87,     0,     0,    76,    91,    73,     0,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    93,    94,    95,    64,    65,    35,    66,    67,    68,
      36,    61,    37,   102,   173,    47,   167,    38,   140,   141,
      39,    40,   154,    41,   177,    42
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -150
static const yytype_int16 yypact[] =
{
     147,   -28,   -26,   -23,   -29,    97,   -12,     9,   217,   -27,
    -150,  -150,  -150,    90,    90,   217,    18,  -150,   182,     7,
    -150,  -150,  -150,  -150,  -150,    22,  -150,   147,   247,  -150,
    -150,  -150,   185,  -150,   -16,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,   217,   217,   217,  -150,    23,  -150,   270,
    -150,  -150,  -150,  -150,    49,   -24,   -16,   -24,  -150,   401,
      26,   147,   217,   470,    17,    24,    37,    29,  -150,  -150,
    -150,  -150,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,  -150,  -150,  -150,   217,   217,
     217,    36,    40,  -150,  -150,  -150,   217,   217,    41,   424,
     447,    39,    56,    43,  -150,    57,  -150,    61,    59,   316,
     217,  -150,    62,  -150,   503,   491,   515,   515,     1,     1,
    -150,  -150,  -150,   524,   524,   524,   524,   470,    64,   338,
      63,  -150,    65,   359,  -150,   147,  -150,   217,    43,  -150,
      58,    67,    61,   217,  -150,   217,   470,  -150,  -150,  -150,
     217,  -150,  -150,    98,   147,   293,    70,    71,  -150,    74,
     380,    75,   147,  -150,   217,  -150,  -150,    84,  -150,  -150,
    -150,  -150,    76,    84,  -150,  -150,  -150,   147,  -150
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,   -20,  -133,    -5,  -150,  -150,  -150,    33,  -150,
      35,  -150,  -150,  -150,  -150,   -44,  -150,  -150,  -150,    11,
    -149,  -150,   -11,  -150,  -150,  -150,  -150,  -150,  -150,   -19,
    -150,  -150,  -150,  -150,  -150,  -150
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      49,   101,   153,    52,    43,    60,    44,    71,    89,    45,
      58,    59,    90,    63,    91,    92,    96,    46,   174,    53,
      97,   163,    70,    98,   176,     4,    78,    79,    80,   171,
      50,     8,     9,    10,    11,    12,    13,    14,    99,   100,
      63,   108,    15,   105,   178,   128,    55,    57,    56,    56,
      16,    51,   132,    69,    18,   103,     4,   109,    19,   107,
     110,   111,    21,    22,    23,    24,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     112,   137,   130,   127,    63,   129,   131,   134,   138,   139,
     142,    63,   133,   143,   144,   150,    62,   148,   151,   159,
     158,   157,   162,   165,     9,   146,   161,   168,   170,   175,
       8,     9,    10,    11,    12,    13,    14,   166,    17,   156,
     172,    15,    54,   147,     0,     0,     0,     0,     0,    16,
      19,     0,   155,    18,     0,     0,    23,    19,    63,    48,
     160,    21,    22,    23,    24,    63,     0,     0,     0,     0,
       1,     0,     2,     3,     4,     5,     6,     7,     0,    63,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,    16,
       0,    17,     0,    18,     0,     0,     0,    19,     0,    20,
       0,    21,    22,    23,    24,     8,     9,    10,    11,    12,
      13,    14,     0,    86,    87,     0,    15,    88,     0,     0,
       0,     0,     0,     0,    16,     0,    62,    89,    18,     0,
       0,    90,    19,    91,    92,     0,    21,    22,    23,    24,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,    18,     0,     0,     0,    19,    72,    73,
       0,    21,    22,    23,    24,     0,     0,    74,    75,     0,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
       0,    72,    73,     0,     0,     0,     0,     0,     0,    85,
      74,    75,     0,    76,    77,    78,    79,    80,    81,    82,
      83,    84,     0,     0,    72,    73,     0,     0,     0,     0,
       0,     0,   104,    74,    75,     0,    76,    77,    78,    79,
      80,    81,    82,    83,    84,     0,     0,    72,    73,     0,
       0,     0,     0,     0,     0,   164,    74,    75,     0,    76,
      77,    78,    79,    80,    81,    82,    83,    84,     0,    72,
      73,     0,     0,     0,     0,     0,     0,   145,    74,    75,
       0,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      72,    73,     0,     0,     0,   149,     0,     0,     0,    74,
      75,     0,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    72,    73,     0,     0,     0,   152,     0,     0,     0,
      74,    75,     0,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    72,    73,     0,   169,     0,     0,     0,     0,
       0,    74,    75,     0,    76,    77,    78,    79,    80,    81,
      82,    83,    84,     0,   106,    72,    73,     0,     0,     0,
       0,     0,     0,     0,    74,    75,     0,    76,    77,    78,
      79,    80,    81,    82,    83,    84,     0,   135,    72,    73,
       0,     0,     0,     0,     0,     0,     0,    74,    75,     0,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
     136,    72,    73,     0,     0,     0,     0,     0,     0,     0,
      74,    75,     0,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    72,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,     0,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    74,    75,     0,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    -1,     0,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1
};

static const yytype_int16 yycheck[] =
{
       5,    45,   135,     8,    32,    16,    32,    27,    32,    32,
      15,    16,    36,    18,    38,    39,    32,    46,   167,    46,
      36,   154,     0,    39,   173,     7,    25,    26,    27,   162,
      42,    13,    14,    15,    16,    17,    18,    19,    43,    44,
      45,    61,    24,    54,   177,    89,    13,    14,    13,    14,
      32,    42,    96,    46,    36,    32,     7,    62,    40,    33,
      43,    37,    44,    45,    46,    47,    37,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      43,    42,    46,    88,    89,    90,    46,    46,    32,    46,
      33,    96,    97,    32,    35,    32,    34,    33,    33,   143,
      33,    43,     4,    33,    14,   110,   150,    33,    33,    33,
      13,    14,    15,    16,    17,    18,    19,    46,    34,   138,
     164,    24,    32,   112,    -1,    -1,    -1,    -1,    -1,    32,
      40,    -1,   137,    36,    -1,    -1,    46,    40,   143,    42,
     145,    44,    45,    46,    47,   150,    -1,    -1,    -1,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    -1,   164,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,
      -1,    44,    45,    46,    47,    13,    14,    15,    16,    17,
      18,    19,    -1,    18,    19,    -1,    24,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    32,    36,    -1,
      -1,    36,    40,    38,    39,    -1,    44,    45,    46,    47,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    40,    11,    12,
      -1,    44,    45,    46,    47,    -1,    -1,    20,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    41,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      11,    12,    -1,    -1,    -1,    37,    -1,    -1,    -1,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    11,    12,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    11,    12,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    20,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    23,    24,    25,
      26,    27,    28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    10,    13,    14,
      15,    16,    17,    18,    19,    24,    32,    34,    36,    40,
      42,    44,    45,    46,    47,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    65,    69,    71,    76,    79,
      80,    82,    84,    32,    32,    32,    46,    74,    42,    53,
      42,    42,    53,    46,    32,    57,    59,    57,    53,    53,
      71,    70,    34,    53,    63,    64,    66,    67,    68,    46,
       0,    51,    11,    12,    20,    21,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    42,    18,    19,    22,    32,
      36,    38,    39,    60,    61,    62,    32,    36,    39,    53,
      53,    64,    72,    32,    42,    71,    33,    33,    51,    53,
      43,    37,    43,    37,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    64,    53,
      46,    46,    64,    53,    46,    33,    33,    42,    32,    46,
      77,    78,    33,    32,    35,    41,    53,    68,    33,    37,
      32,    33,    37,    52,    81,    53,    78,    43,    33,    64,
      53,    64,     4,    52,    42,    33,    46,    75,    33,    35,
      33,    52,    64,    73,    69,    33,    69,    83,    52
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 130 "ph2.y"
    {printf("\"Grammar\": program | program stmt\n");}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 137 "ph2.y"
    {resettemp();if(libflag==-2)printf("ERROR :::::: Variable with name : %s is a libfunc!!!!!\nfailed at line : %d\n",libflagname,yylineno);libflag=0;printf("\"Grammar\": stmt | expr SEMICOLON\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 138 "ph2.y"
    {resettemp();printf("\"Grammar\": stmt | ifstmt\n");}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 139 "ph2.y"
    {resettemp();printf("\"Grammar\": stmt | whilestmt\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 140 "ph2.y"
    {resettemp();printf("\"Grammar\": stmt | forstmt\n");}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 141 "ph2.y"
    {resettemp(); if(return_in_func == 0){printf("Error, return is not inside function at line %d!\n",yylineno); } printf("\"Grammar\": stmt | returnstmt\n"); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 142 "ph2.y"
    {resettemp();if(break_in_loop == 0){printf("Error, break is used but not in loop at line %d!\n",yylineno);}
			printf("\"Grammar\": stmt | BREAK SEMICOLON\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 144 "ph2.y"
    {resettemp();if(con_in_loop == 0){printf("Error, continue is used but not in loop at line %d!\n",yylineno);}
			printf("\"Grammar\": stmt | CONTINUE SEMICOLON\n");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 146 "ph2.y"
    {resettemp();printf("\"Grammar\": stmt | block\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 147 "ph2.y"
    {resettemp();printf("\"Grammar\": stmt | funcdef\n");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 148 "ph2.y"
    {resettemp();printf("\"Grammar\": stmt | SEMICOLON\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 152 "ph2.y"
    { (yyval.expr)=(yyvsp[(1) - (1)].expr); printf("\"Grammar\": expr | assignexpr\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 153 "ph2.y"
    {(yyval.expr)=newtemp(scope);emit(add,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr),(yyval.expr),0,yylineno);tempcounter++;printf("\"Grammar\": expr | expr PLUS expr\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 154 "ph2.y"
    {printf("as");(yyval.expr)=newtemp(scope);emit(sub,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr),(yyval.expr),0,yylineno);tempcounter++;printf("\"Grammar\": expr | expr MINUS expr\n");}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 155 "ph2.y"
    {(yyval.expr)=newtemp(scope);emit(mul,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr),(yyval.expr),0,yylineno);tempcounter++;printf("\"Grammar\": expr | expr MULTIPLY expr\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 156 "ph2.y"
    {(yyval.expr)=newtemp(scope);emit(divide,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr),(yyval.expr),0,yylineno);tempcounter++;printf("\"Grammar\": expr | expr DIVIDE expr\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 157 "ph2.y"
    {(yyval.expr)=newtemp(scope);emit(mod,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr),(yyval.expr),0,yylineno);tempcounter++;printf("\"Grammar\": expr | expr MODULO expr\n");}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 158 "ph2.y"
    {
			struct expr* true_ex=malloc(sizeof(struct expr));
			struct expr* false_ex=malloc(sizeof(struct expr));
			(yyval.expr)=newtemp(scope);
			emit(if_greater,(yyvsp[(1) - (3)].expr),(yyvsp[(3) - (3)].expr),(yyval.expr),0,yylineno);tempcounter++;
			
			printf("\"Grammar\": expr | expr GREATER expr\n");}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 165 "ph2.y"
    {printf("\"Grammar\": expr | expr GREATEREQ expr\n");}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 166 "ph2.y"
    {printf("\"Grammar\": expr | expr LESS expr\n");}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 167 "ph2.y"
    {printf("\"Grammar\": expr | expr LESSEQ expr\n");}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 168 "ph2.y"
    {printf("\"Grammar\": expr | expr EQUAL expr\n");}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 169 "ph2.y"
    {printf("\"Grammar\": expr | expr NOTEQUAL expr\n");}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 170 "ph2.y"
    {printf("\"Grammar\": expr | expr AND expr\n");}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 171 "ph2.y"
    {printf("\"Grammar\": expr | expr OR expr\n");}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 172 "ph2.y"
    {(yyval.expr)=(expr*)(yyvsp[(1) - (1)].expr);printf("\"Grammar\": expr | term\n");}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 175 "ph2.y"
    {(yyval.expr)=(yyvsp[(2) - (3)].expr);printf("\"Grammar\": term | LEFT_PAR expr RIGHT_PAR\n");}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 176 "ph2.y"
    {printf("\"Grammar\": term | MINUS expr %prec UMINUS\n");}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 179 "ph2.y"
    {printf("\"Grammar\": term | NOT expr\n");}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 180 "ph2.y"
    {printf("\"Grammar\": term | PLUSPLUS lvalue\n");}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 181 "ph2.y"
    {printf("\"Grammar\": term | lvalue PLUSPLUS\n");}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 182 "ph2.y"
    {printf("\"Grammar\": term | MINMIN lvalue\n");}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 183 "ph2.y"
    {printf("\"Grammar\": term | lvalue MINMIN\n");}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 184 "ph2.y"
    {printf("\"Grammar\": term | primary \n");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 187 "ph2.y"
    {emit(assign,(yyvsp[(3) - (3)].expr),NULL,(yyvsp[(1) - (3)].expr),0,yylineno);(yyval.expr)=newtemp(scope);emit(assign,(yyvsp[(1) - (3)].expr),NULL,(yyval.expr),0,yylineno);tempcounter++;printf("\"Grammar\": assignexpr | lvalue ASSIGN expr\n");}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 190 "ph2.y"
    {printf("\"Grammar\": primary | lvalue\n");}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 191 "ph2.y"
    {printf("\"Grammar\": primary | call\n");}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 192 "ph2.y"
    {printf("\"Grammar\": primary | objectdef\n");}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 193 "ph2.y"
    {printf("\"Grammar\": primary | LEFT_PAR funcdef RIGHT_PAR\n");}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 194 "ph2.y"
    {printf("\"Grammar\": primary | const \n");}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 199 "ph2.y"
    {printf("\"Grammar\": lvalue | ID\n"); 
				if(scope==0){libflag=checkedInsertion(scope,(yyvsp[(1) - (1)].strVal),yylineno,0,functionvar);if(libflag==-1){printf("failed at line : %d\n",yylineno);}
				else if(libflag==-2)libflagname=(yyvsp[(1) - (1)].strVal);}
				else {libflag=checkedInsertion(scope,(yyvsp[(1) - (1)].strVal),yylineno,1,functionvar);if(libflag==-1){printf("failed at line : %d\n",yylineno);}
				else if(libflag==-2)libflagname=(yyvsp[(1) - (1)].strVal);} }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 205 "ph2.y"
    {printf("\"Grammar\": lvalue | LOCAL ID\n");if(scope==0){if(checkedInsertion(scope,(yyvsp[(2) - (2)].strVal),yylineno,0,functionvar)==-1){printf("failed at line : %d\n",yylineno);}}
				else {libflag=checkedInsertion(scope,(yyvsp[(2) - (2)].strVal),yylineno,5,functionvar);if(libflag==-1){printf("failed at line : %d\n",yylineno);}else if(libflag==-2)libflagname=(yyvsp[(2) - (2)].strVal);}}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 207 "ph2.y"
    {printf("\"Grammar\": lvalue | D_SCOPE\n");if(checkD_Scope((yyvsp[(2) - (2)].strVal))==0){printf("failed at line : %d\n",yylineno);}}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 208 "ph2.y"
    {printf("\"Grammar\": lvalue | MEMBER\n");}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 211 "ph2.y"
    {printf("\"Grammar\": member | lvalue DOT ID\n");}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 212 "ph2.y"
    {printf("\"Grammar\": member | lvalue LEFT_SQ\n");}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 213 "ph2.y"
    {printf("\"Grammar\": member | call DOT ID\n");}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 214 "ph2.y"
    {printf("\"Grammar\": member | call LEFT_SQ expr RIGHT_SQ\n");}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 217 "ph2.y"
    {printf("\"Grammar\": call | call LEFT_PAR elist RIGHT_PAR\n");}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 218 "ph2.y"
    {if(libflag==-2)libflag=0;printf("\"Grammar\": call | lvalue callsuffix\n");}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 219 "ph2.y"
    {printf("\"Grammar\": call | LEFT_PAR funcdef RIGHT_PAR LEFT_PAR elist RIGHT_PAR\n");}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 222 "ph2.y"
    {printf("\"Grammar\": callsuffix | normcall\n");}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 223 "ph2.y"
    {printf("\"Grammar\": callsuffix | methodcall\n");}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 226 "ph2.y"
    {printf("\"Grammar\": normcall | LEFT_PAR elist RIGHT_PAR\n");}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 229 "ph2.y"
    {printf("\"Grammar\": methodcall | DOUBLE_DOT ID LEFT_PAR elist RIGHT_PAR\n");}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 238 "ph2.y"
    {printf("\"Grammar\": elist | expr\n");}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 243 "ph2.y"
    {printf("\"Grammar\": objectdef | LEFT_SQ elist RIGHT_SQ\n");}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 244 "ph2.y"
    {printf("\"Grammar\": objectdef | LEFT_SQ indexed RIGHT_SQ\n");}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 253 "ph2.y"
    {printf("\"Grammar\": indexed | indexedelem\n");}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 256 "ph2.y"
    {printf("\"Grammar\": indexedelem | LEFT_BR expr SCOPE expr RIGHT_BR\n");}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 263 "ph2.y"
    {scope++;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 263 "ph2.y"
    {hideScope(scope);scope--; 
				printf("\"Grammar\": block | LEFT_BR program RIGHT_BR\n");}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 267 "ph2.y"
    {functionvar=1;if(checkedInsertion(scope,(yyvsp[(2) - (2)].strVal),yylineno,3,functionvar)==-1){printf("failed at line : %d\n",yylineno);}}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 267 "ph2.y"
    {return_in_func++;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 267 "ph2.y"
    {if(return_in_func > 0){ return_in_func--;} printf("\"Grammar\": funcdef | FUNCTION ID LEFT_PAR idlist RIGHT_PAR block\n");functionvar=0;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 268 "ph2.y"
    {functionvar=1;aa=malloc(sizeof(int)+4);snprintf(aa,sizeof(int)+4,"$%d",funcounter++);if(checkedInsertion(scope,aa,yylineno,3,functionvar)==-1){printf("failed at line : %d\n",yylineno);}}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 268 "ph2.y"
    {return_in_func++;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 268 "ph2.y"
    {if(return_in_func > 0){ return_in_func--;} printf("\"Grammar\": funcdef | FUNCTION LEFT_PAR idlist RIGHT_PAR block\n");functionvar=0;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 272 "ph2.y"
    {(yyval.expr)=exprNumConst((yyvsp[(1) - (1)].intVal));printf("\"Grammar\": const | INTEGER_C\n");}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 273 "ph2.y"
    {printf("\"Grammar\": const | REAL_C\n");}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 274 "ph2.y"
    {printf("\"Grammar\": const | STRING\n");}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 275 "ph2.y"
    {printf("\"Grammar\": const | NIL\n");}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 276 "ph2.y"
    { printf("\"Grammar\": const | TRUE\n");}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 277 "ph2.y"
    {printf("\"Grammar\": const | FALSE\n");}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 280 "ph2.y"
    {printf("\"Grammar\": final_idlist | final_idlist COMMA ID\n"); 
				if(checkedInsertion(scope,(yyvsp[(3) - (3)].strVal),yylineno,2,functionvar)==-1){printf("failed at line : %d\n",yylineno);}}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 282 "ph2.y"
    {printf("\"Grammar\": final_idlist | ID\n");if(checkedInsertion(scope,(yyvsp[(1) - (1)].strVal),yylineno,2,functionvar)==-1){printf("failed at line : %d\n",yylineno);}}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 285 "ph2.y"
    {printf("\"Grammar\": idlist | ID\n");}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 290 "ph2.y"
    {printf("\"Grammar\": ifstmt | IF LEFT_PAR expr RIGHT_PAR stmt ELSE stmt\n");}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 291 "ph2.y"
    {printf("\"Grammar\": ifstmt | IF LEFT_PAR expr RIGHT_PAR stmt\n");}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 294 "ph2.y"
    {break_in_loop++; con_in_loop++; }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 294 "ph2.y"
    {if(con_in_loop > 0){con_in_loop--;}if(break_in_loop > 0){ break_in_loop--;}printf("\"Grammar\": whilestmt | WHILE LEFT_PAR expr RIGHT_PAR stmt\n");}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 297 "ph2.y"
    {break_in_loop++; con_in_loop++; }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 297 "ph2.y"
    {if(break_in_loop > 0){ break_in_loop--;}if(con_in_loop > 0){con_in_loop--;}printf("\"Grammar\": forstmt | FOR LEFT_PAR elist SEMICOLON expr SEMICOLON elist LEFT_PAR stmt\n");}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 301 "ph2.y"
    {emit(ret,NULL,NULL,(yyvsp[(2) - (3)].expr),0,yylineno);printf("\"Grammar\": returnstmt | RETURN expr SEMICOLON\n");}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 302 "ph2.y"
    {printf("\"Grammar\": returnstmt | RETURN SEMICOLON\n");}
    break;



/* Line 1455 of yacc.c  */
#line 2295 "parser.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 308 "ph2.y"



/*conclusion*/

int yyerror(char* yaccProvidedMessage){  /*tin parexoume emeis ston yacc*/

	fprintf(stderr,"%s: at line %d, before token %s\n",yaccProvidedMessage,yylineno,yytext);
	fprintf(stderr,"INPUT NOT VALID\n");

}

int main(int argc, char **argv) {

	
	if(argc >1){
		if(!(yyin = fopen(argv[1],"r"))){
			fprintf(stderr,"Cannot read file: %s\n", argv[1]);
			return 1;
		}
	}
	else
	{
		yyin=stdin;
	}
	libfunctions();
	yyparse(); /*parexetai apo yacc*/
	printRes();
	printQuads();
	return 0;
}





