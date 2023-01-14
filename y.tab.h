/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    START = 258,
    STOP = 259,
    IF = 260,
    ELSE = 261,
    WHILE = 262,
    READ = 263,
    WRITE = 264,
    INT = 265,
    CHAR = 266,
    ARRAY = 267,
    ASSIGN = 268,
    L = 269,
    G = 270,
    EQ = 271,
    LE = 272,
    GE = 273,
    NE = 274,
    ID = 275,
    CONST_INT = 276,
    CONST_CHAR = 277,
    CONST_STRING = 278,
    CONST_ARRAY = 279
  };
#endif
/* Tokens.  */
#define START 258
#define STOP 259
#define IF 260
#define ELSE 261
#define WHILE 262
#define READ 263
#define WRITE 264
#define INT 265
#define CHAR 266
#define ARRAY 267
#define ASSIGN 268
#define L 269
#define G 270
#define EQ 271
#define LE 272
#define GE 273
#define NE 274
#define ID 275
#define CONST_INT 276
#define CONST_CHAR 277
#define CONST_STRING 278
#define CONST_ARRAY 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 28 "specification.y"
union val
{
#line 28 "specification.y"

    int i_val;
    char *p_val;

#line 111 "y.tab.h"

};
#line 28 "specification.y"
typedef union val YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
