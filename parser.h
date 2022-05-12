
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 86 "ph2.y"
 
	int intVal; 
	char* strVal; 
	float fltVal;
	struct Entry* exprNode;
	struct expr* expr;
	


/* Line 1676 of yacc.c  */
#line 158 "parser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


