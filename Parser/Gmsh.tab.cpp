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

/* Substitute the variable and function names.  */
#define yyparse gmsh_yyparse
#define yylex   gmsh_yylex
#define yyerror gmsh_yyerror
#define yylval  gmsh_yylval
#define yychar  gmsh_yychar
#define yydebug gmsh_yydebug
#define yynerrs gmsh_yynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tDOUBLE = 258,
     tSTRING = 259,
     tBIGSTR = 260,
     tEND = 261,
     tAFFECT = 262,
     tDOTS = 263,
     tPi = 264,
     tMPI_Rank = 265,
     tMPI_Size = 266,
     tEuclidian = 267,
     tCoordinates = 268,
     tTestLevel = 269,
     tExp = 270,
     tLog = 271,
     tLog10 = 272,
     tSqrt = 273,
     tSin = 274,
     tAsin = 275,
     tCos = 276,
     tAcos = 277,
     tTan = 278,
     tRand = 279,
     tAtan = 280,
     tAtan2 = 281,
     tSinh = 282,
     tCosh = 283,
     tTanh = 284,
     tFabs = 285,
     tFloor = 286,
     tCeil = 287,
     tRound = 288,
     tFmod = 289,
     tModulo = 290,
     tHypot = 291,
     tList = 292,
     tLinSpace = 293,
     tLogSpace = 294,
     tListFromFile = 295,
     tCatenary = 296,
     tPrintf = 297,
     tError = 298,
     tStr = 299,
     tSprintf = 300,
     tStrCat = 301,
     tStrPrefix = 302,
     tStrRelative = 303,
     tStrReplace = 304,
     tAbsolutePath = 305,
     tDirName = 306,
     tStrSub = 307,
     tStrLen = 308,
     tFind = 309,
     tStrFind = 310,
     tStrCmp = 311,
     tStrChoice = 312,
     tUpperCase = 313,
     tLowerCase = 314,
     tLowerCaseIn = 315,
     tTextAttributes = 316,
     tBoundingBox = 317,
     tDraw = 318,
     tSetChanged = 319,
     tToday = 320,
     tFixRelativePath = 321,
     tCurrentDirectory = 322,
     tSyncModel = 323,
     tNewModel = 324,
     tOnelabAction = 325,
     tOnelabRun = 326,
     tCpu = 327,
     tMemory = 328,
     tTotalMemory = 329,
     tCreateTopology = 330,
     tCreateTopologyNoHoles = 331,
     tDistanceFunction = 332,
     tDefineConstant = 333,
     tUndefineConstant = 334,
     tDefineNumber = 335,
     tDefineStruct = 336,
     tNameStruct = 337,
     tDefineString = 338,
     tSetNumber = 339,
     tSetString = 340,
     tPoint = 341,
     tCircle = 342,
     tEllipse = 343,
     tLine = 344,
     tSphere = 345,
     tPolarSphere = 346,
     tSurface = 347,
     tSpline = 348,
     tVolume = 349,
     tBlock = 350,
     tCylinder = 351,
     tCone = 352,
     tTorus = 353,
     tEllipsoid = 354,
     tQuadric = 355,
     tShapeFromFile = 356,
     tRectangle = 357,
     tDisk = 358,
     tWire = 359,
     tCharacteristic = 360,
     tLength = 361,
     tParametric = 362,
     tElliptic = 363,
     tRefineMesh = 364,
     tAdaptMesh = 365,
     tRelocateMesh = 366,
     tSetFactory = 367,
     tThruSections = 368,
     tWedge = 369,
     tFillet = 370,
     tChamfer = 371,
     tPlane = 372,
     tRuled = 373,
     tTransfinite = 374,
     tPhysical = 375,
     tCompound = 376,
     tPeriodic = 377,
     tUsing = 378,
     tPlugin = 379,
     tDegenerated = 380,
     tRecursive = 381,
     tRotate = 382,
     tTranslate = 383,
     tSymmetry = 384,
     tDilate = 385,
     tExtrude = 386,
     tLevelset = 387,
     tAffine = 388,
     tBooleanUnion = 389,
     tBooleanIntersection = 390,
     tBooleanDifference = 391,
     tBooleanSection = 392,
     tBooleanFragments = 393,
     tThickSolid = 394,
     tRecombine = 395,
     tSmoother = 396,
     tSplit = 397,
     tDelete = 398,
     tCoherence = 399,
     tIntersect = 400,
     tMeshAlgorithm = 401,
     tReverse = 402,
     tLayers = 403,
     tScaleLast = 404,
     tHole = 405,
     tAlias = 406,
     tAliasWithOptions = 407,
     tCopyOptions = 408,
     tQuadTriAddVerts = 409,
     tQuadTriNoNewVerts = 410,
     tRecombLaterals = 411,
     tTransfQuadTri = 412,
     tText2D = 413,
     tText3D = 414,
     tInterpolationScheme = 415,
     tTime = 416,
     tCombine = 417,
     tBSpline = 418,
     tBezier = 419,
     tNurbs = 420,
     tNurbsOrder = 421,
     tNurbsKnots = 422,
     tColor = 423,
     tColorTable = 424,
     tFor = 425,
     tIn = 426,
     tEndFor = 427,
     tIf = 428,
     tElseIf = 429,
     tElse = 430,
     tEndIf = 431,
     tExit = 432,
     tAbort = 433,
     tField = 434,
     tReturn = 435,
     tCall = 436,
     tSlide = 437,
     tMacro = 438,
     tShow = 439,
     tHide = 440,
     tGetValue = 441,
     tGetStringValue = 442,
     tGetEnv = 443,
     tGetString = 444,
     tGetNumber = 445,
     tUnique = 446,
     tHomology = 447,
     tCohomology = 448,
     tBetti = 449,
     tExists = 450,
     tFileExists = 451,
     tGMSH_MAJOR_VERSION = 452,
     tGMSH_MINOR_VERSION = 453,
     tGMSH_PATCH_VERSION = 454,
     tGmshExecutableName = 455,
     tSetPartition = 456,
     tNameToString = 457,
     tStringToName = 458,
     tAFFECTDIVIDE = 459,
     tAFFECTTIMES = 460,
     tAFFECTMINUS = 461,
     tAFFECTPLUS = 462,
     tOR = 463,
     tAND = 464,
     tNOTEQUAL = 465,
     tEQUAL = 466,
     tGREATEROREQUAL = 467,
     tLESSOREQUAL = 468,
     UNARYPREC = 469,
     tMINUSMINUS = 470,
     tPLUSPLUS = 471
   };
#endif
/* Tokens.  */
#define tDOUBLE 258
#define tSTRING 259
#define tBIGSTR 260
#define tEND 261
#define tAFFECT 262
#define tDOTS 263
#define tPi 264
#define tMPI_Rank 265
#define tMPI_Size 266
#define tEuclidian 267
#define tCoordinates 268
#define tTestLevel 269
#define tExp 270
#define tLog 271
#define tLog10 272
#define tSqrt 273
#define tSin 274
#define tAsin 275
#define tCos 276
#define tAcos 277
#define tTan 278
#define tRand 279
#define tAtan 280
#define tAtan2 281
#define tSinh 282
#define tCosh 283
#define tTanh 284
#define tFabs 285
#define tFloor 286
#define tCeil 287
#define tRound 288
#define tFmod 289
#define tModulo 290
#define tHypot 291
#define tList 292
#define tLinSpace 293
#define tLogSpace 294
#define tListFromFile 295
#define tCatenary 296
#define tPrintf 297
#define tError 298
#define tStr 299
#define tSprintf 300
#define tStrCat 301
#define tStrPrefix 302
#define tStrRelative 303
#define tStrReplace 304
#define tAbsolutePath 305
#define tDirName 306
#define tStrSub 307
#define tStrLen 308
#define tFind 309
#define tStrFind 310
#define tStrCmp 311
#define tStrChoice 312
#define tUpperCase 313
#define tLowerCase 314
#define tLowerCaseIn 315
#define tTextAttributes 316
#define tBoundingBox 317
#define tDraw 318
#define tSetChanged 319
#define tToday 320
#define tFixRelativePath 321
#define tCurrentDirectory 322
#define tSyncModel 323
#define tNewModel 324
#define tOnelabAction 325
#define tOnelabRun 326
#define tCpu 327
#define tMemory 328
#define tTotalMemory 329
#define tCreateTopology 330
#define tCreateTopologyNoHoles 331
#define tDistanceFunction 332
#define tDefineConstant 333
#define tUndefineConstant 334
#define tDefineNumber 335
#define tDefineStruct 336
#define tNameStruct 337
#define tDefineString 338
#define tSetNumber 339
#define tSetString 340
#define tPoint 341
#define tCircle 342
#define tEllipse 343
#define tLine 344
#define tSphere 345
#define tPolarSphere 346
#define tSurface 347
#define tSpline 348
#define tVolume 349
#define tBlock 350
#define tCylinder 351
#define tCone 352
#define tTorus 353
#define tEllipsoid 354
#define tQuadric 355
#define tShapeFromFile 356
#define tRectangle 357
#define tDisk 358
#define tWire 359
#define tCharacteristic 360
#define tLength 361
#define tParametric 362
#define tElliptic 363
#define tRefineMesh 364
#define tAdaptMesh 365
#define tRelocateMesh 366
#define tSetFactory 367
#define tThruSections 368
#define tWedge 369
#define tFillet 370
#define tChamfer 371
#define tPlane 372
#define tRuled 373
#define tTransfinite 374
#define tPhysical 375
#define tCompound 376
#define tPeriodic 377
#define tUsing 378
#define tPlugin 379
#define tDegenerated 380
#define tRecursive 381
#define tRotate 382
#define tTranslate 383
#define tSymmetry 384
#define tDilate 385
#define tExtrude 386
#define tLevelset 387
#define tAffine 388
#define tBooleanUnion 389
#define tBooleanIntersection 390
#define tBooleanDifference 391
#define tBooleanSection 392
#define tBooleanFragments 393
#define tThickSolid 394
#define tRecombine 395
#define tSmoother 396
#define tSplit 397
#define tDelete 398
#define tCoherence 399
#define tIntersect 400
#define tMeshAlgorithm 401
#define tReverse 402
#define tLayers 403
#define tScaleLast 404
#define tHole 405
#define tAlias 406
#define tAliasWithOptions 407
#define tCopyOptions 408
#define tQuadTriAddVerts 409
#define tQuadTriNoNewVerts 410
#define tRecombLaterals 411
#define tTransfQuadTri 412
#define tText2D 413
#define tText3D 414
#define tInterpolationScheme 415
#define tTime 416
#define tCombine 417
#define tBSpline 418
#define tBezier 419
#define tNurbs 420
#define tNurbsOrder 421
#define tNurbsKnots 422
#define tColor 423
#define tColorTable 424
#define tFor 425
#define tIn 426
#define tEndFor 427
#define tIf 428
#define tElseIf 429
#define tElse 430
#define tEndIf 431
#define tExit 432
#define tAbort 433
#define tField 434
#define tReturn 435
#define tCall 436
#define tSlide 437
#define tMacro 438
#define tShow 439
#define tHide 440
#define tGetValue 441
#define tGetStringValue 442
#define tGetEnv 443
#define tGetString 444
#define tGetNumber 445
#define tUnique 446
#define tHomology 447
#define tCohomology 448
#define tBetti 449
#define tExists 450
#define tFileExists 451
#define tGMSH_MAJOR_VERSION 452
#define tGMSH_MINOR_VERSION 453
#define tGMSH_PATCH_VERSION 454
#define tGmshExecutableName 455
#define tSetPartition 456
#define tNameToString 457
#define tStringToName 458
#define tAFFECTDIVIDE 459
#define tAFFECTTIMES 460
#define tAFFECTMINUS 461
#define tAFFECTPLUS 462
#define tOR 463
#define tAND 464
#define tNOTEQUAL 465
#define tEQUAL 466
#define tGREATEROREQUAL 467
#define tLESSOREQUAL 468
#define UNARYPREC 469
#define tMINUSMINUS 470
#define tPLUSPLUS 471




/* Copy the first part of user declarations.  */
#line 1 "Gmsh.y"

// Gmsh - Copyright (C) 1997-2017 C. Geuzaine, J.-F. Remacle
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <gmsh@onelab.info>.

#include <sstream>
#include <map>
#include <string.h>
#include <stdarg.h>
#include <time.h>
#include "GmshConfig.h"
#include "GmshMessage.h"
#include "fullMatrix.h"
#include "MallocUtils.h"
#include "ListUtils.h"
#include "TreeUtils.h"
#include "StringUtils.h"
#include "Numeric.h"
#include "Context.h"
#include "GModel.h"
#include "GModelIO_GEO.h"
#include "GModelIO_OCC.h"
#include "Geo.h"
#include "GeoInterpolation.h"
#include "Options.h"
#include "Parser.h"
#include "OpenFile.h"
#include "CommandLine.h"
#include "FunctionManager.h"
#include "ColorTable.h"
#include "OS.h"
#include "CreateFile.h"
#include "gmshSurface.h"
#include "gmshLevelset.h"
#include "fullMatrix.h"

#if defined(HAVE_MESH)
#include "Generator.h"
#include "Field.h"
#include "BackgroundMesh.h"
#include "HighOrder.h"
#endif

#if defined(HAVE_POST)
#include "PView.h"
#include "PViewDataList.h"
#endif

#if defined(HAVE_PLUGINS)
#include "PluginManager.h"
#endif

#if defined(HAVE_OPENGL)
#include "drawContext.h"
#endif

#if defined(HAVE_POPPLER)
#include "gmshPopplerWrapper.h"
#endif

// Global parser variables
std::string gmsh_yyname;
int gmsh_yyerrorstate = 0;
int gmsh_yyviewindex = 0;
std::map<std::string, gmsh_yysymbol> gmsh_yysymbols;
std::map<std::string, std::vector<std::string> > gmsh_yystringsymbols;

// Static parser variables (accessible only in this file)
#if defined(HAVE_POST)
static PViewDataList *ViewData;
#endif
static std::vector<double> ViewCoord;
static std::vector<double> *ViewValueList = 0;
static int *ViewNumList = 0;
static ExtrudeParams extr;
static gmshSurface *myGmshSurface = 0;
#define MAX_RECUR_TESTS 100
static int statusImbricatedTests[MAX_RECUR_TESTS];
#define MAX_RECUR_LOOPS 100
static int ImbricatedLoop = 0, ImbricatedTest = 0;
static gmshfpos_t yyposImbricatedLoopsTab[MAX_RECUR_LOOPS];
static int yylinenoImbricatedLoopsTab[MAX_RECUR_LOOPS];
static double LoopControlVariablesTab[MAX_RECUR_LOOPS][3];
static std::string LoopControlVariablesNameTab[MAX_RECUR_LOOPS];
static std::map<std::string, std::vector<double> > floatOptions;
static std::map<std::string, std::vector<std::string> > charOptions;
static std::string factory;
static std::map<std::string, Struct> StructTable_M;
static char *Struct_Name = 0, *Struct_NameSpace = 0;
static int flag_tSTRING_alloc = 0;

void yyerror(const char *s);
void yymsg(int level, const char *fmt, ...);
void skip_until(const char *skip, const char *until);
void skip_until_test(const char *skip, const char *until,
                     const char *until2, int l_until2_sub, int *type_until2);
void assignVariable(const std::string &name, int index, int assignType,
                    double value);
void assignVariables(const std::string &name, List_T *indices, int assignType,
                     List_T *values);
void incrementVariable(const std::string &name, int index, double value);
int PrintListOfDouble(char *format, List_T *list, char *buffer);
void PrintParserSymbols(std::vector<std::string> &vec);
fullMatrix<double> ListOfListOfDouble2Matrix(List_T *list);
void ListOfDouble2Vector(List_T *list, std::vector<int> &v);
void ListOfDouble2Vector(List_T *list, std::vector<double> &v);
void ListOfShapes2Vectors(List_T *list, std::vector<int> v[4]);
void Vectors2ListOfShapes(std::vector<int> tags[4], List_T *list);

void addPeriodicEdge(int, int, const std::vector<double>&);
void addPeriodicFace(int, int, const std::map<int,int>&);
void addPeriodicFace(int, int, const std::vector<double>&);
void computeAffineTransformation(SPoint3&, SPoint3&, double, SPoint3&, std::vector<double>&);
void addEmbedded(int dim, std::vector<int> tags, int dim2, int tag2);

char *strsave(char *ptr);

struct doubleXstring{
  double d;
  char *s;
};



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
#line 126 "Gmsh.y"
{
  char *c;
  int i;
  unsigned int u;
  double d;
  double v[5];
  Shape s;
  List_T *l;
}
/* Line 193 of yacc.c.  */
#line 671 "Gmsh.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 684 "Gmsh.tab.cpp"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   14655

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  237
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  577
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2165

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   471

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   222,     2,   232,     2,   221,     2,     2,
     227,   228,   219,   217,   233,   218,   231,   220,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     213,     2,   214,   208,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   229,     2,   230,   226,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   234,     2,   235,   236,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   209,   210,   211,   212,   215,   216,   223,
     224,   225
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      24,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      44,    46,    48,    50,    52,    54,    56,    58,    61,    67,
      73,    81,    89,    97,   107,   114,   121,   128,   137,   138,
     141,   144,   147,   150,   153,   155,   159,   161,   165,   166,
     167,   178,   180,   184,   185,   199,   201,   205,   206,   222,
     231,   246,   247,   254,   256,   258,   260,   262,   264,   266,
     268,   270,   272,   274,   276,   282,   288,   291,   299,   307,
     312,   316,   323,   330,   338,   346,   353,   360,   370,   380,
     387,   394,   402,   410,   417,   424,   429,   438,   447,   457,
     467,   477,   487,   496,   505,   515,   525,   535,   545,   552,
     562,   569,   579,   585,   594,   603,   615,   622,   632,   638,
     646,   656,   666,   678,   686,   696,   706,   707,   709,   710,
     714,   720,   721,   731,   732,   744,   745,   757,   763,   764,
     774,   775,   779,   783,   789,   795,   796,   799,   803,   809,
     813,   814,   817,   821,   825,   829,   835,   837,   839,   843,
     845,   847,   851,   853,   855,   859,   861,   863,   867,   868,
     874,   875,   878,   886,   894,   902,   911,   920,   928,   936,
     948,   957,   965,   974,   983,   992,  1002,  1006,  1011,  1022,
    1030,  1038,  1046,  1054,  1062,  1070,  1078,  1086,  1094,  1102,
    1111,  1124,  1133,  1141,  1149,  1158,  1167,  1176,  1185,  1194,
    1203,  1209,  1221,  1227,  1237,  1247,  1252,  1262,  1272,  1274,
    1276,  1277,  1280,  1287,  1294,  1301,  1308,  1317,  1328,  1343,
    1360,  1373,  1388,  1403,  1418,  1433,  1442,  1451,  1458,  1463,
    1470,  1477,  1481,  1486,  1492,  1499,  1505,  1509,  1513,  1518,
    1524,  1529,  1535,  1539,  1545,  1553,  1561,  1565,  1573,  1577,
    1580,  1583,  1586,  1589,  1592,  1608,  1611,  1614,  1617,  1620,
    1623,  1640,  1652,  1659,  1668,  1677,  1688,  1690,  1693,  1696,
    1698,  1702,  1706,  1711,  1716,  1718,  1720,  1726,  1738,  1752,
    1753,  1761,  1762,  1776,  1777,  1793,  1794,  1801,  1811,  1814,
    1818,  1829,  1831,  1834,  1840,  1848,  1851,  1854,  1858,  1861,
    1865,  1868,  1872,  1882,  1889,  1891,  1893,  1895,  1897,  1899,
    1900,  1903,  1907,  1917,  1922,  1937,  1938,  1942,  1943,  1945,
    1946,  1949,  1950,  1953,  1954,  1957,  1964,  1972,  1979,  1985,
    1989,  1998,  2004,  2009,  2016,  2028,  2040,  2059,  2078,  2091,
    2104,  2117,  2128,  2139,  2150,  2161,  2172,  2177,  2182,  2187,
    2192,  2197,  2202,  2207,  2212,  2217,  2220,  2224,  2231,  2233,
    2235,  2237,  2240,  2246,  2254,  2265,  2267,  2271,  2274,  2277,
    2280,  2284,  2288,  2292,  2296,  2300,  2304,  2308,  2312,  2316,
    2320,  2324,  2328,  2332,  2336,  2342,  2347,  2352,  2357,  2362,
    2367,  2372,  2377,  2382,  2387,  2392,  2399,  2404,  2409,  2414,
    2419,  2424,  2429,  2434,  2441,  2448,  2455,  2460,  2462,  2464,
    2466,  2468,  2470,  2472,  2474,  2476,  2478,  2480,  2482,  2483,
    2490,  2492,  2497,  2504,  2506,  2511,  2516,  2521,  2526,  2531,
    2536,  2541,  2544,  2550,  2556,  2562,  2568,  2572,  2579,  2584,
    2592,  2599,  2606,  2613,  2618,  2625,  2630,  2631,  2640,  2642,
    2647,  2649,  2650,  2654,  2656,  2659,  2662,  2666,  2670,  2682,
    2692,  2700,  2708,  2710,  2714,  2716,  2718,  2721,  2725,  2730,
    2736,  2738,  2740,  2743,  2747,  2751,  2757,  2762,  2765,  2768,
    2771,  2774,  2778,  2782,  2786,  2790,  2796,  2802,  2808,  2814,
    2831,  2848,  2865,  2882,  2884,  2886,  2888,  2892,  2896,  2901,
    2906,  2911,  2918,  2925,  2932,  2939,  2948,  2957,  2962,  2977,
    2982,  2984,  2986,  2990,  2994,  3004,  3012,  3014,  3020,  3024,
    3031,  3033,  3037,  3039,  3041,  3046,  3051,  3056,  3061,  3065,
    3072,  3074,  3079,  3081,  3083,  3085,  3090,  3097,  3102,  3109,
    3114,  3119,  3124,  3133,  3138,  3143,  3148,  3153,  3162,  3171,
    3178,  3183,  3190,  3195,  3197,  3202,  3207,  3208,  3215,  3220,
    3223,  3229,  3231,  3235,  3241,  3247,  3249,  3251
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     238,     0,    -1,   239,    -1,     1,     6,    -1,    -1,   239,
     240,    -1,   242,    -1,   243,    -1,   263,    -1,   112,   227,
     332,   228,     6,    -1,   282,    -1,   283,    -1,   287,    -1,
     288,    -1,   289,    -1,   290,    -1,   294,    -1,   303,    -1,
     304,    -1,   310,    -1,   311,    -1,   293,    -1,   292,    -1,
     291,    -1,   286,    -1,   313,    -1,   214,    -1,   214,   214,
      -1,    42,   227,   332,   228,     6,    -1,    43,   227,   332,
     228,     6,    -1,    42,   227,   332,   228,   241,   332,     6,
      -1,    42,   227,   332,   233,   328,   228,     6,    -1,    43,
     227,   332,   233,   328,   228,     6,    -1,    42,   227,   332,
     233,   328,   228,   241,   332,     6,    -1,     4,   332,   234,
     244,   235,     6,    -1,   151,     4,   229,   314,   230,     6,
      -1,   152,     4,   229,   314,   230,     6,    -1,   153,     4,
     229,   314,   233,   314,   230,     6,    -1,    -1,   244,   247,
      -1,   244,   251,    -1,   244,   254,    -1,   244,   256,    -1,
     244,   257,    -1,   314,    -1,   245,   233,   314,    -1,   314,
      -1,   246,   233,   314,    -1,    -1,    -1,     4,   248,   227,
     245,   228,   249,   234,   246,   235,     6,    -1,   332,    -1,
     250,   233,   332,    -1,    -1,   158,   227,   314,   233,   314,
     233,   314,   228,   252,   234,   250,   235,     6,    -1,   332,
      -1,   253,   233,   332,    -1,    -1,   159,   227,   314,   233,
     314,   233,   314,   233,   314,   228,   255,   234,   253,   235,
       6,    -1,   160,   234,   324,   235,   234,   324,   235,     6,
      -1,   160,   234,   324,   235,   234,   324,   235,   234,   324,
     235,   234,   324,   235,     6,    -1,    -1,   161,   258,   234,
     246,   235,     6,    -1,     7,    -1,   207,    -1,   206,    -1,
     205,    -1,   204,    -1,   225,    -1,   224,    -1,   227,    -1,
     229,    -1,   228,    -1,   230,    -1,    78,   229,   265,   230,
       6,    -1,    79,   229,   270,   230,     6,    -1,   317,     6,
      -1,    84,   261,   333,   233,   314,   262,     6,    -1,    85,
     261,   338,   233,   333,   262,     6,    -1,   338,   259,   325,
       6,    -1,   338,   260,     6,    -1,     4,   229,   230,   259,
     325,     6,    -1,   337,   229,   230,   259,   325,     6,    -1,
       4,   229,   314,   230,   259,   314,     6,    -1,   337,   229,
     314,   230,   259,   314,     6,    -1,     4,   229,   314,   230,
     260,     6,    -1,   337,   229,   314,   230,   260,     6,    -1,
       4,   261,   234,   328,   235,   262,   259,   325,     6,    -1,
     337,   261,   234,   328,   235,   262,   259,   325,     6,    -1,
       4,   227,   228,   259,   325,     6,    -1,   337,   227,   228,
     259,   325,     6,    -1,     4,   227,   314,   228,   259,   314,
       6,    -1,   337,   227,   314,   228,   259,   314,     6,    -1,
       4,   227,   314,   228,   260,     6,    -1,   337,   227,   314,
     228,   260,     6,    -1,   338,     7,   333,     6,    -1,     4,
     229,   230,     7,    44,   261,   262,     6,    -1,   337,   229,
     230,     7,    44,   261,   262,     6,    -1,     4,   229,   230,
       7,    44,   261,   336,   262,     6,    -1,   337,   229,   230,
       7,    44,   261,   336,   262,     6,    -1,     4,   229,   230,
     207,    44,   261,   336,   262,     6,    -1,   337,   229,   230,
     207,    44,   261,   336,   262,     6,    -1,     4,   227,   228,
       7,    44,   261,   262,     6,    -1,   337,   227,   228,     7,
      44,   261,   262,     6,    -1,     4,   227,   228,     7,    44,
     261,   336,   262,     6,    -1,   337,   227,   228,     7,    44,
     261,   336,   262,     6,    -1,     4,   227,   228,   207,    44,
     261,   336,   262,     6,    -1,   337,   227,   228,   207,    44,
     261,   336,   262,     6,    -1,     4,   231,     4,     7,   333,
       6,    -1,     4,   229,   314,   230,   231,     4,     7,   333,
       6,    -1,     4,   231,     4,   259,   314,     6,    -1,     4,
     229,   314,   230,   231,     4,   259,   314,     6,    -1,     4,
     231,     4,   260,     6,    -1,     4,   229,   314,   230,   231,
       4,   260,     6,    -1,     4,   231,   168,   231,     4,     7,
     329,     6,    -1,     4,   229,   314,   230,   231,   168,   231,
       4,     7,   329,     6,    -1,     4,   231,   169,     7,   330,
       6,    -1,     4,   229,   314,   230,   231,   169,     7,   330,
       6,    -1,     4,   179,     7,   314,     6,    -1,   179,   229,
     314,   230,     7,     4,     6,    -1,   179,   229,   314,   230,
     231,     4,     7,   314,     6,    -1,   179,   229,   314,   230,
     231,     4,     7,   333,     6,    -1,   179,   229,   314,   230,
     231,     4,     7,   234,   328,   235,     6,    -1,   179,   229,
     314,   230,   231,     4,     6,    -1,   124,   227,     4,   228,
     231,     4,     7,   314,     6,    -1,   124,   227,     4,   228,
     231,     4,     7,   333,     6,    -1,    -1,   233,    -1,    -1,
     265,   264,   338,    -1,   265,   264,   338,     7,   314,    -1,
      -1,   265,   264,   338,     7,   234,   325,   266,   272,   235,
      -1,    -1,   265,   264,   338,   229,   230,     7,   234,   325,
     267,   272,   235,    -1,    -1,   265,   264,   338,   227,   228,
       7,   234,   325,   268,   272,   235,    -1,   265,   264,   338,
       7,   333,    -1,    -1,   265,   264,   338,     7,   234,   333,
     269,   274,   235,    -1,    -1,   270,   264,   332,    -1,   314,
       7,   333,    -1,   271,   233,   314,     7,   333,    -1,   327,
       7,   338,   227,   228,    -1,    -1,   272,   273,    -1,   233,
       4,   325,    -1,   233,     4,   234,   271,   235,    -1,   233,
       4,   333,    -1,    -1,   274,   275,    -1,   233,     4,   314,
      -1,   233,     4,   333,    -1,   233,   183,   333,    -1,   233,
       4,   234,   336,   235,    -1,   314,    -1,   333,    -1,   333,
     233,   314,    -1,   314,    -1,   333,    -1,   333,   233,   314,
      -1,   314,    -1,   333,    -1,   333,   233,   314,    -1,   314,
      -1,   333,    -1,   333,   233,   314,    -1,    -1,   171,    90,
     234,   314,   235,    -1,    -1,   117,   322,    -1,    86,   227,
     314,   228,     7,   322,     6,    -1,    89,   227,   314,   228,
       7,   325,     6,    -1,    93,   227,   314,   228,     7,   325,
       6,    -1,    87,   227,   314,   228,     7,   325,   281,     6,
      -1,    88,   227,   314,   228,     7,   325,   281,     6,    -1,
     163,   227,   314,   228,     7,   325,     6,    -1,   164,   227,
     314,   228,     7,   325,     6,    -1,   165,   227,   314,   228,
       7,   325,   167,   325,   166,   314,     6,    -1,   121,    89,
     227,   314,   228,     7,   325,     6,    -1,   104,   227,   314,
     228,     7,   325,     6,    -1,    89,     4,   227,   314,   228,
       7,   325,     6,    -1,   117,    92,   227,   314,   228,     7,
     325,     6,    -1,    92,   227,   314,   228,     7,   325,   280,
       6,    -1,   118,    92,   227,   314,   228,     7,   325,   280,
       6,    -1,    12,    13,     6,    -1,    13,    92,   314,     6,
      -1,   107,    92,   227,   314,   228,     7,     5,     5,     5,
       6,    -1,    90,   227,   314,   228,     7,   325,     6,    -1,
      91,   227,   314,   228,     7,   325,     6,    -1,    95,   227,
     314,   228,     7,   325,     6,    -1,    98,   227,   314,   228,
       7,   325,     6,    -1,   102,   227,   314,   228,     7,   325,
       6,    -1,   103,   227,   314,   228,     7,   325,     6,    -1,
      96,   227,   314,   228,     7,   325,     6,    -1,    97,   227,
     314,   228,     7,   325,     6,    -1,   114,   227,   314,   228,
       7,   325,     6,    -1,   139,   227,   314,   228,     7,   325,
       6,    -1,   121,    92,   227,   314,   228,     7,   325,     6,
      -1,   121,    92,   227,   314,   228,     7,   325,     4,   234,
     324,   235,     6,    -1,    92,     4,   227,   314,   228,     7,
     325,     6,    -1,    94,   227,   314,   228,     7,   325,     6,
      -1,   113,   227,   314,   228,     7,   325,     6,    -1,   118,
     113,   227,   314,   228,     7,   325,     6,    -1,   121,    94,
     227,   314,   228,     7,   325,     6,    -1,   120,    86,   227,
     276,   228,   259,   325,     6,    -1,   120,    89,   227,   277,
     228,   259,   325,     6,    -1,   120,    92,   227,   278,   228,
     259,   325,     6,    -1,   120,    94,   227,   279,   228,   259,
     325,     6,    -1,   128,   322,   234,   284,   235,    -1,   127,
     234,   322,   233,   322,   233,   314,   235,   234,   284,   235,
      -1,   129,   322,   234,   284,   235,    -1,   130,   234,   322,
     233,   314,   235,   234,   284,   235,    -1,   130,   234,   322,
     233,   322,   235,   234,   284,   235,    -1,     4,   234,   284,
     235,    -1,   145,    89,   234,   328,   235,    92,   234,   314,
     235,    -1,   142,    89,   227,   314,   228,   234,   328,   235,
       6,    -1,   285,    -1,   283,    -1,    -1,   285,   282,    -1,
     285,    86,   234,   328,   235,     6,    -1,   285,    89,   234,
     328,   235,     6,    -1,   285,    92,   234,   328,   235,     6,
      -1,   285,    94,   234,   328,   235,     6,    -1,   132,   117,
     227,   314,   228,     7,   325,     6,    -1,   132,    86,   227,
     314,   228,     7,   234,   324,   235,     6,    -1,   132,   117,
     227,   314,   228,     7,   234,   322,   233,   322,   233,   328,
     235,     6,    -1,   132,   117,   227,   314,   228,     7,   234,
     322,   233,   322,   233,   322,   233,   328,   235,     6,    -1,
     132,    90,   227,   314,   228,     7,   234,   322,   233,   328,
     235,     6,    -1,   132,    96,   227,   314,   228,     7,   234,
     322,   233,   322,   233,   328,   235,     6,    -1,   132,    97,
     227,   314,   228,     7,   234,   322,   233,   322,   233,   328,
     235,     6,    -1,   132,    99,   227,   314,   228,     7,   234,
     322,   233,   322,   233,   328,   235,     6,    -1,   132,   100,
     227,   314,   228,     7,   234,   322,   233,   322,   233,   328,
     235,     6,    -1,   132,     4,   227,   314,   228,     7,   325,
       6,    -1,   132,     4,   227,   314,   228,     7,     5,     6,
      -1,   132,     4,   234,   314,   235,     6,    -1,   143,   234,
     285,   235,    -1,   143,   179,   229,   314,   230,     6,    -1,
     143,     4,   229,   314,   230,     6,    -1,   143,   338,     6,
      -1,   143,     4,     4,     6,    -1,   168,   329,   234,   285,
     235,    -1,   126,   168,   329,   234,   285,   235,    -1,   201,
     314,   234,   285,   235,    -1,   184,     5,     6,    -1,   185,
       5,     6,    -1,   184,   234,   285,   235,    -1,   126,   184,
     234,   285,   235,    -1,   185,   234,   285,   235,    -1,   126,
     185,   234,   285,   235,    -1,     4,   333,     6,    -1,    71,
     227,   336,   228,     6,    -1,     4,     4,   229,   314,   230,
     332,     6,    -1,     4,     4,     4,   229,   314,   230,     6,
      -1,     4,   314,     6,    -1,   124,   227,     4,   228,   231,
       4,     6,    -1,   162,     4,     6,    -1,   177,     6,    -1,
     178,     6,    -1,    68,     6,    -1,    69,     6,    -1,    62,
       6,    -1,    62,   234,   314,   233,   314,   233,   314,   233,
     314,   233,   314,   233,   314,   235,     6,    -1,    63,     6,
      -1,    64,     6,    -1,    75,     6,    -1,    76,     6,    -1,
     109,     6,    -1,   110,   234,   328,   235,   234,   328,   235,
     234,   324,   235,   234,   314,   233,   314,   235,     6,    -1,
     182,   227,   234,   328,   235,   233,   333,   233,   333,   228,
       6,    -1,   170,   227,   314,     8,   314,   228,    -1,   170,
     227,   314,     8,   314,     8,   314,   228,    -1,   170,     4,
     171,   234,   314,     8,   314,   235,    -1,   170,     4,   171,
     234,   314,     8,   314,     8,   314,   235,    -1,   172,    -1,
     183,     4,    -1,   183,   333,    -1,   180,    -1,   181,   338,
       6,    -1,   181,   333,     6,    -1,   173,   227,   314,   228,
      -1,   174,   227,   314,   228,    -1,   175,    -1,   176,    -1,
     131,   322,   234,   285,   235,    -1,   131,   234,   322,   233,
     322,   233,   314,   235,   234,   285,   235,    -1,   131,   234,
     322,   233,   322,   233,   322,   233,   314,   235,   234,   285,
     235,    -1,    -1,   131,   322,   234,   285,   295,   299,   235,
      -1,    -1,   131,   234,   322,   233,   322,   233,   314,   235,
     234,   285,   296,   299,   235,    -1,    -1,   131,   234,   322,
     233,   322,   233,   322,   233,   314,   235,   234,   285,   297,
     299,   235,    -1,    -1,   131,   234,   285,   298,   299,   235,
      -1,   131,   234,   285,   235,   123,   104,   234,   314,   235,
      -1,   113,   325,    -1,   118,   113,   325,    -1,   115,   234,
     328,   235,   234,   328,   235,   234,   314,   235,    -1,   300,
      -1,   299,   300,    -1,   148,   234,   314,   235,     6,    -1,
     148,   234,   325,   233,   325,   235,     6,    -1,   149,     6,
      -1,   140,     6,    -1,   140,   314,     6,    -1,   154,     6,
      -1,   154,   156,     6,    -1,   155,     6,    -1,   155,   156,
       6,    -1,   150,   227,   314,   228,     7,   325,   123,   314,
       6,    -1,   123,     4,   229,   314,   230,     6,    -1,   134,
      -1,   135,    -1,   136,    -1,   137,    -1,   138,    -1,    -1,
     143,     6,    -1,   143,   314,     6,    -1,   301,   234,   285,
     302,   235,   234,   285,   302,   235,    -1,   101,   227,   332,
     228,    -1,   301,   227,   314,   228,     7,   234,   285,   302,
     235,   234,   285,   302,   235,     6,    -1,    -1,   123,     4,
     314,    -1,    -1,     4,    -1,    -1,     7,   325,    -1,    -1,
       7,   314,    -1,    -1,   133,   325,    -1,   105,   106,   325,
       7,   314,     6,    -1,   119,    89,   326,     7,   314,   305,
       6,    -1,   119,    92,   326,   307,   306,     6,    -1,   119,
      94,   326,   307,     6,    -1,   157,   326,     6,    -1,   146,
      92,   234,   328,   235,     7,   314,     6,    -1,   140,    92,
     326,   308,     6,    -1,   140,    94,   326,     6,    -1,   141,
      92,   326,     7,   314,     6,    -1,   122,    89,   234,   328,
     235,     7,   234,   328,   235,   309,     6,    -1,   122,    92,
     234,   328,   235,     7,   234,   328,   235,   309,     6,    -1,
     122,    89,   234,   328,   235,     7,   234,   328,   235,   127,
     234,   322,   233,   322,   233,   314,   235,     6,    -1,   122,
      92,   234,   328,   235,     7,   234,   328,   235,   127,   234,
     322,   233,   322,   233,   314,   235,     6,    -1,   122,    89,
     234,   328,   235,     7,   234,   328,   235,   128,   322,     6,
      -1,   122,    92,   234,   328,   235,     7,   234,   328,   235,
     128,   322,     6,    -1,   122,    92,   314,   234,   328,   235,
       7,   314,   234,   328,   235,     6,    -1,    86,   234,   328,
     235,   171,    92,   234,   314,   235,     6,    -1,    89,   234,
     328,   235,   171,    92,   234,   314,   235,     6,    -1,    86,
     234,   328,   235,   171,    94,   234,   314,   235,     6,    -1,
      89,   234,   328,   235,   171,    94,   234,   314,   235,     6,
      -1,    92,   234,   328,   235,   171,    94,   234,   314,   235,
       6,    -1,   147,    92,   326,     6,    -1,   147,    89,   326,
       6,    -1,   111,    86,   326,     6,    -1,   111,    89,   326,
       6,    -1,   111,    92,   326,     6,    -1,   125,    89,   325,
       6,    -1,   121,    89,   325,     6,    -1,   121,    92,   325,
       6,    -1,   121,    94,   325,     6,    -1,   144,     6,    -1,
     144,     4,     6,    -1,   144,    86,   234,   328,   235,     6,
      -1,   192,    -1,   193,    -1,   194,    -1,   312,     6,    -1,
     312,   234,   325,   235,     6,    -1,   312,   234,   325,   233,
     325,   235,     6,    -1,   312,   227,   325,   228,   234,   325,
     233,   325,   235,     6,    -1,   315,    -1,   227,   314,   228,
      -1,   218,   314,    -1,   217,   314,    -1,   222,   314,    -1,
     314,   218,   314,    -1,   314,   217,   314,    -1,   314,   219,
     314,    -1,   314,   220,   314,    -1,   314,   221,   314,    -1,
     314,   226,   314,    -1,   314,   213,   314,    -1,   314,   214,
     314,    -1,   314,   216,   314,    -1,   314,   215,   314,    -1,
     314,   212,   314,    -1,   314,   211,   314,    -1,   314,   210,
     314,    -1,   314,   209,   314,    -1,   314,   208,   314,     8,
     314,    -1,    15,   261,   314,   262,    -1,    16,   261,   314,
     262,    -1,    17,   261,   314,   262,    -1,    18,   261,   314,
     262,    -1,    19,   261,   314,   262,    -1,    20,   261,   314,
     262,    -1,    21,   261,   314,   262,    -1,    22,   261,   314,
     262,    -1,    23,   261,   314,   262,    -1,    25,   261,   314,
     262,    -1,    26,   261,   314,   233,   314,   262,    -1,    27,
     261,   314,   262,    -1,    28,   261,   314,   262,    -1,    29,
     261,   314,   262,    -1,    30,   261,   314,   262,    -1,    31,
     261,   314,   262,    -1,    32,   261,   314,   262,    -1,    33,
     261,   314,   262,    -1,    34,   261,   314,   233,   314,   262,
      -1,    35,   261,   314,   233,   314,   262,    -1,    36,   261,
     314,   233,   314,   262,    -1,    24,   261,   314,   262,    -1,
       3,    -1,     9,    -1,    14,    -1,    10,    -1,    11,    -1,
     197,    -1,   198,    -1,   199,    -1,    72,    -1,    73,    -1,
      74,    -1,    -1,    80,   261,   314,   316,   272,   262,    -1,
     317,    -1,   190,   261,   332,   262,    -1,   190,   261,   332,
     233,   314,   262,    -1,   338,    -1,     4,   229,   314,   230,
      -1,     4,   227,   314,   228,    -1,   337,   229,   314,   230,
      -1,   337,   227,   314,   228,    -1,   195,   227,   338,   228,
      -1,   196,   227,   333,   228,    -1,   232,   338,   261,   262,
      -1,   338,   260,    -1,     4,   229,   314,   230,   260,    -1,
       4,   227,   314,   228,   260,    -1,   337,   229,   314,   230,
     260,    -1,   337,   227,   314,   228,   260,    -1,   338,   231,
     320,    -1,     4,   229,   314,   230,   231,     4,    -1,   338,
     231,   320,   260,    -1,     4,   229,   314,   230,   231,     4,
     260,    -1,   186,   227,   332,   233,   314,   228,    -1,    54,
     227,   325,   233,   325,   228,    -1,    55,   261,   332,   233,
     332,   262,    -1,    53,   261,   332,   262,    -1,    56,   261,
     332,   233,   332,   262,    -1,    61,   227,   336,   228,    -1,
      -1,    81,   319,   318,   321,   229,   314,   272,   230,    -1,
     338,    -1,   338,     8,     8,   338,    -1,     4,    -1,    -1,
     234,   338,   235,    -1,   323,    -1,   218,   322,    -1,   217,
     322,    -1,   322,   218,   322,    -1,   322,   217,   322,    -1,
     234,   314,   233,   314,   233,   314,   233,   314,   233,   314,
     235,    -1,   234,   314,   233,   314,   233,   314,   233,   314,
     235,    -1,   234,   314,   233,   314,   233,   314,   235,    -1,
     227,   314,   233,   314,   233,   314,   228,    -1,   325,    -1,
     324,   233,   325,    -1,   314,    -1,   327,    -1,   234,   235,
      -1,   234,   328,   235,    -1,   218,   234,   328,   235,    -1,
     314,   219,   234,   328,   235,    -1,   325,    -1,     5,    -1,
     218,   327,    -1,   314,   219,   327,    -1,   314,     8,   314,
      -1,   314,     8,   314,     8,   314,    -1,    86,   234,   314,
     235,    -1,    86,     5,    -1,    89,     5,    -1,    92,     5,
      -1,    94,     5,    -1,   120,    86,     5,    -1,   120,    89,
       5,    -1,   120,    92,     5,    -1,   120,    94,     5,    -1,
     120,    86,   234,   328,   235,    -1,   120,    89,   234,   328,
     235,    -1,   120,    92,   234,   328,   235,    -1,   120,    94,
     234,   328,   235,    -1,    86,   171,    62,   234,   314,   233,
     314,   233,   314,   233,   314,   233,   314,   233,   314,   235,
      -1,    89,   171,    62,   234,   314,   233,   314,   233,   314,
     233,   314,   233,   314,   233,   314,   235,    -1,    92,   171,
      62,   234,   314,   233,   314,   233,   314,   233,   314,   233,
     314,   233,   314,   235,    -1,    94,   171,    62,   234,   314,
     233,   314,   233,   314,   233,   314,   233,   314,   233,   314,
     235,    -1,   283,    -1,   294,    -1,   303,    -1,     4,   261,
     262,    -1,   337,   261,   262,    -1,    37,   229,   338,   230,
      -1,    37,   229,   327,   230,    -1,    37,   227,   327,   228,
      -1,    37,   229,   234,   328,   235,   230,    -1,    37,   227,
     234,   328,   235,   228,    -1,     4,   261,   234,   328,   235,
     262,    -1,   337,   261,   234,   328,   235,   262,    -1,    38,
     261,   314,   233,   314,   233,   314,   262,    -1,    39,   261,
     314,   233,   314,   233,   314,   262,    -1,    40,   261,   332,
     262,    -1,    41,   261,   314,   233,   314,   233,   314,   233,
     314,   233,   314,   233,   314,   262,    -1,   191,   261,   327,
     262,    -1,   314,    -1,   327,    -1,   328,   233,   314,    -1,
     328,   233,   327,    -1,   234,   314,   233,   314,   233,   314,
     233,   314,   235,    -1,   234,   314,   233,   314,   233,   314,
     235,    -1,   338,    -1,     4,   231,   168,   231,     4,    -1,
     234,   331,   235,    -1,     4,   229,   314,   230,   231,   169,
      -1,   329,    -1,   331,   233,   329,    -1,   333,    -1,   338,
      -1,     4,   229,   314,   230,    -1,   337,   229,   314,   230,
      -1,     4,   227,   314,   228,    -1,   337,   227,   314,   228,
      -1,   338,   231,   320,    -1,     4,   229,   314,   230,   231,
       4,    -1,     5,    -1,   202,   229,   338,   230,    -1,    65,
      -1,   200,    -1,    70,    -1,   188,   227,   332,   228,    -1,
     187,   227,   332,   233,   332,   228,    -1,   189,   261,   332,
     262,    -1,   189,   261,   332,   233,   332,   262,    -1,    46,
     261,   336,   262,    -1,    47,   227,   332,   228,    -1,    48,
     227,   332,   228,    -1,    49,   227,   332,   233,   332,   233,
     332,   228,    -1,    44,   261,   336,   262,    -1,    58,   261,
     332,   262,    -1,    59,   261,   332,   262,    -1,    60,   261,
     332,   262,    -1,    57,   261,   314,   233,   332,   233,   332,
     262,    -1,    52,   261,   332,   233,   314,   233,   314,   262,
      -1,    52,   261,   332,   233,   314,   262,    -1,    45,   261,
     332,   262,    -1,    45,   261,   332,   233,   328,   262,    -1,
      66,   261,   332,   262,    -1,    67,    -1,    51,   261,   332,
     262,    -1,    50,   261,   332,   262,    -1,    -1,    83,   261,
     333,   334,   274,   262,    -1,    82,   261,   335,   262,    -1,
     232,   314,    -1,   338,     8,     8,   232,   314,    -1,   332,
      -1,   336,   233,   332,    -1,     4,   236,   234,   314,   235,
      -1,   337,   236,   234,   314,   235,    -1,     4,    -1,   337,
      -1,   203,   229,   332,   230,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   220,   220,   221,   226,   228,   232,   233,   234,   235,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   263,   267,   274,   279,
     284,   298,   311,   324,   352,   366,   379,   392,   411,   416,
     417,   418,   419,   420,   424,   426,   431,   433,   439,   543,
     438,   561,   568,   579,   578,   596,   603,   614,   613,   630,
     647,   670,   669,   683,   684,   685,   686,   687,   691,   692,
     698,   698,   699,   699,   705,   706,   707,   708,   713,   719,
     781,   798,   827,   856,   861,   866,   871,   876,   883,   893,
     922,   951,   956,   961,   966,   974,   983,   989,   995,  1008,
    1021,  1036,  1053,  1059,  1065,  1078,  1091,  1106,  1123,  1130,
    1139,  1158,  1177,  1187,  1199,  1205,  1213,  1234,  1257,  1268,
    1276,  1298,  1321,  1359,  1380,  1392,  1406,  1406,  1408,  1410,
    1419,  1429,  1428,  1449,  1448,  1467,  1466,  1484,  1494,  1493,
    1507,  1509,  1517,  1523,  1528,  1554,  1555,  1559,  1570,  1585,
    1595,  1596,  1601,  1609,  1618,  1626,  1644,  1648,  1654,  1662,
    1666,  1672,  1680,  1684,  1690,  1698,  1702,  1708,  1717,  1720,
    1727,  1730,  1737,  1758,  1772,  1786,  1821,  1859,  1873,  1887,
    1907,  1916,  1930,  1945,  1959,  1978,  1988,  1994,  2000,  2007,
    2034,  2049,  2069,  2090,  2111,  2132,  2154,  2176,  2197,  2220,
    2229,  2250,  2265,  2279,  2294,  2309,  2318,  2328,  2338,  2348,
    2363,  2374,  2386,  2396,  2406,  2416,  2451,  2462,  2478,  2479,
    2484,  2487,  2491,  2502,  2513,  2524,  2540,  2562,  2588,  2610,
    2633,  2654,  2710,  2734,  2759,  2785,  2898,  2917,  2960,  2974,
    2980,  2995,  3023,  3040,  3049,  3063,  3077,  3083,  3089,  3098,
    3107,  3116,  3130,  3203,  3221,  3238,  3253,  3286,  3298,  3322,
    3326,  3331,  3338,  3343,  3353,  3358,  3364,  3372,  3376,  3380,
    3389,  3453,  3469,  3486,  3503,  3525,  3547,  3582,  3590,  3598,
    3604,  3611,  3618,  3638,  3664,  3676,  3688,  3704,  3720,  3729,
    3728,  3743,  3742,  3757,  3756,  3771,  3770,  3783,  3796,  3810,
    3824,  3843,  3846,  3852,  3864,  3884,  3888,  3892,  3896,  3900,
    3904,  3908,  3912,  3921,  3934,  3935,  3936,  3937,  3938,  3942,
    3943,  3944,  3947,  3965,  3982,  3999,  4002,  4018,  4021,  4038,
    4041,  4047,  4050,  4057,  4060,  4067,  4084,  4125,  4169,  4208,
    4233,  4242,  4272,  4298,  4324,  4356,  4383,  4409,  4435,  4461,
    4487,  4509,  4515,  4521,  4527,  4533,  4539,  4565,  4591,  4608,
    4625,  4642,  4654,  4660,  4666,  4678,  4682,  4692,  4703,  4704,
    4705,  4709,  4715,  4727,  4745,  4773,  4774,  4775,  4776,  4777,
    4778,  4779,  4780,  4781,  4788,  4789,  4790,  4791,  4792,  4793,
    4794,  4795,  4796,  4797,  4798,  4799,  4800,  4801,  4802,  4803,
    4804,  4805,  4806,  4807,  4808,  4809,  4810,  4811,  4812,  4813,
    4814,  4815,  4816,  4817,  4818,  4819,  4820,  4829,  4830,  4831,
    4832,  4833,  4834,  4835,  4836,  4837,  4838,  4839,  4844,  4843,
    4851,  4853,  4858,  4863,  4886,  4904,  4922,  4940,  4958,  4963,
    4969,  4984,  5003,  5023,  5043,  5063,  5093,  5111,  5116,  5126,
    5136,  5141,  5152,  5161,  5166,  5171,  5200,  5199,  5212,  5214,
    5219,  5228,  5230,  5239,  5243,  5247,  5251,  5255,  5262,  5266,
    5270,  5274,  5281,  5286,  5293,  5298,  5302,  5307,  5311,  5319,
    5330,  5334,  5346,  5354,  5362,  5369,  5379,  5402,  5406,  5410,
    5414,  5418,  5422,  5426,  5430,  5434,  5463,  5492,  5521,  5550,
    5567,  5584,  5601,  5618,  5628,  5638,  5648,  5660,  5673,  5685,
    5689,  5693,  5697,  5701,  5719,  5737,  5745,  5753,  5782,  5792,
    5811,  5816,  5820,  5824,  5836,  5840,  5852,  5869,  5879,  5883,
    5898,  5903,  5910,  5914,  5927,  5941,  5955,  5969,  5984,  6006,
    6017,  6021,  6025,  6033,  6039,  6045,  6053,  6061,  6068,  6076,
    6091,  6105,  6119,  6131,  6147,  6156,  6165,  6175,  6186,  6194,
    6202,  6206,  6225,  6232,  6238,  6245,  6253,  6252,  6263,  6277,
    6279,  6285,  6290,  6296,  6305,  6318,  6321,  6325
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tDOUBLE", "tSTRING", "tBIGSTR", "tEND",
  "tAFFECT", "tDOTS", "tPi", "tMPI_Rank", "tMPI_Size", "tEuclidian",
  "tCoordinates", "tTestLevel", "tExp", "tLog", "tLog10", "tSqrt", "tSin",
  "tAsin", "tCos", "tAcos", "tTan", "tRand", "tAtan", "tAtan2", "tSinh",
  "tCosh", "tTanh", "tFabs", "tFloor", "tCeil", "tRound", "tFmod",
  "tModulo", "tHypot", "tList", "tLinSpace", "tLogSpace", "tListFromFile",
  "tCatenary", "tPrintf", "tError", "tStr", "tSprintf", "tStrCat",
  "tStrPrefix", "tStrRelative", "tStrReplace", "tAbsolutePath", "tDirName",
  "tStrSub", "tStrLen", "tFind", "tStrFind", "tStrCmp", "tStrChoice",
  "tUpperCase", "tLowerCase", "tLowerCaseIn", "tTextAttributes",
  "tBoundingBox", "tDraw", "tSetChanged", "tToday", "tFixRelativePath",
  "tCurrentDirectory", "tSyncModel", "tNewModel", "tOnelabAction",
  "tOnelabRun", "tCpu", "tMemory", "tTotalMemory", "tCreateTopology",
  "tCreateTopologyNoHoles", "tDistanceFunction", "tDefineConstant",
  "tUndefineConstant", "tDefineNumber", "tDefineStruct", "tNameStruct",
  "tDefineString", "tSetNumber", "tSetString", "tPoint", "tCircle",
  "tEllipse", "tLine", "tSphere", "tPolarSphere", "tSurface", "tSpline",
  "tVolume", "tBlock", "tCylinder", "tCone", "tTorus", "tEllipsoid",
  "tQuadric", "tShapeFromFile", "tRectangle", "tDisk", "tWire",
  "tCharacteristic", "tLength", "tParametric", "tElliptic", "tRefineMesh",
  "tAdaptMesh", "tRelocateMesh", "tSetFactory", "tThruSections", "tWedge",
  "tFillet", "tChamfer", "tPlane", "tRuled", "tTransfinite", "tPhysical",
  "tCompound", "tPeriodic", "tUsing", "tPlugin", "tDegenerated",
  "tRecursive", "tRotate", "tTranslate", "tSymmetry", "tDilate",
  "tExtrude", "tLevelset", "tAffine", "tBooleanUnion",
  "tBooleanIntersection", "tBooleanDifference", "tBooleanSection",
  "tBooleanFragments", "tThickSolid", "tRecombine", "tSmoother", "tSplit",
  "tDelete", "tCoherence", "tIntersect", "tMeshAlgorithm", "tReverse",
  "tLayers", "tScaleLast", "tHole", "tAlias", "tAliasWithOptions",
  "tCopyOptions", "tQuadTriAddVerts", "tQuadTriNoNewVerts",
  "tRecombLaterals", "tTransfQuadTri", "tText2D", "tText3D",
  "tInterpolationScheme", "tTime", "tCombine", "tBSpline", "tBezier",
  "tNurbs", "tNurbsOrder", "tNurbsKnots", "tColor", "tColorTable", "tFor",
  "tIn", "tEndFor", "tIf", "tElseIf", "tElse", "tEndIf", "tExit", "tAbort",
  "tField", "tReturn", "tCall", "tSlide", "tMacro", "tShow", "tHide",
  "tGetValue", "tGetStringValue", "tGetEnv", "tGetString", "tGetNumber",
  "tUnique", "tHomology", "tCohomology", "tBetti", "tExists",
  "tFileExists", "tGMSH_MAJOR_VERSION", "tGMSH_MINOR_VERSION",
  "tGMSH_PATCH_VERSION", "tGmshExecutableName", "tSetPartition",
  "tNameToString", "tStringToName", "tAFFECTDIVIDE", "tAFFECTTIMES",
  "tAFFECTMINUS", "tAFFECTPLUS", "'?'", "tOR", "tAND", "tNOTEQUAL",
  "tEQUAL", "'<'", "'>'", "tGREATEROREQUAL", "tLESSOREQUAL", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "UNARYPREC", "tMINUSMINUS", "tPLUSPLUS",
  "'^'", "'('", "')'", "'['", "']'", "'.'", "'#'", "','", "'{'", "'}'",
  "'~'", "$accept", "All", "GeoFormatItems", "GeoFormatItem", "SendToFile",
  "Printf", "View", "Views", "ElementCoords", "ElementValues", "Element",
  "@1", "@2", "Text2DValues", "Text2D", "@3", "Text3DValues", "Text3D",
  "@4", "InterpolationMatrix", "Time", "@5", "NumericAffectation",
  "NumericIncrement", "LP", "RP", "Affectation", "Comma",
  "DefineConstants", "@6", "@7", "@8", "@9", "UndefineConstants",
  "Enumeration", "FloatParameterOptions", "FloatParameterOption",
  "CharParameterOptions", "CharParameterOption", "PhysicalId0",
  "PhysicalId1", "PhysicalId2", "PhysicalId3", "InSphereCenter",
  "CircleOptions", "Shape", "Transform", "MultipleShape", "ListOfShapes",
  "LevelSet", "Delete", "Colorify", "SetPartition", "Visibility",
  "Command", "Slide", "Loop", "Extrude", "@10", "@11", "@12", "@13",
  "ExtrudeParameters", "ExtrudeParameter", "BooleanOperator",
  "BooleanOption", "Boolean", "BooleanShape", "TransfiniteType",
  "TransfiniteArrangement", "TransfiniteCorners", "RecombineAngle",
  "PeriodicTransform", "Constraints", "Coherence", "HomologyCommand",
  "Homology", "FExpr", "FExpr_Single", "@14", "DefineStruct", "@15",
  "Struct_FullName", "tSTRING_Member_Float",
  "Option_SaveStructNameInConstant", "VExpr", "VExpr_Single",
  "RecursiveListOfListOfDouble", "ListOfDouble", "ListOfDoubleOrAll",
  "FExpr_Multi", "RecursiveListOfDouble", "ColorExpr", "ListOfColor",
  "RecursiveListOfColor", "StringExprVar", "StringExpr", "@16",
  "NameStruct_Arg", "RecursiveListOfStringExprVar", "StringIndex",
  "String__Index", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,    63,   463,
     464,   465,   466,    60,    62,   467,   468,    43,    45,    42,
      47,    37,    33,   469,   470,   471,    94,    40,    41,    91,
      93,    46,    35,    44,   123,   125,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   237,   238,   238,   239,   239,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   241,   241,   242,   242,
     242,   242,   242,   242,   243,   243,   243,   243,   244,   244,
     244,   244,   244,   244,   245,   245,   246,   246,   248,   249,
     247,   250,   250,   252,   251,   253,   253,   255,   254,   256,
     256,   258,   257,   259,   259,   259,   259,   259,   260,   260,
     261,   261,   262,   262,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   264,   264,   265,   265,
     265,   266,   265,   267,   265,   268,   265,   265,   269,   265,
     270,   270,   271,   271,   271,   272,   272,   273,   273,   273,
     274,   274,   275,   275,   275,   275,   276,   276,   276,   277,
     277,   277,   278,   278,   278,   279,   279,   279,   280,   280,
     281,   281,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     283,   283,   283,   283,   283,   283,   283,   283,   284,   284,
     285,   285,   285,   285,   285,   285,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   287,   287,
     287,   287,   287,   288,   288,   289,   290,   290,   290,   290,
     290,   290,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   292,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   294,   294,   294,   295,
     294,   296,   294,   297,   294,   298,   294,   294,   294,   294,
     294,   299,   299,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   301,   301,   301,   301,   301,   302,
     302,   302,   303,   303,   304,   305,   305,   306,   306,   307,
     307,   308,   308,   309,   309,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   311,   311,   311,   312,   312,
     312,   313,   313,   313,   313,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   316,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   318,   317,   319,   319,
     320,   321,   321,   322,   322,   322,   322,   322,   323,   323,
     323,   323,   324,   324,   325,   325,   325,   325,   325,   325,
     326,   326,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     328,   328,   328,   328,   329,   329,   329,   329,   330,   330,
     331,   331,   332,   332,   332,   332,   332,   332,   332,   332,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   334,   333,   333,   335,
     335,   336,   336,   337,   337,   338,   338,   338
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     5,
       7,     7,     7,     9,     6,     6,     6,     8,     0,     2,
       2,     2,     2,     2,     1,     3,     1,     3,     0,     0,
      10,     1,     3,     0,    13,     1,     3,     0,    15,     8,
      14,     0,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     2,     7,     7,     4,
       3,     6,     6,     7,     7,     6,     6,     9,     9,     6,
       6,     7,     7,     6,     6,     4,     8,     8,     9,     9,
       9,     9,     8,     8,     9,     9,     9,     9,     6,     9,
       6,     9,     5,     8,     8,    11,     6,     9,     5,     7,
       9,     9,    11,     7,     9,     9,     0,     1,     0,     3,
       5,     0,     9,     0,    11,     0,    11,     5,     0,     9,
       0,     3,     3,     5,     5,     0,     2,     3,     5,     3,
       0,     2,     3,     3,     3,     5,     1,     1,     3,     1,
       1,     3,     1,     1,     3,     1,     1,     3,     0,     5,
       0,     2,     7,     7,     7,     8,     8,     7,     7,    11,
       8,     7,     8,     8,     8,     9,     3,     4,    10,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     8,
      12,     8,     7,     7,     8,     8,     8,     8,     8,     8,
       5,    11,     5,     9,     9,     4,     9,     9,     1,     1,
       0,     2,     6,     6,     6,     6,     8,    10,    14,    16,
      12,    14,    14,    14,    14,     8,     8,     6,     4,     6,
       6,     3,     4,     5,     6,     5,     3,     3,     4,     5,
       4,     5,     3,     5,     7,     7,     3,     7,     3,     2,
       2,     2,     2,     2,    15,     2,     2,     2,     2,     2,
      16,    11,     6,     8,     8,    10,     1,     2,     2,     1,
       3,     3,     4,     4,     1,     1,     5,    11,    13,     0,
       7,     0,    13,     0,    15,     0,     6,     9,     2,     3,
      10,     1,     2,     5,     7,     2,     2,     3,     2,     3,
       2,     3,     9,     6,     1,     1,     1,     1,     1,     0,
       2,     3,     9,     4,    14,     0,     3,     0,     1,     0,
       2,     0,     2,     0,     2,     6,     7,     6,     5,     3,
       8,     5,     4,     6,    11,    11,    18,    18,    12,    12,
      12,    10,    10,    10,    10,    10,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     2,     3,     6,     1,     1,
       1,     2,     5,     7,    10,     1,     3,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     6,     4,     4,     4,     4,
       4,     4,     4,     6,     6,     6,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     6,
       1,     4,     6,     1,     4,     4,     4,     4,     4,     4,
       4,     2,     5,     5,     5,     5,     3,     6,     4,     7,
       6,     6,     6,     4,     6,     4,     0,     8,     1,     4,
       1,     0,     3,     1,     2,     2,     3,     3,    11,     9,
       7,     7,     1,     3,     1,     1,     2,     3,     4,     5,
       1,     1,     2,     3,     3,     5,     4,     2,     2,     2,
       2,     3,     3,     3,     3,     5,     5,     5,     5,    16,
      16,    16,    16,     1,     1,     1,     3,     3,     4,     4,
       4,     6,     6,     6,     6,     8,     8,     4,    14,     4,
       1,     1,     3,     3,     9,     7,     1,     5,     3,     6,
       1,     3,     1,     1,     4,     4,     4,     4,     3,     6,
       1,     4,     1,     1,     1,     4,     6,     4,     6,     4,
       4,     4,     8,     4,     4,     4,     4,     8,     8,     6,
       4,     6,     4,     1,     4,     4,     0,     6,     4,     2,
       5,     1,     3,     5,     5,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,     3,     1,   575,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   314,   315,   316,   317,   318,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   276,
       0,     0,   284,   285,     0,     0,     0,   279,     0,     0,
       0,     0,     0,   368,   369,   370,     0,     0,     5,     6,
       7,     8,    10,    11,    24,    12,    13,    14,    15,    23,
      22,    21,    16,     0,    17,    18,    19,    20,     0,    25,
       0,   576,     0,   417,   575,   540,   418,   420,   421,   419,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     542,     0,   563,   544,   425,   426,   427,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   422,   423,
     424,   543,     0,     0,     0,     0,    70,    71,     0,     0,
     220,     0,     0,     0,   375,   430,     0,   532,   576,   433,
       0,     0,     0,     0,   263,     0,   265,   266,   261,   262,
       0,   267,   268,   128,   140,   575,   456,   576,   458,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   269,     0,     0,
       0,     0,     0,   575,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     503,   504,     0,   505,   474,   298,   475,   576,   433,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   463,     0,     0,
     220,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   575,     0,   220,     0,     0,
     365,     0,     0,     0,     0,     0,     0,     0,     0,   481,
       0,   480,     0,     0,     0,     0,     0,   575,     0,     0,
     526,     0,     0,     0,     0,   259,   260,     0,     0,     0,
       0,   277,   278,     0,   220,     0,   220,   575,     0,   576,
       0,     0,   220,   371,     0,     0,    76,    70,    71,     0,
       0,    63,    67,    66,    65,    64,    69,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   378,   377,   379,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   219,     0,
     218,     0,     0,   256,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
     252,     0,     0,     0,   441,   186,     0,   575,     0,   532,
     576,   533,     0,     0,   571,     0,   126,   126,   461,     0,
       0,     0,     0,     0,   520,   521,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,     0,     0,     0,     0,
       0,     0,     0,   487,     0,     0,   488,     0,   489,     0,
     490,     0,     0,     0,     0,     0,     0,     0,     0,   377,
     482,     0,   476,     0,     0,     0,    70,    71,     0,     0,
       0,     0,     0,     0,     0,   299,     0,   329,   329,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,   220,     0,   465,   464,
       0,     0,     0,     0,   220,   220,     0,     0,     0,     0,
     295,     0,   220,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   331,     0,     0,     0,     0,     0,     0,
       0,   241,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   339,   258,     0,     0,     0,     0,     0,   220,
       0,     0,     0,     0,     0,   281,   280,     0,   246,     0,
     247,     0,     0,     0,   220,     0,     0,     0,     0,   319,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   428,     0,     0,     0,   566,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      64,     0,   376,    63,    64,     0,     0,    63,     0,     0,
       0,     0,     0,   215,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,   393,   392,   391,   390,   386,
     387,   389,   388,   381,   380,   382,   383,   384,   385,     0,
       0,     0,   460,   446,   187,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   323,     0,     0,
       0,     0,     0,     0,   358,   359,   360,     0,     0,     0,
      72,    73,     0,   506,     0,     0,     0,     0,     0,   433,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   491,
       0,   492,     0,   493,     0,   494,     0,     0,     0,   376,
     477,   484,     0,   382,   483,     0,     0,     0,   507,   446,
       0,     0,     0,     0,     0,     0,     0,   327,     0,     0,
     156,   157,     0,   159,   160,     0,   162,   163,     0,   165,
     166,     0,   362,     0,   363,     0,   364,     0,     0,     0,
       0,   361,   220,     0,     0,     0,     0,     0,   467,   466,
       0,     0,     0,     0,     0,     0,     0,   289,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     342,     0,     0,   242,     0,     0,   238,     0,     0,     0,
     357,   356,     0,     0,     0,   376,     0,     0,     0,     0,
       0,     0,     0,     0,   282,   283,     0,     0,   248,   250,
       0,   577,     0,     0,     0,     0,     0,     0,    63,    64,
       0,     0,    63,    64,     0,     0,     0,     0,    95,    79,
       0,   435,   434,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   416,   404,     0,   406,   407,   408,   409,   410,
     411,   412,     0,     0,     0,   553,     0,   560,   549,   550,
     551,     0,   565,   564,     0,   453,     0,     0,     0,     0,
     554,   555,   556,   455,   562,   145,   569,   568,     0,   150,
     118,     0,     0,   545,     0,   547,     0,   431,   438,   439,
     541,     0,     0,     0,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,     0,     0,
     440,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     573,     0,     0,    48,     0,     0,     0,    61,     0,    39,
      40,    41,    42,    43,   437,   436,   448,     0,     0,    28,
      26,     0,     0,     0,     0,   538,    29,     0,     0,   253,
     572,    74,   129,    75,   141,     0,     0,   459,     0,     0,
       0,   522,   523,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,   435,   434,     0,
       0,   510,     0,   509,   508,     0,     0,   517,     0,     0,
     486,     0,     0,     0,     0,     0,     0,     0,   519,   478,
       0,     0,     0,   437,   436,     0,     0,     0,     0,     0,
     376,   325,   330,   328,     0,   338,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   376,   376,     0,     0,     0,
       0,     0,   249,   251,     0,     0,     0,   210,   212,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     301,     0,   286,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   332,   341,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   243,     0,     0,     0,     0,     0,   245,     0,   320,
       0,     0,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   574,     0,     0,   443,     0,
     442,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,     0,    93,     0,     0,    81,     0,     0,
       0,     0,    85,   108,   110,     0,     0,   530,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     394,     0,     0,     0,     0,     0,    34,   445,   444,   536,
     534,    27,     0,     0,   537,   535,     0,     0,     0,     0,
       0,   462,   145,     0,     0,     0,     0,     0,   170,   170,
       0,     0,     0,     0,     0,     0,     0,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   335,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   495,   496,   497,   498,     0,   485,   479,     0,
       0,     0,     0,     0,     0,     0,     0,   337,     0,   158,
       0,   161,     0,   164,     0,   167,     0,     0,     0,     0,
       0,     0,     0,   244,     0,     0,     0,     0,     0,     0,
       0,   306,     0,     0,   305,     0,   308,     0,   310,     0,
     296,   302,     0,     0,     0,   237,     0,     0,     0,     0,
       0,     0,     0,     0,   343,     0,   240,   239,   367,     0,
       0,    35,    36,     0,     0,     0,     0,   527,     0,     0,
       0,   272,     0,     0,     0,   220,   321,   220,     0,     0,
       0,     0,    90,     0,    94,     0,     0,    82,     0,    86,
       0,   255,   447,   254,   405,   413,   414,   415,   561,     0,
       0,   559,   451,   452,   454,     0,     0,   429,   146,     0,
       0,   567,   151,   450,   546,   548,   432,     0,     0,     0,
      91,     0,     0,     0,    63,     0,     0,     0,     0,    83,
       0,     0,     0,   528,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   472,     0,
       0,    30,    31,     0,    32,     0,     0,   130,   137,     0,
       0,     0,    77,    78,   172,     0,     0,     0,     0,     0,
       0,   173,     0,     0,   189,   190,     0,     0,     0,     0,
     174,   202,   191,   195,   196,   192,   193,   194,   181,     0,
       0,   447,   513,   512,   511,     0,     0,     0,     0,     0,
       0,     0,   203,   514,   197,     0,     0,   168,     0,     0,
     336,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   257,     0,     0,     0,     0,   220,   220,     0,     0,
     307,   474,     0,     0,   309,   311,     0,     0,   290,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
       0,     0,     0,     0,   177,   178,     0,     0,     0,     0,
     119,   123,     0,     0,   319,   319,     0,   373,     0,     0,
       0,    92,     0,     0,     0,    84,     0,   449,     0,     0,
       0,     0,   570,     0,     0,   102,     0,     0,    96,     0,
       0,     0,     0,   113,     0,     0,   114,     0,   531,   222,
     223,   224,   225,     0,     0,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,    46,   539,     0,     0,   131,
     138,     0,     0,   457,     0,     0,   171,   175,   176,   182,
       0,     0,   201,     0,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,     0,   204,   326,
     206,   207,   208,   209,   180,     0,   199,   205,     0,     0,
       0,     0,     0,     0,   471,     0,   470,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,   235,     0,     0,
       0,     0,     0,     0,     0,     0,   226,     0,     0,   340,
      37,     0,     0,   525,     0,   274,   273,     0,     0,     0,
       0,     0,     0,     0,   103,     0,     0,    97,     0,     0,
       0,   552,   558,   557,     0,   147,   149,     0,   152,   153,
     154,   104,   106,    98,   100,   109,   111,     0,   117,     0,
      87,    49,     0,     0,     0,   473,     0,     0,     0,    33,
       0,   145,   150,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   515,   516,     0,     0,     0,     0,     0,
       0,   185,     0,   333,   333,     0,   124,   125,   220,     0,
     213,   214,   297,     0,   303,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   216,     0,     0,
       0,     0,   120,   121,     0,     0,   322,     0,   105,   107,
      99,   101,    88,     0,   520,   521,     0,     0,   529,     0,
      45,     0,     0,     0,    47,    62,     0,     0,     0,   135,
     133,   351,   353,   352,   354,     0,   355,   188,     0,     0,
       0,     0,     0,     0,   300,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   469,   313,     0,     0,
     291,     0,   227,     0,     0,     0,     0,     0,     0,     0,
     524,   275,     0,     0,   220,   374,     0,   148,     0,     0,
     155,   115,     0,     0,     0,     0,     0,   132,   139,   145,
     145,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   334,   344,     0,     0,   345,     0,   211,     0,   304,
       0,   287,     0,   220,     0,     0,     0,     0,     0,     0,
     179,   122,   271,   319,     0,   142,     0,     0,    53,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   200,     0,   348,     0,   349,   350,   468,     0,     0,
     293,   230,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136,   134,     0,     0,
       0,     0,     0,     0,     0,     0,   312,   292,   288,     0,
       0,     0,     0,     0,     0,     0,     0,   143,   144,    50,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,   232,   233,   234,     0,   228,   324,
       0,    51,     0,     0,   264,     0,   518,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,   270,
       0,     0,     0,     0,     0,     0,   229,    52,    54,     0,
      55,     0,   499,   500,   501,   502,     0,     0,     0,     0,
      60,   346,   347,    56,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   108,  1121,   109,   110,   799,  1728,  1734,
    1109,  1351,  1929,  2120,  1110,  2072,  2149,  1111,  2122,  1112,
    1113,  1355,   408,   504,   212,   863,   111,   819,   516,  1861,
    2000,  1999,  1862,   517,  1923,  1313,  1528,  1315,  1532,   909,
     912,   915,   918,  1598,  1588,   781,   290,   479,   480,   114,
     115,   116,   117,   118,   119,   120,   121,   291,  1243,  2022,
    2089,   945,  1239,  1240,   292,   994,   293,   125,  1426,  1204,
     907,   959,  1959,   126,   127,   128,   129,   294,   214,  1055,
     215,   518,   236,   803,   823,   619,   327,  1567,   361,   362,
     296,   583,   369,  1089,  1338,   514,   509,  1059,   747,   515,
     389,   298
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1672
static const yytype_int16 yypact[] =
{
   11321,    91,    88, 11467, -1672, -1672,  4599,    90,    49,  -206,
     -80,    45,   117,   154,   162,   174,   -26,   199,   207,    13,
      61,    19,  -120,  -120,  -149,    92,    96,    21,   116,   128,
      26,   166,   244,   271,   322,   354,   369,   387,   401,   412,
     422,    78,   275,   383,   229,   578,   472,  6440,   487,   251,
     431,   -57,   494,   140,   579,   -20,   495,   450,  -102,   504,
    -141,  -141,   537,  -126,   447, -1672, -1672, -1672, -1672, -1672,
     561,    23,   529,   711,    15,    64,   718,   719,   408,   819,
     838,   853,  5988,   862,   648,   655,   661,    22,    16, -1672,
     674,   678, -1672, -1672,   917,   929,   736, -1672,  5144,   717,
    6090,    38,    40, -1672, -1672, -1672, 10991,   741, -1672, -1672,
   -1672, -1672, -1672, -1672, -1672, -1672, -1672, -1672, -1672, -1672,
   -1672, -1672, -1672,   190, -1672, -1672, -1672, -1672,    11, -1672,
     970,    -6,   125, -1672,     4, -1672, -1672, -1672, -1672, -1672,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,   752,   768,   772,  -120,  -120,
    -120,  -120,   780,  -120,  -120,  -120,  -120,  -120,  -120,   793,
   -1672,  -120, -1672, -1672, -1672, -1672, -1672,  -120,  -120,  -120,
     976,   824,   825,   826,  -120,  -120,   827,   830, -1672, -1672,
   -1672, -1672,   805, 10991, 10991, 10991,  3255, 10175,    46,    19,
      34,   828,   829,  1072, -1672, -1672,   831,  1035,   292,  -103,
    1052, 10991,  5864,  5864, -1672, 10991, -1672, -1672, -1672, -1672,
    5864, -1672, -1672, -1672, -1672,   833, -1672,   836,  1056, -1672,
   -1672,  6316,    19, 10991,  9880, 10991, 10991,   839, 10991,  9880,
   10991, 10991,   840, 10991,  9880, 10991, 10991, 10991, 10991, 10991,
   10991,  5864, 10991, 10991, 10991,  6666,   846, -1672,  9880,  5988,
    5988,  5988,  5864,   409,   -71,  -120,  -120,  -120,  -120,    27,
      28,    31,    32,  6666,   947,   286,  -120,  6892, 10991,  5269,
   -1672, -1672,   843, -1672,  3842, -1672, -1672,   321,    82, 10991,
    9880,   847,   852,  7118,  5988,  5988,  5988,   854,   855,   856,
     857,  7344,  7570,  7796,   858,  9534,  1076,  6666,    22,   859,
     860,  -141,  -141,  -141, 10991, 10991,  -160, -1672,  -128,  -141,
    9760,  -104,   239,   883,   887,   888,   890,   892,   893,   894,
   10991,  5988,  5988,  5988,   897,     8,   896, -1672,  1080,  1081,
   -1672,   898,   899,   903,  5988,  5988,   902,   909,   910, -1672,
   10991, -1672,  1122,  1134, 10991, 10991, 10991,   -45, 10991,   911,
   -1672,   972, 10991, 10991, 10991, -1672, -1672, 10991,  1144,  1154,
     927, -1672, -1672,  1158, -1672,  1159, -1672,   461,  4640,   466,
    5864, 10991, -1672, -1672,  6666,  6666, -1672, 10400, 10473,   932,
     933,  6316, -1672, -1672, -1672, -1672, -1672, -1672,  6666,  1162,
     940, 10991, 10991, 10991, 10991, 10991, 10991, 10991, 10991, 10991,
   10991, 10991, 10991, 10991, 10991, 10991, 10991, 10991, 10991, 10991,
   10991, 10991, 10991, 10991, 10991,  5864,  5864,  5864,  5864,  5864,
    5864,  5864,  5864,  5864,  5864,  6666,  5864,  5864, 10991,  5864,
    5864,  5864,  5864,  5864, 10991,    51,  6316, 10991,  5864,  5864,
    5864,  5864,  5864,    19,  6316,    19,   944,   944,   944,   178,
   13106,   193, 12715,   129,   949,  1164,  -120,   941, -1672,   943,
   11641, 10991,  9880, -1672, 10991, 10991, 10991, 10991, 10991, 10991,
   10991, 10991, 10991, 10991, 10991, 10991, 10991, 10991, 10991, -1672,
   -1672, 10991, 10991,  1177, -1672, -1672,  1228,   469,   109, -1672,
     477,   951,   185, 10304, -1672,   323,   305,   439,   950,  1175,
     952,   953, 13127,  9880,  3874, -1672,   237, 13148, 13169, 10991,
   13190,   333, 13211, 13232, 10991, 13253,   394, 13274, 13295, 13316,
   13337, 13358, 13379,   960, 13400, 13421, 13442,  1182, 10991,   402,
    1184,  1185,  1189,   968, 10991, 10991,   160,  8022,  8248, 10991,
   10991,  5864, 10991, -1672,  1135, 10991, -1672,  1139, -1672,  1140,
   -1672,  1141,  6666,    41,    42,    43,    44,  9880,  9880,   944,
   -1672, 13463, -1672,   488, 10991,  8474, 10991, 10991,   306,  1177,
   13484,   514, 10991, 10991, 10991, -1672,  1197,  1198,  1198, 10100,
   10100, 10100, 10100, 10991,  1200, 10991,  1202, 10991,  1204,  9880,
    9880, 10049,   983,  1206,   980, -1672, -1672,   -98, -1672, -1672,
   10425, 10529,  -141,  -141,    34,    34,   -93,  9760,  9760, 10991,
    1009,   -91, -1672, 10991, 10991, 10991, 10991, 10991, 10991, 10991,
   10991, 10991, 13505,  1218,  1220,  1221, 10991,  1227, 10991, 10991,
    1812, -1672, -1672,  9880,  9880,  9880,  1229,  1234, 10991, 10991,
   10991, 13526, -1672, -1672, 13547, 13568, 13589,  1059, 10602, -1672,
    1007,  4041, 13610, 13631, 12738, -1672, -1672,  9880, -1672,  2468,
   -1672,  2758, 10991, 10991, -1672, 10991, 10991,  1013, 13652, 11603,
    1017,   530,   197, 13673,   202, 12761, 10991,  9880,  1240,  1241,
   -1672, 10991, 13694, 12784, 12692, 12692, 12692, 12692, 12692, 12692,
   12692, 12692, 12692, 12692, 12692, 10645, 12692, 12692, 12692, 12692,
   12692, 12692, 12692, 10723, 10865, 10952,   375,   515,   375,  1020,
    1021,  1018,   539,   539,  1019,   539,  1023,  1024,  1025, 11127,
     539,   539,   539,   420,   539, 14429, 10991,   539,  1245, -1672,
    1265,  1026,  1027,  1033,   527,   554,  1034,  1038,  1037,  1224,
    1226,  6666,   141,  1230,  1231,  6666,    87,  6316, 10991,  1270,
    1273,    37,   539, -1672,   267,    30,    36,   298,  1051,   -38,
     667, -1672,  4212,   573,  4070,   465,   743,   560,   560,   437,
     437,   437,   437,   341,   341,   944,   944,   944,   944,    12,
   13715, 12807, -1672,   -79, -1672, 10991, 10991,    59,  9880, 10991,
   10991,  1177,  1289,  9880, 10991,  1290,  5864,  1295, -1672,    19,
    1313,  5864,    19,  1091,    19, 10991,  6316,  1317,  9880,  9880,
    1155,  1318,  1320, 13736,  1322,  1160,  1326,  1327, 13757,  1328,
    1179,  1345,  1346,  1348,  1350,  1351,  1355, -1672,  1356,  1357,
    1358, 10991, 13778,  1132, -1672, -1672, -1672,  1361, 13799, 12830,
   -1672, -1672,  9880, -1672,  9880,  3874,  1142,  9880,  1138,   485,
   11574, 11600,   539, 11626,  1137,  4799,  1145,  1146,  1147, -1672,
    9880, -1672,  9880, -1672,  9880, -1672,  9880,   539,   589,  1362,
   -1672,  4142,  9880,   944, -1672, 13820, 12853,  9880, -1672,   435,
    1366,  1148, 13841, 13862, 13883, 10991,  6666,  1374,  1378,  1157,
   14429,  1156,  1163, 14429,  1161,  1165, 14429,  1166,  1167, 14429,
    1168, 13904, -1672, 13925, -1672, 13946, -1672,   594,   595,  9880,
    1169, -1672, -1672,  3062,  3448,  -141, 10991, 10991, -1672, -1672,
    1152,  1153,  9760, 10231,  1267,   492,  -141,  3583, 13967,  4925,
   13988, 14009, 14030, 14051, 14072, 14093, 14114,  1385, 10991,  1392,
   -1672, 10991, 14135, -1672, 12876, 12899, -1672,   599,   600,   603,
   -1672, -1672, 12922, 12945, 11652, -1672,  1395,  1397,  1398,  1178,
   10991,  4100, 10991, 10991, -1672, -1672,    54,   604, -1672, -1672,
    5011, -1672,  1401, 10698,  1176,  1180,  6666,  1404,  1368,  1369,
    6666,   141,  1371,  1372,  6666,   141,  5041,   608, -1672, -1672,
   12968,   -42,  1172, -1672, -1672, -1672, -1672, -1672, -1672, -1672,
   -1672, -1672, -1672, -1672, 10991, -1672, -1672, -1672, -1672, -1672,
   -1672, -1672, 10991, 10991, 10991, -1672,  9880, -1672, -1672, -1672,
   -1672,  5864, -1672, -1672, 10991, -1672,  6666,  5864,  5864,  5864,
   -1672, -1672, -1672, -1672, -1672, -1672, 14429, -1672,  1409, -1672,
   -1672, 10991,  5864, -1672,  5864, -1672, 10991, -1672, -1672, -1672,
   -1672,  -120,  -120,  1412, -1672, 10991,  1416,  -120,  -120,  1417,
      48, 10991,  1418,  1420,  1370, -1672,  1421,  1201,    22,  1426,
   -1672,  9880,  9880,  9880,  9880, 10991,  1225,  1232,  1233,  1235,
   -1672,   539, 10991, -1672,  1236,  1237,  1217, -1672,  1449, -1672,
   -1672, -1672, -1672, -1672,   -37,    71, -1672, 14156, 12991, -1672,
    1242,  5864,   581, 14177, 13014, -1672, -1672,   584, 11678, -1672,
   -1672, -1672,    60, -1672, -1672,  1222, 10991, -1672, 12692,   539,
    -141,  3874, -1672,   753,  6666,  6666,  1451,  6666,   754,  6666,
    6666,  1458,  6666,  1373,  6666,  6666,  6666,  6666,  6666,  6666,
    6666,  6666,  6666,  1529,  1459,  9880, -1672,   435,   265,   616,
     619, -1672,   620, -1672, -1672, 10991, 10991, -1672, 10991, 10991,
   -1672, 10991, 10991, 10991,   623,   627,   630,   634, -1672, -1672,
    6666, 10991,   637,   435,   435,   638,  6666,  9880,  1461,  1463,
    1464,  4482, -1672, -1672,  1481, -1672,   221, 10991,   221, 10991,
     221, 10991,   221, 10991,  1482,  1485,  1486,  1487,  1488,   641,
    1484, 11019, -1672, -1672,   -84, 11704, 11730, -1672, -1672,  5208,
    -154,  1396,  1492, 10771,  1271,  1493,  1277,    33,    56,   -11,
   -1672,   -66, -1672,   492,  1499,  1501,  1502,  1503,  1504,  1506,
    1507,  1508,  1510,  6666, 14429, -1672,  1655,  1274,  1512,  1514,
    1515,  1431,  1517,  1522,  1523, 10991,  6666,  6666,  6666,  1526,
   11756, -1672,  4193,  1128,  1528,  1530,  1300, -1672,  1302, -1672,
    1983,  1303,  6666,  1304, -1672,  -120,  -120,  1532, 10991,  1535,
    -120,  -120,  1537, 10991,  1538, -1672,   539,  1539, -1672,  1542,
   -1672,  1541, 12692, 12692, 12692, 12692,   564,  1315, 10347,  1323,
     539,   539,  1321,   565,  1324,   571, 14198,  1325,   539, 12692,
    1572,  5864, -1672,  2145, -1672,  1572,  5864, -1672,   152,  1319,
    1548,  2304, -1672, -1672, -1672,    22, 10991, -1672,   645, -1672,
     652,   664,   665,   669, 14219, 10991, 10991, 10991, 10991,   221,
   14429,  1330, 10991, 10991,  6666,  1329, -1672, -1672, -1672, -1672,
    1333, -1672,  1552,    74, -1672, -1672,  1553, 10991,  9152,  1337,
    1331, -1672, 14429,  1561,  1562,    81,  1335,  1338,  1454,  1454,
    6666,  1568,  1341,  1359,  1586,  1589,  6666,  1427,  1363,  1594,
    1595,  1596,  1597,  1598,  1599,  1600,  1601,  1602, -1672,  1605,
     673,  1607,   539,  1384,  1383, 11782, 11808, 11834, 11860, 11886,
   11912, 11938, -1672, -1672, -1672, -1672,  1608, 14429, -1672,   539,
    1609,   676,  6666,  6666,  6666,  1621,  1622, -1672,  6666, 14429,
    6666, 14429,  6666, 14429,  6666, 14429,  6666,  6666,  6666,  1393,
    1399,  1627,   415, -1672, 10991, 10991, 10991,  1406,  1407,  1413,
    1414, -1672,  2586,  6666, -1672, 10991, -1672,  1640, -1672,  1642,
   -1672, -1672,  9760,   338,  6214, -1672,  1415,  1419,  1422,  1423,
    1425,  1428,  8700,  1644, -1672,  9880, -1672, -1672, -1672,  1429,
   10991, -1672, -1672, 13037,  1645,  1646,  1498, -1672, 10991, 10991,
   10991, -1672,  1660,   886,  6316, -1672, -1672, -1672,  1434,  1662,
    1572,  5864, -1672,  2605, -1672,  1572,  5864, -1672,  2787, -1672,
     221, -1672,   186, -1672, -1672, -1672, -1672, -1672, -1672,  5864,
   10991, -1672, -1672, -1672, -1672,  5864,  1665, -1672, -1672, 10991,
      24, -1672, -1672, -1672, -1672, -1672, -1672,  1666,   375,   375,
   -1672,  1668,   375,   375,  6316, 10991,  1669,  1667,    37, -1672,
    1671, 13060,    22, -1672,  1672,  1673,  1674,  1675,  1362, 14240,
   14261, 14282, 14303,  6666, 10991, 11964, 11990,   677, -1672, 10991,
    1678, -1672, -1672,  5864, -1672, 12016,  5536, 14429, -1672,  1677,
    1679,   459, -1672, -1672, -1672, 10991, 10991,  -141,  1681,  1682,
    1683, -1672, 10991, 10991, -1672, -1672,  1684,  1604,  1685, 10991,
   -1672, -1672, -1672, -1672, -1672, -1672, -1672, -1672, -1672,  1680,
    1465,   435, -1672, -1672, -1672, 10991, 10991, 10991, 10991, 10991,
   10991, 10991, -1672, -1672, -1672,  1473,  1686,  1427,  1689, 10991,
   -1672,  1691,  1702,  1703,  1704,  1705,   928,  1706,  9880,  9880,
   10991, -1672, 10100,  5298, 14324,  1095,    34,    34, 10991, 10991,
   -1672,   296,  1480, 14345, -1672, -1672,  5474,   -64, -1672,  1708,
    1709,  6666,  -141,  -141,  -141,  -141,  -141,  4861,  1710, -1672,
     712, 10991,  2908,  1711, -1672, -1672,  6666,  4338,   516, 14366,
   -1672, -1672,  9233,  1490, 11603, 11603,  6666, -1672,  1712,   375,
     375, -1672,  1714,   375,   375, -1672,  6666, -1672,  1497, 12692,
     539,  5762, 14429,  9459,  6316, -1672,  1720,  1721, -1672,  1722,
    1724,  1725,  3021, -1672,  1726,  1728, -1672,  1505, -1672, -1672,
   -1672, -1672, -1672,  1464,  1482,  1485,  1486,  1745,   587, 14429,
   10991, 10991,  6666,  1518,   715, 14429, -1672,  1747, 10991, -1672,
   -1672,  1524,  1531, -1672,  6378,  6604,   769, -1672, -1672, -1672,
    6830,  7056, -1672,  1533, -1672,  7282,  1727,  6666, 12692, 12692,
   12042, 12068, 12094, 12120, 12146, 10991, -1672,  1750, -1672, 14429,
   -1672, -1672, -1672, -1672, -1672,  1534, -1672, -1672,   716,   733,
   10125,  3213,  1751,  1536, -1672, 10991, -1672,  1527,  1543,  7508,
   13083,  1757,  6666,  1759,  1545, 10991, -1672, -1672,   738,   -52,
     -43,   -40,   -22,   108,  8926,   146, -1672,  1758,  7734, -1672,
   -1672,  1603, 10991, -1672, 10991, -1672, -1672,  9880,  3292,  1765,
    6316,  1546,  1547,  1549, -1672,  1767,  1770, -1672,  1771,  1774,
    1777, -1672, -1672, -1672,  5269, -1672, -1672,  5864, 14429, -1672,
   -1672, -1672, -1672, -1672, -1672, -1672, -1672,    22, -1672,  1616,
   -1672, -1672, 10991, 12172, 12198, -1672,  6666, 10991,  1780, -1672,
   12224, -1672, -1672,  6666,  6666,  1781,  1782,  1784,  1785, 10991,
    1786,  1787,   742, -1672, -1672, 10991, 10991, 10991, 10991, 10991,
    7960, -1672,  6666,   444,   613,  9880, -1672, -1672,    34,  4501,
   -1672, -1672, -1672,  1788, -1672,  1560,  6666, -1672,  8186,  1790,
    9880,  -141,  -141,  -141,  -141,  -141, -1672, -1672, 10991,  8412,
    8638,   745, -1672, -1672,  1569,  1571, -1672,  1800, -1672, -1672,
   -1672, -1672, -1672,   749,  2431,  1801,   755,  1803, -1672,  1573,
   14429, 10991, 10991,   756, 14429, -1672, 10991,   759,   763, -1672,
   -1672, -1672, -1672, -1672, -1672,  8864, -1672, -1672,  1576, 12250,
   12276, 12302, 12328, 12354, -1672,   767,  1577,  -141,  6666,  1806,
    1581,  -141,  1810,   770,  1582, 10991, -1672, -1672,  1813,  1695,
   11138,  1587, -1672,   771,   153,   198,   212,   236,   247,  3410,
   -1672, -1672,  1814,  1816, -1672, -1672, 10991, -1672,  6316,    19,
   -1672, -1672, 10991, 14387, 12380,    47, 12406, -1672, -1672, -1672,
   -1672, -1672, 10991, 10991, 10991, 10991, 10991, 10991,  1817,  -141,
      99, -1672, -1672,  -141,   104, -1672,  1820, -1672,  9109, -1672,
   10991, -1672,   492, -1672,  1821,  9880,  9880,  9880,  9880,  8926,
   -1672, -1672, -1672, 11603,  3822, -1672,  1606,   775, -1672, 10991,
   -1672,  6666, 10991,   778,   779, 12432, 12458, 12484, 12510, 12536,
   12562, -1672,   250, -1672,   258, -1672, -1672, -1672,  3551,   430,
   11192, -1672,   782,   783,   790,   791,   285,   794,  1593,  6316,
    1611,  1823,  1612, 14408,   795,  9179, -1672, -1672, 10991, 10991,
   10991, 10991, 10991, 10991,  -141,  -141, -1672, -1672, -1672,   492,
    1824,  1826,  1829,  1830,  9880,  1831,  1834, -1672, -1672, -1672,
    5864, -1672,  1613,  1835,  9365, 12692, 12588, 12614, 12640, 12666,
     309,   312,   476, -1672, -1672, -1672, -1672,   802, -1672, -1672,
     807, -1672,  1614,  6666, -1672,  1836, -1672, 10991, 10991, 10991,
   10991, 10991, 10991, -1672,  1837,  5864,  1839,  5864,   814, -1672,
    9408,  9486,  9591,  9634,  9818, 10006, -1672, -1672, -1672,   815,
   -1672,  1843, -1672, -1672, -1672, -1672,  1844,  1845,  5864,  1846,
   -1672, -1672, -1672, -1672, -1672
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1672, -1672, -1672, -1672,   491, -1672, -1672, -1672, -1672,  -137,
   -1672, -1672, -1672, -1672, -1672, -1672, -1672, -1672, -1672, -1672,
   -1672, -1672,  -442,   -59,  4314,  3427, -1672,  1340, -1672, -1672,
   -1672, -1672, -1672, -1672, -1672, -1366, -1672,    -4, -1672, -1672,
   -1672, -1672, -1672,   232,   483,  1874,    -2,  -615,  -288, -1672,
   -1672, -1672, -1672, -1672, -1672, -1672, -1672,  1875, -1672, -1672,
   -1672, -1672, -1239, -1228,  1877, -1671,  1880, -1672, -1672, -1672,
    1286, -1672,     1, -1672, -1672, -1672, -1672,  1850, -1672, -1672,
    1884, -1672, -1672,  -529, -1672,    39, -1672, -1646,  2643,   448,
    2491,  3348,  -316,   340, -1672,   151,    18, -1672, -1672,  -430,
      -3,   478
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -540
static const yytype_int16 yytable[] =
{
     131,   113,   614,   218,  1463,   726,  1581,   728,   410,   940,
     941,  1461,   647,  1821,  1822,  1798,  1103,   393,   237,   345,
     371,   222,   743,   235,   217,   247,   367,   761,  1703,   765,
     252,   768,   563,   566,   247,   302,   568,   570,   477,  1456,
     252,  1087,   630,   383,   297,   385,   879,   881,   883,   885,
     473,   224,  1328,  2040,   302,   235,   303,   622,   623,   650,
     899,  1274,  1458,   622,   623,  1119,   318,  1368,   349,   314,
     350,   237,   315,   409,   624,  1096,   322,   323,   243,   297,
    1572,  1448,   319,   320,   237,   244,   324,  1584,     5,   622,
     623,   322,   323,   325,  1074,   237,   679,     4,   681,   326,
     328,   324,   331,   220,   689,  2053,   625,   239,   330,   240,
    2055,  1872,  1232,   622,   623,   341,   378,   342,   382,   622,
     623,   406,   407,   226,   622,   623,   622,   623,   503,  1233,
     632,  -533,   401,   622,   623,   935,   767,  1234,  1235,  1236,
     942,   221,   946,  1237,  1238,   406,   407,   223,  1074,  1444,
     351,   622,   623,   622,   623,  -538,   557,   216,   558,  1544,
     227,    59,    60,    61,    62,   622,   623,  1462,   228,  1795,
    1104,  1105,  1106,  1107,   622,   623,    73,   622,   623,    76,
     229,  1900,   406,   407,   265,   759,   667,   406,   407,  1457,
    1901,   211,  -536,  1902,   346,   622,   623,  -537,   564,   567,
     763,   230,   569,   571,   998,   231,   237,  1704,   478,  1002,
    1933,  1903,  1459,   232,   474,   475,  1329,  1330,   107,   510,
     510,   397,   107,   398,  1460,   107,   307,   510,  1074,   308,
     399,   411,   309,   412,   310,  1461,  1955,   648,   394,   237,
     211,   297,   233,   372,   211,   395,   297,  1108,   248,   347,
    1000,   297,  1004,   253,   107,   249,   368,   248,   510,   520,
     254,   565,   297,   253,  1092,   297,   297,   297,   297,   510,
    1093,  1088,   384,  1120,   386,   880,   882,   884,   886,   225,
     297,  2041,  1125,   746,   297,  1275,   297,  1369,  1120,  1370,
     234,   402,   403,   404,   405,   406,   407,   297,   622,   623,
     297,   297,   297,   297,   584,  -535,   406,   407,   297,   297,
     297,   406,   407,   589,   297,   237,   622,   623,  1080,   245,
    1075,   622,   623,   246,  1081,   622,   623,   933,   934,   402,
     403,   404,   405,   402,   403,   404,   405,   807,   297,   297,
     297,  1904,   808,   250,   947,   402,   403,   404,   405,   406,
     407,   297,   297,   406,   407,   251,   402,   403,   404,   405,
     617,   618,  2068,   622,   623,   406,   407,   266,   626,   631,
     622,   623,   573,   508,   512,   574,   406,   407,   575,  1905,
     576,   981,   402,   403,   404,   760,  2025,   510,   860,   267,
     861,   297,   297,   255,   862,  2074,   990,   402,   403,   404,
     764,   402,   403,   404,   999,   297,   402,   403,   404,  1003,
     406,   407,   543,   812,   769,   622,   623,   391,   813,   698,
    -539,  1641,  1642,   553,   392,   402,   403,   404,   405,   622,
     623,  2026,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   297,   510,   510,  2027,   510,   510,   510,   510,
     510,   332,   237,   622,   623,   510,   510,   510,   510,   510,
     237,  1232,   237,   268,   622,   623,   633,   622,   623,  2028,
     829,   256,   830,   634,   749,   622,   623,  2138,  1233,   297,
    2029,   132,   757,  2084,   219,   300,  1234,  1235,  1236,   406,
     407,  2085,  1237,  1238,   243,  1937,  1401,   354,   257,   238,
     355,  1091,   622,   623,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   585,   496,   497,  2094,   501,
     297,   502,   498,   301,  1814,   256,   622,   623,   399,   622,
     623,  1791,  1094,   333,   860,   817,   861,   334,   818,   317,
     897,   687,  2131,   335,   336,  2132,   337,   338,   586,   258,
     587,   815,   348,  1232,   297,   297,   816,   399,   510,  1288,
     495,   496,   497,  1293,   339,   370,   829,   498,   835,   297,
    1233,  1956,  1957,  1658,   297,   297,   379,  1958,  1234,  1235,
    1236,   259,   297,   304,  1237,  1238,   305,   727,   306,   729,
     730,   731,   732,   733,   734,   735,   260,   737,   738,  1232,
     740,   741,   742,   860,   744,   861,   297,   297,   816,   751,
     752,   753,   754,   755,   261,  1232,  1233,   911,   914,   917,
     920,   343,   478,   478,  1234,  1235,  1236,   829,   262,   840,
    1237,  1238,  1233,  2043,  2044,   829,   554,   853,   555,   263,
    1234,  1235,  1236,   210,  1221,   211,  1237,  1238,  1053,   264,
     297,   297,   297,   816,   493,   494,   495,   496,   497,   406,
     407,   938,   939,   498,   269,  2087,   618,   270,   311,   820,
     271,   312,   818,   313,   297,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   476,   682,  1743,
     683,   498,  1526,   685,   297,   686,   805,   211,   806,   272,
     511,   511,   399,  1076,   809,   211,   810,  1082,   511,   406,
     407,  2133,   872,   399,   299,  1174,   589,   550,   551,   552,
     521,   829,   316,   890,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   321,   511,
    1960,  1961,   498,   860,  1116,   861,  1958,   829,  1036,   901,
     511,  1815,   596,   597,   598,   860,  1097,   861,   297,  1098,
    1064,  1099,   297,   996,  1428,   997,  1430,   860,  1432,   861,
    1434,   329,  1337,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   860,  2059,   861,  1083,   498,  1066,   340,   643,
     644,   645,   860,   860,   861,   861,   370,   829,  1526,   860,
     344,   861,   656,   657,  1530,   297,   829,   352,  1101,  1363,
     297,   353,  1366,   510,   829,  1851,   237,   829,   510,   237,
    1852,   237,   829,   356,  1189,   297,   297,   829,   829,  1217,
    1218,  1461,   829,   829,  1260,  1261,   829,   829,  1262,  1276,
    1116,   829,   357,  1296,  1139,  1376,  1382,  1377,  1383,   829,
    2112,  1402,   829,   829,  1403,  1404,   829,   358,  1412,   297,
     829,   297,  1413,   829,   297,  1414,   363,   829,   511,  1415,
     829,   829,  1418,  1419,   829,   364,  1441,   297,  1552,   297,
    1553,   297,   365,   297,  1461,   829,  1545,  1554,   366,   297,
    1538,  1539,  1681,  1682,   297,  1542,  1543,   829,   829,  1555,
    1556,   373,   829,   297,  1557,   374,   829,  1563,  1610,   829,
    1732,  1625,  1733,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   375,   511,   511,   297,   511,   511,   511,
     511,   511,  1775,   748,  1776,   376,   511,   511,   511,   511,
     511,   756,  1289,   758,   380,   829,  1294,  1807,  1857,   829,
    1858,  1883,  1298,  1300,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   377,   829,  1130,  1884,   498,
     390,  1732,  1134,  1899,  1224,  1732,   396,  1948,   829,   438,
    1982,  1230,  1986,   457,  1987,  1241,   622,   623,   816,  1732,
    1990,  1995,  1526,   297,  1997,   439,  1530,   297,  1998,   440,
    1732,   297,  2008,   829,   829,  2016,  2024,   445,  1857,   510,
    2071,  1526,  1526,  2076,  2077,   829,   829,  2090,  2091,  1550,
     452,     7,     8,   829,   829,  2092,  2093,   829,  1732,  2095,
    2102,  1787,  1788,   297,   465,   829,   869,  2134,   510,   511,
    2135,   500,  2136,   297,   510,   510,   510,  1732,  2158,  2151,
    2159,   458,   459,   460,   463,  1357,  1358,   464,   505,   510,
     572,   510,   481,   482,   519,   499,   529,   534,  1696,   211,
    1689,  1690,   399,   548,   592,  1693,  1694,   392,   483,   593,
     612,   599,   600,   601,   602,   237,   651,   652,   297,   297,
     297,   297,   609,   615,   616,   774,    25,    26,   775,    28,
      29,   776,    31,   777,    33,    34,    35,    36,  1298,  1300,
     635,    38,    39,    40,   636,   637,    42,   638,   510,   639,
     640,   641,   778,    48,   646,   649,    50,   779,   662,    53,
     780,   658,   653,   654,  1357,  1358,  1490,   655,   659,   660,
     663,   297,   297,   670,   297,   669,   297,   297,    70,   297,
     675,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     676,   677,   297,  1301,   678,   680,   696,   697,   700,   701,
     498,   771,    84,    85,    86,   210,   507,   135,   773,  1375,
     770,   802,   811,   824,   822,   825,   826,   297,   847,   851,
     854,   855,  1307,   297,   297,   856,   857,   874,  1310,  1311,
    1312,   876,   877,   878,   905,   906,   922,  1684,   924,  1685,
     926,   930,   931,  1317,   932,  1318,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   958,   960,   979,   961,   175,
     176,   177,   178,   963,   804,   970,  1718,   180,   181,   182,
     971,   982,   183,   991,   944,   995,  1008,  1009,  1039,  1040,
     297,  1041,  1044,  1058,   188,   189,  1046,  1047,  1048,  1061,
    1062,  1063,  1068,   297,   297,   297,  1069,  1070,  1071,  1546,
    1072,  1060,  1362,  1964,  1077,  1078,  1085,  1086,  1095,   297,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   511,  1126,  1129,  1132,   498,   511,
    1135,  1131,  1137,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   510,   510,  1133,
    1136,   498,   510,   510,  1140,  1144,  1143,  1145,  1785,  1147,
    1786,  1148,   237,  1149,  1150,  1152,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
    1153,   297,  1154,  1155,   498,  1156,  1491,  1157,  1158,   192,
     193,   194,  1159,  1160,  1161,  1162,  1165,  1166,  1173,  1190,
    1171,  1179,   201,  1196,   202,   107,  1334,   297,  1203,  1181,
    1182,  1183,  1197,   297,  1205,  1206,  1578,  1227,  1228,  1207,
    1231,  1208,  1253,  1210,  1209,  1212,   406,   407,  1255,  1211,
    1220,  1213,  1266,  1299,  1267,  1268,  -534,  1926,  1278,  1269,
    1284,  1281,  1285,  1286,  1282,  1290,  1291,  1314,  1322,   297,
     297,   297,  1324,  1327,  1332,   297,  1333,   297,  1335,   297,
    1336,   297,  1339,   297,   297,   297,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     297,  1354,  1345,  1697,   498,  1356,  1361,  1371,  1380,  1346,
    1347,   297,  1348,  1352,  1353,  1386,  1399,  1388,  1422,   297,
    1423,  1424,   297,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,  1427,  1442,  1436,
     511,   498,  1437,  1438,  1439,  1440,  1450,   510,   510,  1454,
    1449,  1657,   510,   510,  1455,  1453,  1464,  1465,  1475,  1466,
    1467,  1468,  1683,  1469,  1470,  1471,   510,  1472,  1476,   511,
    1477,  1478,   510,  1479,  1480,   511,   511,   511,  1481,  1482,
    1487,  1927,  1492,  1494,  1493,  1398,  1495,  1497,  1502,  1499,
     511,  1504,   511,  1507,  1509,  1511,  1512,  1513,  1519,   237,
    1547,  1522,  1697,  1534,  1525,  1548,  1529,  1564,  1571,  1574,
     297,  1580,  1711,  1569,  1570,  1579,   370,  1582,  1583,  1585,
     510,  1587,  1586,   297,  1591,  1592,   507,   135,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,  1594,  1593,  1740,  1595,   498,  1599,  1597,   511,
    1600,  1601,  1602,  1603,  1604,  1605,  1606,  1607,  1608,  1970,
    1609,  1611,  1613,  1614,  1622,  1624,   162,   163,   164,   165,
     166,   167,   168,   169,   170,  1629,  1746,  1638,  1630,   175,
     176,   177,   178,  1639,  1640,   297,   297,   180,   181,   182,
    1646,  1647,   183,  1649,   478,   478,  1654,  1648,  1655,  1661,
    1669,  1674,  1675,  1662,   188,   189,  1663,  1664,   297,  1665,
    1782,  1474,  1666,  1671,   297,  1676,  1680,  1686,  1687,  1701,
    1698,  1714,  1705,   297,  1708,  1713,  1700,  1716,  1719,  1720,
    1721,  1722,  1736,   297,  1741,  1756,  1742,  1747,  1748,  1749,
    1752,  1754,  1766,   297,  1753,  1768,  2033,  1770,   297,  1757,
    1819,  1799,  1800,  1801,  1802,  1803,  1805,  1765,  1771,  1772,
    1773,  1774,  1777,  1792,  1796,  1797,  1806,  1810,  1824,  1836,
    1827,  1839,  1840,  1820,  1737,  1831,  1841,  1842,  1843,   297,
    1844,  1845,  1871,  1847,  1848,  2060,  1849,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,  1850,  1856,  1859,   297,   498,  1881,  1887,  1863,   192,
     193,   194,  1890,  1894,  1906,  1864,  1896,  1869,  1882,  1908,
    1888,  1913,   201,  1918,   202,   107,  1919,  1920,  1891,  1897,
    1921,  1915,  1916,  1922,  1917,  1928,  1935,  1941,  1942,   297,
    1943,  1944,  1946,  1947,  1967,  1968,  1972,  1983,   511,   511,
     860,   297,   861,   511,   511,  1984,  1985,  1992,  1989,  1991,
    2002,  2009,  2012,   370,   297,  2013,  2015,  2017,  2020,  2019,
    2031,  2023,  2032,  2051,     7,     8,  2056,  2061,  2096,  2099,
    2113,   297,  2114,  2070,   510,  2115,  2116,  2118,  1914,  2098,
    2119,  2124,  2139,  2146,   237,  2148,  2100,  2123,  2137,  2160,
    2161,  2162,  2164,   297,  1573,  2037,   213,   821,  1938,  1767,
     297,   297,  1589,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   112,   122,   297,
     123,   498,   297,   124,   908,  1962,   478,   130,  1715,     0,
       0,     0,     0,   297,     0,     0,     0,   297,   774,    25,
      26,   775,    28,    29,   776,    31,   777,    33,    34,    35,
      36,     0,     0,     0,    38,    39,    40,     0,     0,    42,
       0,     0,     0,     0,     0,   778,    48,     0,     0,    50,
     779,     0,    53,   780,     0,     0,     0,     0,     0,     0,
    1974,  1975,  1976,  1977,  1978,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,   297,   388,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,    86,   511,   511,
       0,     0,     0,   511,   511,     0,   237,     0,     0,  1496,
       0,     0,     0,     0,     0,     0,  2010,   511,     0,     0,
    2014,     0,     0,   511,     0,     0,  2035,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   297,   297,   297,   297,   297,     0,     0,     0,
     370,     0,     0,     0,     0,     0,     0,     0,   297,     0,
       0,     0,     0,     0,     0,     0,     0,   966,  2052,     0,
       0,   511,  2054,   466,   467,   468,   470,   472,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2066,     0,
       0,   506,     0,     0,     0,   513,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2097,     0,     0,
       0,   297,     0,   522,   524,   527,   528,   510,   530,   524,
     532,   533,     0,   535,   524,   537,   538,   539,   540,   541,
     542,     0,   544,   545,   546,     0,     0,     0,   524,     0,
     297,     0,     0,  2110,  2111,     0,     0,     0,     0,     0,
       0,     0,   510,     0,   510,     0,     0,   579,   581,   524,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   590,
     524,  1540,     0,     0,     0,   510,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   611,     0,     0,     0,     0,
       0,     0,     0,     0,   620,   621,     0,     0,     0,     0,
     621,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     642,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,     0,     0,     0,     0,   498,
     661,     0,     0,     0,   664,   665,   666,     0,   668,     0,
       0,     0,   671,   672,   673,     0,     0,   674,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   688,     0,     0,     0,     0,     0,   693,   695,     0,
       0,  2121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   702,   703,   704,   705,   706,   707,   708,   709,   710,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,   724,   725,     0,  2147,     0,  2150,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   739,     0,
       0,     0,     0,     0,   745,     0,     0,   750,     0,  2163,
    1549,     0,     0,     0,     0,   511,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   370,     0,     0,     0,     0,
       0,   782,   524,     0,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   798,     0,
       0,   800,   801,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,   579,     0,     0,     0,     0,     0,   833,
       0,     0,     0,     0,   838,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   852,     0,
       0,     0,     0,     0,   858,   859,     0,   865,   865,   870,
     871,     0,   873,     0,     0,   875,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   865,   524,     0,
       0,     0,     0,     0,   891,   893,   895,   896,  1988,   584,
       0,     0,   902,   903,   904,     0,     0,     0,     0,   910,
     913,   916,   919,   921,     0,   923,     0,   925,     0,   524,
     524,     0,     0,     0,     0,     0,     0,  2036,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   466,   467,   943,
       7,     8,     0,   948,   949,   950,   951,   952,   953,   954,
     955,   956,     0,     0,     0,     0,   962,     0,   964,   965,
       0,     0,     0,   524,   524,   524,     0,     0,   972,   973,
     974,     0,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,   524,     0,     0,
     498,     0,   858,   859,     0,   895,   896,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1006,   524,     0,     0,
       0,  1010,     0,     0,   774,    25,    26,   775,    28,    29,
     776,    31,   777,    33,    34,    35,    36,     0,     0,     0,
      38,    39,    40,     0,     0,    42,     0,     0,   511,     0,
       0,   778,    48,     0,     0,    50,   779,     0,    53,   780,
       0,     0,  1650,     0,     0,     0,  1056,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,     0,     0,
       0,  1691,     0,   511,     0,   511,     0,     0,  1084,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,     0,     0,   511,     0,     0,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     828,   496,   497,     0,     0,  1117,  1118,   498,   524,  1123,
    1124,     0,     0,   524,  1128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1138,     0,     0,   893,  1141,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     295,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1163,     0,   988,     0,     0,     0,     0,     0,     0,
       0,     0,   524,     0,   524,     0,     0,   524,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     524,     0,   524,     0,   524,   525,   524,     0,     0,     0,
     525,     0,   524,     0,     0,   525,     0,   524,     0,     0,
       0,     0,     0,     0,     0,  1201,     0,     0,     0,   525,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     0,     0,     0,   580,   524,
     525,     0,     0,     0,     0,     0,  1225,  1226,     0,     0,
       0,   525,  1229,  1695,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,  1254,     0,
       0,  1256,   498,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
    1270,   498,  1272,  1273,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1280,   774,    25,    26,   775,    28,    29,
     776,    31,   777,    33,    34,    35,    36,     0,     0,     0,
      38,    39,    40,     0,     0,    42,     0,     0,     0,     0,
       0,   778,    48,     0,  1302,    50,   779,     0,    53,   780,
       0,     0,  1303,  1304,  1305,     0,   524,     0,     0,     0,
       0,     0,     0,     0,  1308,     0,     0,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   547,     0,
       0,  1316,     0,     0,  1809,     0,  1319,     0,     0,     0,
       0,    84,    85,    86,     0,  1323,   295,     0,     0,     0,
       0,  1331,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   524,   524,   524,   524,  1344,   595,     0,     0,     0,
       0,     0,  1350,     0,   604,   606,   608,     0,     0,     0,
     613,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   525,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1372,     0,     0,     0,
       0,     0,     0,   989,     0,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,   498,   580,   524,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1405,  1406,  1846,  1407,  1408,
       0,  1409,  1410,  1411,     0,     0,     0,   690,   691,     0,
       0,  1417,     0,     0,     0,     0,     0,   524,   866,   868,
       0,   699,     0,     0,     0,     0,     0,  1429,     0,  1431,
       0,  1433,     0,  1435,     0,     0,     0,     0,   887,   525,
       0,     0,     0,     0,     7,     8,   894,     0,     0,     0,
       0,     0,     0,  1452,     0,     0,     0,     0,   736,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     525,   525,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,  1503,     0,
       0,     0,     0,  1508,   525,   525,   525,     0,   774,    25,
      26,   775,    28,    29,   776,    31,   777,    33,    34,    35,
      36,     0,     0,     0,    38,    39,    40,     0,   525,    42,
       0,     0,     0,     0,     0,   778,    48,     0,     0,    50,
     779,     0,    53,   780,     0,     0,  1551,     0,   525,     0,
       0,     0,     0,     0,     0,  1559,  1560,  1561,  1562,     0,
       0,    70,  1565,  1566,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   595,     0,  1575,  1577,  1886,
       0,     0,     0,     0,     0,    84,    85,    86,     0,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,     0,     0,     0,     0,   498,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   133,   387,
       0,     0,     0,     0,   136,   137,   138,     0,     0,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,     0,     0,  1643,  1644,  1645,  1222,  1912,   525,
       0,     0,     0,  1651,   525,  1653,     0,     0,   171,   172,
     173,   174,  1656,     0,     0,     0,   179,     0,     0,   894,
    1142,     0,     0,     0,     0,   524,     0,   184,   185,   186,
    1672,     0,     0,     0,     0,   187,    21,     0,  1677,  1678,
    1679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   525,     0,   525,     0,     0,   525,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1699,   525,     0,   525,     0,   525,     0,   525,     0,  1702,
       0,     0,     0,   525,     0,     0,     0,     0,   525,     0,
       0,     0,     0,     0,     0,  1712,     0,     0,     0,     0,
       0,     0,     0,     0,  1073,     0,     0,     0,  1079,     0,
       0,     0,     0,     0,  1729,     0,  2030,     0,     0,  1735,
     525,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,  1744,  1745,     0,     0,   498,
       0,   191,  1750,  1751,     0,   195,     0,     0,     0,  1755,
     196,   197,   198,   199,   200,     0,     0,     0,   107,     0,
       7,     8,     0,     0,     0,  1758,  1759,  1760,  1761,  1762,
    1763,  1764,   203,   204,     0,     0,     0,   205,     0,  1769,
       0,     0,   360,   469,     0,     0,     0,   209,   524,   524,
    1780,     0,  1781,     0,     0,     0,     0,     0,  1789,  1790,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,   524,   498,     0,
       0,  1808,     0,     0,     0,     0,     0,   525,     0,     0,
       0,     0,  1818,     0,   774,    25,    26,   775,    28,    29,
     776,    31,   777,    33,    34,    35,    36,     0,     0,  1202,
      38,    39,    40,  1838,     0,    42,     0,  2086,     0,     0,
       0,   778,    48,     0,     0,    50,   779,     0,    53,   780,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1853,  1854,   525,   525,   525,   525,     0,    70,  1860,     0,
       0,     0,   526,     0,     0,     7,     8,   531,     0,     0,
       0,     0,   536,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,     0,  1880,   549,     0,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,  1889,   498,     0,     0,  1283,
       0,     0,     0,  1287,     0,  1898,     0,  1292,   591,     0,
       0,     0,     0,     0,   579,     0,   525,     0,     0,     0,
       0,     0,  1909,     0,  1910,     0,     0,   524,     0,   774,
      25,    26,   775,    28,    29,   776,    31,   777,    33,    34,
      35,    36,     0,  1223,  1924,    38,    39,    40,   525,  1309,
      42,     0,     0,     0,     0,     0,   778,    48,     0,     0,
      50,   779,  1930,    53,   780,     0,     0,  1934,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1945,
       0,     0,    70,     0,     0,  1949,  1950,  1951,  1952,  1953,
       0,     0,     0,     0,     0,   524,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,     0,
     524,     0,     0,     0,     0,     0,     0,     0,  1979,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,     0,     0,     0,     0,   498,     0,     0,
       0,  1993,  1994,     0,     0,     0,  1996,  1378,  1379,     0,
    1381,     0,  1384,  1385,     0,  1387,     0,  1389,  1390,  1391,
    1392,  1393,  1394,  1395,  1396,  1397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2018,     0,     0,  1242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2069,
     783,     0,     0,  1416,     0,     0,  2034,     0,     0,  1420,
       0,     0,  1735,     0,     0,     0,     0,     0,     0,     0,
     584,     0,  2045,  2046,  2047,  2048,  2049,  2050,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2058,     0,     0,     0,     0,   524,   524,   524,   524,   524,
       0,     0,   584,     0,     0,     0,     0,     0,     0,  2073,
       0,     0,  2075,     0,     0,     0,  1473,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1484,
    1485,  1486,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1498,   888,     0,  2104,  2105,
    2106,  2107,  2108,  2109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   524,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   927,   928,     0,
       0,     0,     0,     0,     0,     0,   525,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2140,  2141,  2142,
    2143,  2144,  2145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1568,     0,     0,
       0,   967,   968,   969,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   898,     0,     0,     0,     0,
       0,     0,     0,  1590,     0,   987,     0,     0,     0,  1596,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,  1007,     0,     0,   498,   983,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   585,   496,   497,     0,  1626,  1627,  1628,   498,     0,
       0,  1631,     0,  1632,     0,  1633,     0,  1634,  1102,  1635,
    1636,  1637,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   828,   496,   497,  1652,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,  1660,     0,     0,
       0,     0,     7,     8,     0,  1668,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   525,
     525,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1022,  1023,     0,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1191,     0,     0,  1035,  1037,  1038,  1122,     0,   525,  1042,
    1043,  1127,  1045,     0,     0,     0,     0,  1050,  1051,  1052,
       0,  1054,     0,     0,  1057,     0,     0,     0,     0,     0,
       0,  1065,  1067,     0,     0,     0,   774,    25,    26,   775,
      28,    29,   776,    31,   777,    33,    34,    35,    36,  1090,
       0,  1489,    38,    39,    40,     0,  1727,    42,     0,     0,
    1169,     0,  1170,   778,    48,  1172,     0,    50,   779,  1739,
      53,   780,     0,     0,     0,     0,     0,     0,  1184,     0,
    1185,     0,  1186,     0,  1187,     0,     0,     0,     0,    70,
    1192,     0,     0,     0,     0,  1195,     0,     0,     0,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,    84,    85,    86,     0,   498,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1219,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,   580,   498,     0,     0,  1177,
       0,     0,     0,     0,  1568,     0,     0,     0,   525,     0,
       0,     0,     0,     0,  1188,     0,     0,     0,     0,  1811,
       0,     0,     0,     0,     0,  1925,     0,     0,     0,  1823,
       0,     0,     0,     0,     0,  1271,   241,   242,     0,  1830,
       0,     0,     0,     0,  1835,     0,     0,     0,     0,     0,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
       0,     0,     0,     0,     0,  1855,   525,     0,     0,     0,
       0,     0,     0,     0,  1306,     0,     0,     0,     0,     0,
       0,   525,     0,     0,     0,     0,     0,     0,     0,     0,
    1568,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,     0,     0,     0,     0,   498,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,  1895,     0,     0,   498,  1340,
    1341,  1342,  1343,     0,     0,   400,     0,  1100,     0,     0,
       0,     0,     0,     0,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,     0,
       0,     0,   441,   442,   443,   444,     0,   446,   447,   448,
     449,   450,   451,     0,     0,   453,     0,     0,     0,  1568,
       0,   454,   455,   456,     0,     0,  1939,  1940,   461,   462,
       0,     0,     0,  1400,     0,     0,   525,   525,   525,   525,
     525,     0,     0,     0,     0,  1568,     0,     0,  1349,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1969,
       0,     0,     0,     0,     0,  1421,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,  1373,  1374,     0,     0,     0,
       0,  1812,     0,  1813,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   525,     0,   556,     0,   559,
     560,   561,   562,     0,     0,     0,     0,     0,     0,     0,
     577,  2011,   133,   134,   135,  1425,     0,     0,   136,   137,
     138,   588,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,     0,     0,     0,     0,
       0,     0,     0,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,     0,     0,     0,   180,   181,   182,     0,     0,   183,
       0,   184,   185,   186,     0,     0,     0,     0,     0,   187,
      21,   188,   189,     0,  1568,     0,     0,     0,     0,     0,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,  1510,     0,     0,     0,   498,     0,  1514,
    1515,  1516,  1517,  1518,  1965,  1521,  1966,  1523,  1524,     0,
    1527,     0,  1531,     0,     0,  1535,  1536,  1537,     0,     0,
       0,     0,  1541,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1568,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   190,     0,
       0,     0,     0,     0,     0,   191,   192,   193,   194,   195,
     772,     0,     0,     0,   196,   197,   198,   199,   200,   201,
       0,   202,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
       0,   205,     0,  1670,     0,     0,   206,     0,   207,  1612,
     208,   209,     0,   210,     0,   211,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1623,     0,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,   133,   273,   498,     0,     0,     0,
     136,   137,   138,     0,   684,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   274,   275,
     276,   277,   278,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   171,   172,   173,   174,     0,     0,
       0,     0,   179,     0,     0,     0,     0,  1688,     0,     0,
       0,     0,  1692,   184,   185,   186,     0,     0,     0,     0,
       0,   187,    21,     0,     0,     0,     0,   279,     0,     0,
     280,     0,     0,   281,     0,   282,     0,     0,     0,     0,
       0,     0,    37,     0,     0,  1706,  1707,     0,     0,  1709,
    1710,     0,     0,     0,   283,     0,    49,     0,     0,   284,
       0,   285,     0,     0,     0,     0,  1778,  1779,    59,    60,
      61,    62,    63,     0,     0,    65,    66,    67,    68,    69,
       0,     0,     0,    73,     0,     0,    76,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,     7,     8,   498,     0,     0,     0,     0,
       0,     0,     0,     0,  1180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   191,     0,     0,
       0,   195,   286,     0,     0,     0,   196,   197,   198,   199,
     200,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   627,  1804,
       0,     0,     0,   205,     0,     0,     0,     0,   629,     0,
       0,     0,     0,   209,     0,   325,   582,   774,    25,    26,
     775,    28,    29,   776,    31,   777,    33,    34,    35,    36,
       0,     0,     0,    38,    39,    40,  1825,  1826,    42,     0,
    1828,  1829,     0,     0,   778,    48,  1832,  1833,    50,   779,
       0,    53,   780,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,   235,   135,
      70,   498,     0,     0,     0,     0,     0,     0,     0,     0,
    1245,     0,     0,     0,     0,  1911,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,  1873,  1874,     0,   162,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,     0,
       0,   175,   176,   177,   178,     0,     0,     0,     0,   180,
     181,   182,     0,     0,   183,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   188,   189,     0,     0,
       0,     0,     0,  1963,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1277,     0,  1973,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,     0,     0,     0,     0,   498,     0,     0,
       0,     0,   133,   273,     0,     0,  1295,     0,   136,   137,
     138,     0,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   274,   275,   276,   277,
     278,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   171,   172,   173,   174,     0,     0,     0,     0,
     179,   192,   193,   194,     0,     0,     0,     0,     0,     0,
       0,   184,   185,   186,   201,     0,   202,   107,     0,   187,
      21,     0,     0,     0,     0,   279,     0,     0,   280,     0,
       0,   281,     0,   282,     0,     0,     0,     0,     0,     0,
      37,     0,     0,  2062,  2063,  2064,  2065,  2067,     0,     0,
       0,     0,   283,     0,    49,  1320,  1321,   284,     0,   285,
       0,  1325,  1326,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,    65,    66,    67,    68,    69,     0,     0,
       0,    73,     0,     0,    76,     0,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,     0,  2117,  1447,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   191,     0,     0,     0,   195,
     286,     0,     0,     0,   196,   197,   198,   199,   200,     0,
       0,     0,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,   523,     0,     0,
       0,   205,     0,     0,     0,     0,   360,     0,     0,     0,
       0,   209,     0,     0,   582,     0,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,     0,  2126,  1783,     0,     0,     0,     0,     0,   133,
     273,   135,     0,     0,     0,   136,   137,   138,     0,     0,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   274,   275,   276,   277,   278,     0,     0,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,  1500,
    1501,   180,   181,   182,  1505,  1506,   183,     0,   184,   185,
     186,     0,     0,     0,     0,     0,   187,    21,   188,   189,
       0,     0,   279,     0,     0,   280,     0,     0,   281,     0,
     282,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
       0,    49,     0,     0,   284,     0,   285,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      65,    66,    67,    68,    69,     0,     0,     0,    73,     0,
       0,    76,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,     0,     0,  1794,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,   192,   193,   194,   195,   286,     0,     0,
       0,   196,   197,   198,   199,   200,   201,     0,   202,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,   287,     0,     0,     0,   205,     0,
       0,     0,     0,   360,     0,   133,   273,   135,   209,     0,
     289,   136,   137,   138,     0,     0,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   274,
     275,   276,   277,   278,     0,     0,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,     0,     0,     0,   180,   181,   182,
       0,     0,   183,     0,   184,   185,   186,     0,     0,     0,
       0,     0,   187,    21,   188,   189,     0,     0,   279,     0,
       0,   280,     0,     0,   281,     0,   282,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,   507,   135,
       0,     0,     0,     0,     0,   283,     0,    49,     0,     0,
     284,     0,   285,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    65,    66,    67,    68,
      69,     0,     0,     0,    73,     0,     0,    76,   162,   163,
     164,   165,   166,   167,   168,   169,   170,     0,     0,     0,
       0,   175,   176,   177,   178,     0,     0,     0,     0,   180,
     181,   182,     0,     0,   183,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   188,   189,   191,   192,
     193,   194,   195,   286,     0,     0,     0,   196,   197,   198,
     199,   200,   201,     0,   202,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     287,     0,     0,     0,   205,     0,     0,     0,     0,   360,
       0,   133,   273,   359,   209,     0,  1834,   136,   137,   138,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   274,   275,   276,   277,   278,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   171,   172,   173,   174,     0,     0,     0,     0,   179,
       0,   192,   193,   194,     0,     0,     0,     0,     0,     0,
     184,   185,   186,     0,   201,     0,   202,   107,   187,    21,
       0,     0,     0,     0,   279,     0,     0,   280,     0,     0,
     281,     0,   282,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,   381,   135,     0,     0,     0,     0,
       0,   283,     0,    49,     0,     0,   284,     0,   285,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    65,    66,    67,    68,    69,     0,     0,     0,
      73,     0,     0,    76,   162,   163,   164,   165,   166,   167,
     168,   169,   170,     0,     0,     0,     0,   175,   176,   177,
     178,     0,     0,     0,     0,   180,   181,   182,     0,     0,
     183,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   188,   189,   191,     0,     0,     0,   195,   286,
       0,     0,     0,   196,   197,   198,   199,   200,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,   287,     0,     0,     0,
     205,     0,     0,     0,     0,   360,     0,   133,   273,  1659,
     209,     0,   289,   136,   137,   138,     0,     0,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   274,   275,   276,   277,   278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,   179,     0,   192,   193,   194,
       0,     0,     0,     0,     0,     0,   184,   185,   186,     0,
     201,     0,   202,     0,   187,    21,     0,     0,     0,     0,
     279,     0,     0,   280,     0,     0,   281,     0,   282,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,   135,     0,     0,     0,     0,     0,   283,     0,    49,
       0,     0,   284,     0,   285,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    65,    66,
      67,    68,    69,     0,     0,     0,    73,     0,     0,    76,
     162,   163,   164,   165,   166,   167,   168,   169,   170,     0,
       0,     0,     0,   175,   176,   177,   178,     0,     0,     0,
       0,   180,   181,   182,     0,     0,   183,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   188,   189,
     191,     0,     0,     0,   195,   286,     0,     0,     0,   196,
     197,   198,   199,   200,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,   287,     0,     0,     0,   205,     0,     0,     0,
       0,   360,     0,   133,   273,     0,   209,     0,   289,   136,
     137,   138,     0,     0,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   274,   275,   276,
     277,   278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,   172,   173,   174,     0,     0,     0,
       0,   179,     0,   192,   193,   194,     0,     0,     0,     0,
       0,     0,   184,   185,   186,     0,   201,     0,   202,     0,
     187,    21,     0,     0,     0,     0,   279,     0,     0,   280,
       0,     0,   281,     0,   282,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   283,     0,    49,     0,     0,   284,     0,
     285,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    65,    66,    67,    68,    69,     0,
       0,     0,    73,     0,     0,    76,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,     0,     0,  1865,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   191,     0,     0,     0,
     195,   286,     0,     0,     0,   196,   197,   198,   199,   200,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   287,     0,
       0,     0,   205,     0,     0,     0,     0,   288,     0,   133,
     273,     0,   209,     0,   289,   136,   137,   138,     0,     0,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   274,   275,   276,   277,   278,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
     172,   173,   174,     0,     0,     0,     0,   179,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   184,   185,
     186,     0,     0,     0,     0,     0,   187,    21,     0,     0,
       0,     0,   279,     0,     0,   280,     0,     0,   281,     0,
     282,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
       0,    49,     0,     0,   284,     0,   285,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      65,    66,    67,    68,    69,     0,     0,     0,    73,     0,
       0,    76,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,     0,     0,  1866,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,     0,   195,   286,     0,     0,
       0,   196,   197,   198,   199,   200,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,   287,     0,     0,     0,   205,     0,
       0,     0,     0,   360,     0,   133,   273,     0,   209,     0,
     289,   136,   137,   138,     0,     0,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   274,
     275,   276,   277,   278,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   171,   172,   173,   174,     0,
       0,     0,     0,   179,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   184,   185,   186,     0,     0,     0,
       0,     0,   187,    21,     0,     0,     0,     0,   279,     0,
       0,   280,     0,     0,   281,     0,   282,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   283,     0,    49,     0,     0,
     284,     0,   285,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    65,    66,    67,    68,
      69,     0,     0,     0,    73,     0,     0,    76,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,     0,     0,  1867,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   191,     0,
       0,     0,   195,   286,     0,     0,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     523,     0,     0,     0,   205,     0,     0,     0,     0,   360,
       0,   133,   273,     0,   209,     0,   578,   136,   137,   138,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   274,   275,   276,   277,   278,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   171,   172,   173,   174,     0,     0,     0,     0,   179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     184,   185,   186,     0,     0,     0,     0,     0,   187,    21,
       0,     0,     0,     0,   279,     0,     0,   280,     0,     0,
     281,     0,   282,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   283,     0,    49,     0,     0,   284,     0,   285,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    65,    66,    67,    68,    69,     0,     0,     0,
      73,     0,     0,    76,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,     0,
       0,  1868,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,     0,     0,   195,   286,
       0,     0,     0,   196,   197,   198,   199,   200,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,   287,     0,     0,     0,
     205,     0,     0,     0,     0,   594,     0,   133,   273,     0,
     209,     0,   289,   136,   137,   138,     0,     0,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   274,   275,   276,   277,   278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,   179,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   184,   185,   186,     0,
       0,     0,     0,     0,   187,    21,     0,     0,     0,     0,
     279,     0,     0,   280,     0,     0,   281,     0,   282,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   283,     0,    49,
       0,     0,   284,     0,   285,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    65,    66,
      67,    68,    69,     0,     0,     0,    73,     0,     0,    76,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
       0,     0,     0,     0,     0,     0,     0,  1870,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     191,     0,     0,     0,   195,   286,     0,     0,     0,   196,
     197,   198,   199,   200,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,   287,     0,     0,     0,   205,     0,     0,     0,
       0,   603,     0,   133,   273,     0,   209,     0,   289,   136,
     137,   138,     0,     0,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   274,   275,   276,
     277,   278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,   172,   173,   174,     0,     0,     0,
       0,   179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,   185,   186,     0,     0,     0,     0,     0,
     187,    21,     0,     0,     0,     0,   279,     0,     0,   280,
       0,     0,   281,     0,   282,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   283,     0,    49,     0,     0,   284,     0,
     285,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    65,    66,    67,    68,    69,     0,
       0,     0,    73,     0,     0,    76,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,     0,     0,  1892,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   191,     0,     0,     0,
     195,   286,     0,     0,     0,   196,   197,   198,   199,   200,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   287,     0,
       0,     0,   205,     0,     0,     0,     0,   605,     0,   133,
     273,     0,   209,     0,   289,   136,   137,   138,     0,     0,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   274,   275,   276,   277,   278,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
     172,   173,   174,     0,     0,     0,     0,   179,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   184,   185,
     186,     0,     0,     0,     0,     0,   187,    21,     0,     0,
       0,     0,   279,     0,     0,   280,     0,     0,   281,     0,
     282,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
       0,    49,     0,     0,   284,     0,   285,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      65,    66,    67,    68,    69,     0,     0,     0,    73,     0,
       0,    76,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,     0,     0,  1907,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,     0,   195,   286,     0,     0,
       0,   196,   197,   198,   199,   200,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   203,   287,     0,     0,     0,   205,     0,
       0,     0,     0,   607,     0,   133,   273,     0,   209,     0,
     289,   136,   137,   138,     0,     0,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   274,
     275,   276,   277,   278,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   171,   172,   173,   174,     0,
       0,     0,     0,   179,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   184,   185,   186,     0,     0,     0,
       0,     0,   187,    21,     0,     0,     0,     0,   279,     0,
       0,   280,     0,     0,   281,     0,   282,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   283,     0,    49,     0,     0,
     284,     0,   285,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,     0,     0,    65,    66,    67,    68,
      69,     0,     0,     0,    73,     0,     0,    76,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,     0,     0,  1954,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   191,     0,
       0,     0,   195,   286,     0,     0,     0,   196,   197,   198,
     199,   200,     0,     0,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     523,     0,     0,     0,   205,     0,     0,     0,     0,   360,
       0,   133,   273,     0,   209,     0,   864,   136,   137,   138,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   274,   275,   276,   277,   278,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   171,   172,   173,   174,     0,     0,     0,     0,   179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     184,   185,   186,     0,     0,     0,     0,     0,   187,    21,
       0,     0,     0,     0,   279,     0,     0,   280,     0,     0,
     281,     0,   282,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   283,     0,    49,     0,     0,   284,     0,   285,     0,
       0,     0,     0,     0,     0,    59,    60,    61,    62,    63,
       0,     0,    65,    66,    67,    68,    69,     0,     0,     0,
      73,     0,     0,    76,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,     0,
       0,  1971,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,     0,     0,   195,   286,
       0,     0,     0,   196,   197,   198,   199,   200,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,   523,     0,     0,     0,
     205,     0,     0,     0,     0,   360,     0,   133,   273,     0,
     209,     0,   867,   136,   137,   138,     0,     0,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   274,   275,   276,   277,   278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,   179,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   184,   185,   186,     0,
       0,     0,     0,     0,   187,    21,     0,     0,     0,     0,
     279,     0,     0,   280,     0,     0,   281,     0,   282,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   283,     0,    49,
       0,     0,   284,     0,   285,     0,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,     0,     0,    65,    66,
      67,    68,    69,     0,     0,     0,    73,     0,     0,    76,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
       0,     0,     0,     0,     0,     0,     0,  1980,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     191,     0,     0,     0,   195,   286,     0,     0,     0,   196,
     197,   198,   199,   200,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,   523,     0,     0,     0,   205,     0,     0,     0,
       0,   360,     0,   133,   273,     0,   209,     0,   892,   136,
     137,   138,     0,     0,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   274,   275,   276,
     277,   278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,   172,   173,   174,     0,     0,     0,
       0,   179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   184,   185,   186,     0,     0,     0,     0,     0,
     187,    21,     0,     0,     0,     0,   279,     0,     0,   280,
       0,     0,   281,     0,   282,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   283,     0,    49,     0,     0,   284,     0,
     285,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    65,    66,    67,    68,    69,     0,
       0,     0,    73,     0,     0,    76,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,     0,     0,  1981,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   191,     0,     0,     0,
     195,   286,     0,     0,     0,   196,   197,   198,   199,   200,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   287,     0,
       0,     0,   205,     0,     0,     0,     0,   360,     0,   133,
     273,     0,   209,     0,  1667,   136,   137,   138,     0,     0,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   274,   275,   276,   277,   278,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
     172,   173,   174,     0,     0,     0,     0,   179,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   184,   185,
     186,     0,     0,     0,     0,     0,   187,    21,     0,     0,
       0,     0,   279,     0,     0,   280,     0,     0,   281,     0,
     282,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
       0,    49,     0,     0,   284,     0,   285,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,     0,     0,
      65,    66,    67,    68,    69,     0,     0,     0,    73,     0,
       0,    76,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,     0,     0,  2001,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,     0,   195,   286,     0,     0,
       0,   196,   197,   198,   199,   200,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   627,  1804,     0,     0,     0,   205,     0,
       0,     0,     0,   629,     0,   133,   387,   135,   209,     0,
     325,   136,   137,   138,     0,     0,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,     0,
       0,     0,     0,     0,     0,     0,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,     0,     0,     0,   180,   181,   182,
       0,     0,   183,     0,   184,   185,   186,     0,     0,     0,
       0,     0,   187,    21,   188,   189,   133,   387,   135,     0,
       0,     0,   136,   137,   138,     0,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
       0,     0,     0,     0,     0,     0,     0,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,     0,     0,     0,   180,   181,
     182,     0,     0,   183,     0,   184,   185,   186,     0,     0,
       0,     0,     0,   187,    21,   188,   189,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,     0,     0,   498,     0,     0,   191,   192,
     193,   194,   195,     0,  2057,     0,     0,   196,   197,   198,
     199,   200,   201,     0,   202,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     204,     0,     0,     0,   205,     0,     0,     0,     0,   360,
       0,     0,     0,     0,   209,     0,  1576,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,     0,     0,   498,     0,     0,     0,     0,
       0,     0,     0,     0,  2103,     0,     0,     0,     0,   191,
     192,   193,   194,   195,     0,     0,     0,     0,   196,   197,
     198,   199,   200,   201,     0,   202,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   204,     0,     0,     0,   205,     0,     0,     0,     0,
     360,     0,   133,   387,   135,   209,     0,  1817,   136,   137,
     138,     0,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,     0,     0,     0,     0,
       0,     0,     0,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,     0,     0,     0,   180,   181,   182,     0,     0,   183,
       0,   184,   185,   186,     0,     0,     0,   133,   387,   187,
      21,   188,   189,   136,   137,   138,     0,     0,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,     0,     0,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   171,   172,   173,
     174,   498,     0,     0,     0,   179,     0,     0,     0,     0,
    2125,     0,     0,     0,     0,     0,   184,   185,   186,     0,
       0,     0,     0,     0,   187,    21,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,     0,     0,  2152,     0,   191,   192,   193,   194,   195,
       0,     0,     0,     0,   196,   197,   198,   199,   200,   201,
       0,   202,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   203,   204,     0,     0,
       0,   205,     0,     0,     0,     0,   360,     0,     0,     0,
       0,   209,     0,  1837,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,     0,
     191,  2153,     0,     0,   195,     0,     0,     0,     0,   196,
     197,   198,   199,   200,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   203,   204,     0,     0,     0,   205,     0,     0,     0,
       0,   360,     0,   133,   387,     0,   209,     0,   610,   136,
     137,   138,     0,     0,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,     0,     0,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   171,   172,   173,   174,   498,     0,     0,
       0,   179,     0,     0,     0,     0,  2154,     0,     0,     0,
       0,     0,   184,   185,   186,     0,     0,     0,     0,     0,
     187,    21,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,     0,     0,  2155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,   273,     0,     0,     0,     0,   136,
     137,   138,     0,     0,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   274,   275,   276,
     277,   278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,   172,   173,   174,     0,     0,     0,
       0,   179,     0,     0,     0,     0,   191,     0,     0,     0,
     195,     0,   184,   185,   186,   196,   197,   198,   199,   200,
     187,    21,     0,   107,     0,     0,   279,     0,     0,   280,
       0,     0,   281,     0,   282,     0,     0,   627,   628,     0,
       0,    37,   205,     0,     0,     0,     0,   629,     0,     0,
       0,     0,   209,   283,   325,    49,     0,     0,   284,     0,
     285,     0,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,     0,     0,    65,    66,    67,    68,    69,     0,
       0,     0,    73,     0,     0,    76,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,     0,     0,  2156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   191,     0,     0,     0,
     195,   286,     0,     0,     0,   196,   197,   198,   199,   200,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   523,     0,
       0,     0,   205,   133,   387,   135,     0,   360,     0,   136,
     137,   138,   209,     0,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,     0,     0,     0,
       0,     0,     0,     0,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,     0,   180,   181,   182,     0,     0,
     183,     0,   184,   185,   186,     0,     0,     0,   133,   387,
     187,    21,   188,   189,   136,   137,   138,     0,     0,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,     0,     0,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   171,   172,
     173,   174,   498,     0,     0,     0,   179,     0,     0,     0,
       0,  2157,     0,     0,     0,     0,     0,   184,   185,   186,
       0,     0,     0,     0,     0,   187,    21,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,     0,     0,   498,     0,     0,     0,     0,
       0,     0,     0,   929,     0,     0,   191,   192,   193,   194,
     195,     0,     0,     0,     0,   196,   197,   198,   199,   200,
     201,     0,   202,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   204,     0,
       0,     0,   205,     0,     0,     0,     0,   360,     0,     0,
       0,     0,   209,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,     0,     0,     0,     0,     0,     0,  1885,
       0,   191,     0,     0,     0,   195,     0,     0,     0,     0,
     196,   197,   198,   199,   200,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   203,   204,     0,     0,     0,   205,     0,     0,
       0,     0,   360,   133,   387,   471,     0,   209,     0,   136,
     137,   138,     0,     0,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,     0,     0,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   171,   172,   173,   174,   498,     0,   975,
       0,   179,     0,     0,   936,     0,     0,     0,     0,     0,
       0,     0,   184,   185,   186,     0,   133,   387,     0,     0,
     187,    21,   136,   137,   138,     0,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
       0,     0,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   171,   172,   173,   174,
     498,     0,     0,     0,   179,     0,     0,   814,     0,     0,
       0,     0,     0,     0,     0,   184,   185,   186,     0,     0,
       0,     0,     0,   187,    21,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,   498,     0,   860,     0,   861,     0,     0,
    1520,     0,     0,     0,     0,     0,   191,     0,     0,     0,
     195,     0,     0,     0,     0,   196,   197,   198,   199,   200,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   204,     0,
       0,     0,   205,     0,     0,     0,     0,   360,   692,     0,
       0,     0,   209,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,     0,     0,     0,     0,     0,   936,   191,
       0,     0,     0,   195,     0,     0,     0,     0,   196,   197,
     198,   199,   200,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   204,     0,     0,     0,   205,     0,     0,     0,     0,
     360,   133,   387,   694,  1279,   209,     0,   136,   137,   138,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,     0,     0,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   171,   172,   173,   174,   498,     0,     0,     0,   179,
       0,     0,   937,     0,     0,     0,     0,     0,     0,     0,
     184,   185,   186,     0,   133,   387,     0,  1451,   187,    21,
     136,   137,   138,     0,     0,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,     0,     0,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   171,   172,   173,   174,   498,     0,
       0,     0,   179,     0,     0,   980,     0,     0,     0,     0,
       0,     0,     0,   184,   185,   186,     0,     0,     0,     0,
       0,   187,    21,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,     0,     0,     0,     0,     0,  1024,     0,
       0,     0,     0,     0,   191,     0,     0,     0,   195,     0,
       0,     0,     0,   196,   197,   198,   199,   200,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,   204,     0,     0,     0,
     205,     0,     0,     0,     0,   360,     0,     0,     0,     0,
     209,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,     0,     0,     0,     0,   498,
       0,     0,     0,     0,     0,     0,  1032,   191,     0,     0,
       0,   195,     0,     0,     0,     0,   196,   197,   198,   199,
     200,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   204,
       0,     0,     0,   205,   133,   387,     0,     0,   360,     0,
     136,   137,   138,   209,     0,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,     0,     0,
       0,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   171,   172,   173,   174,     0,     0,
       0,     0,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   184,   185,   186,     0,     0,     0,     0,
       0,   187,    21,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,     0,     0,     0,     0,     0,  1033,     0,
       0,     0,     0,     0,     0,   774,    25,    26,   775,    28,
      29,   776,    31,   777,    33,    34,    35,    36,     0,     0,
       0,    38,    39,    40,     0,     0,    42,     0,     0,     0,
       0,     0,   778,    48,     0,     0,    50,   779,     0,    53,
     780,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     0,     0,     0,     0,     0,     0,    70,     0,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,   191,   498,     0,
       0,   195,    84,    85,    86,  1034,   196,   197,   198,   199,
     200,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,   203,   204,
       0,     0,     0,   205,     0,     0,     0,     0,   360,     0,
       0,     0,     0,   209,   774,    25,    26,   775,    28,    29,
     776,    31,   777,    33,    34,    35,    36,     0,     0,     0,
      38,    39,    40,     0,     0,    42,     0,     0,     0,     0,
       0,   778,    48,     0,  1443,    50,   779,     0,    53,   780,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,   774,    25,
      26,   775,    28,    29,   776,    31,   777,    33,    34,    35,
      36,     0,     0,     0,    38,    39,    40,     0,     0,    42,
       0,    84,    85,    86,     0,   778,    48,     0,     0,    50,
     779,     0,    53,   780,     0,     0,     0,     0,     0,     0,
       0,    -4,     1,     0,     0,    -4,     0,     0,     0,     0,
       0,    70,     0,    -4,    -4,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,   498,     0,    84,    85,    86,     0,     0,
    1049,     0,     0,    -4,    -4,     0,     0,     0,     0,     0,
       0,     0,     0,  2021,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    -4,    -4,    -4,     0,     0,     0,    -4,
      -4,     0,    -4,     0,     0,     0,    -4,    -4,     0,    -4,
      -4,     0,    -4,     0,     0,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
       0,     0,    -4,    -4,    -4,    -4,    -4,  2088,    -4,     0,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,     0,    -4,    -4,
      -4,    -4,    -4,    -4,     0,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,     0,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,     0,
       0,     6,    -4,    -4,    -4,     0,     0,     0,    -4,     7,
       8,     0,     0,    -4,    -4,    -4,    -4,     0,     0,    -4,
       0,    -4,     0,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,     0,     0,     9,
      10,     0,     0,    -4,    -4,    -4,     0,     0,     0,     0,
       0,     0,    -4,     0,    -4,     0,     0,     0,     0,    11,
      12,    13,     0,     0,     0,    14,    15,     0,    16,     0,
       0,     0,    17,    18,     0,    19,    20,     0,    21,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,     0,    37,    38,
      39,    40,    41,     0,    42,     0,    43,    44,    45,    46,
      47,    48,    49,     0,    50,    51,    52,    53,    54,    55,
       0,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     7,     8,     0,    79,    80,
      81,     0,     0,     0,    82,     0,     0,     0,     0,    83,
      84,    85,    86,     0,     0,    87,     0,    88,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     7,     8,     0,     0,     0,     0,   103,
     104,   105,     0,     0,     0,     0,     0,     0,   106,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   774,
      25,    26,   775,    28,    29,   776,    31,   777,    33,    34,
      35,    36,     0,     0,     0,    38,    39,    40,     0,     0,
      42,     0,     0,     0,     0,     0,   778,    48,     0,     0,
      50,   779,     0,    53,   780,     0,     0,   774,    25,    26,
     775,    28,    29,   776,    31,   777,    33,    34,    35,    36,
       0,     0,    70,    38,    39,    40,   993,     0,    42,     0,
       0,     0,     0,     0,   778,    48,     0,     0,    50,   779,
       0,    53,   780,     0,     0,     0,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,     0,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,    84,    85,    86,  1175,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,  1176,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,  1178,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
       0,     0,     0,     0,     0,  1265,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,  1367,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,  1445,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,  1446,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,  1488,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
       0,     0,     0,     0,     0,  1615,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,  1616,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,  1617,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,  1618,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,  1619,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
       0,     0,     0,     0,     0,  1620,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,  1621,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,  1730,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,  1731,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,  1738,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
       0,     0,     0,     0,     0,  1875,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,  1876,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,  1877,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,  1878,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,  1879,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
       0,     0,     0,     0,     0,  1931,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,  1932,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,  1936,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,  2003,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,  2004,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
       0,     0,     0,     0,     0,  2005,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,  2006,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,  2007,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,  2039,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,  2042,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
       0,     0,     0,     0,     0,  2078,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,  2079,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,  2080,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,  2081,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,  2082,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
       0,     0,     0,     0,     0,  2083,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,  2127,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,     0,     0,     0,  2128,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
       0,     0,     0,  2129,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,  2130,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
     860,     0,   861,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,     0,     0,   766,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,   986,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,     0,     0,     0,     0,   498,     0,     0,
       0,  1005,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,  1012,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,   498,     0,     0,     0,  1115,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
    1168,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,     0,     0,     0,     0,   498,
       0,     0,     0,  1194,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,     0,     0,  1258,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,     0,     0,   498,     0,     0,     0,  1259,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
       0,     0,  1263,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,     0,     0,  1264,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,     0,     0,  1297,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,     0,     0,     0,     0,   498,     0,     0,
       0,  1360,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,     0,     0,  1365,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,   498,     0,     0,     0,  1673,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,     0,     0,
    1717,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,     0,     0,     0,     0,   498,
       0,     0,     0,  1893,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,   762,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,   498,     0,   827,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,   831,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,     0,     0,   498,     0,   832,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,   834,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,     0,     0,     0,     0,   498,     0,   836,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
     837,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,     0,     0,     0,     0,   498,
       0,   839,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,   841,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,   842,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,   843,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,   498,     0,   844,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,   845,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,     0,     0,   498,     0,   846,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,   848,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,     0,     0,     0,     0,   498,     0,   849,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
     850,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,     0,     0,     0,     0,   498,
       0,   889,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,   900,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,   957,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,   975,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,   498,     0,   976,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,   977,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,     0,     0,   498,     0,   978,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,   984,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,     0,     0,     0,     0,   498,     0,   985,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
     992,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,     0,     0,     0,     0,   498,
       0,  1001,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,  1011,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,  1114,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,  1146,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,   498,     0,  1151,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,  1164,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,     0,     0,   498,     0,  1167,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,  1193,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,     0,     0,     0,     0,   498,     0,  1198,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
    1199,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,     0,     0,     0,     0,   498,
       0,  1200,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,  1214,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,  1215,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,  1216,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,   498,     0,  1244,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,  1246,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,     0,     0,   498,     0,  1247,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,  1248,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,     0,     0,     0,     0,   498,     0,  1249,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
    1250,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,     0,     0,     0,     0,   498,
       0,  1251,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,  1252,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,  1257,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,  1359,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,   498,     0,  1364,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,  1533,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,     0,     0,   498,     0,  1558,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,     0,     0,     0,     0,   498,     0,  1723,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,     0,     0,     0,     0,   498,     0,  1724,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,     0,     0,     0,     0,   498,     0,
    1725,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,     0,     0,     0,     0,   498,
       0,  1726,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,     0,     0,     0,
     498,     0,  1784,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,     0,     0,     0,
       0,   498,     0,  1793,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   498,     0,  1816,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,   498,     0,  2038,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
       0,     0,     0,     0,   498,     0,  2101,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,     0,     0,     0,     0,   498
};

static const yytype_int16 yycheck[] =
{
       3,     3,   318,     6,  1243,   435,  1372,   437,     4,   624,
     625,  1239,     4,  1684,  1685,  1661,     4,     6,    21,     4,
       4,   227,   452,     4,     6,     4,     4,   469,     4,   471,
       4,   473,     5,     5,     4,    92,     5,     5,     4,     6,
       4,     4,   330,     5,    47,     5,     5,     5,     5,     5,
       4,     6,     4,     6,    92,     4,   113,   217,   218,   347,
     589,     7,     6,   217,   218,     6,   168,     7,     4,    89,
       6,    74,    92,   132,   234,   113,   217,   218,   227,    82,
       6,   235,   184,   185,    87,   234,   227,     6,     0,   217,
     218,   217,   218,   234,     7,    98,   384,     6,   386,    60,
      61,   227,    63,    13,   392,     6,   234,   227,   234,   229,
       6,  1757,   123,   217,   218,    92,    98,    94,   100,   217,
     218,   224,   225,     6,   217,   218,   217,   218,   231,   140,
     234,   234,     7,   217,   218,   233,     7,   148,   149,   150,
     233,    92,   233,   154,   155,   224,   225,   227,     7,   233,
      86,   217,   218,   217,   218,   234,   227,     6,   229,     7,
       6,   127,   128,   129,   130,   217,   218,   233,     6,   233,
     158,   159,   160,   161,   217,   218,   142,   217,   218,   145,
       6,   233,   224,   225,   106,     7,   231,   224,   225,   156,
     233,   236,   234,   233,   179,   217,   218,   234,   171,   171,
       7,   227,   171,   171,     7,     6,   209,   183,   210,     7,
    1856,   233,   156,     6,   168,   169,   168,   169,   203,   222,
     223,   227,   203,   229,   235,   203,    86,   230,     7,    89,
     236,   227,    92,   229,    94,  1463,  1882,   229,   227,   242,
     236,   244,   229,   227,   236,   234,   249,   235,   227,   234,
     692,   254,   694,   227,   203,   234,   234,   227,   261,   241,
     234,   234,   265,   227,   234,   268,   269,   270,   271,   272,
     234,   234,   234,   214,   234,   234,   234,   234,   234,   234,
     283,   234,   811,   232,   287,   231,   289,   227,   214,   229,
     229,   204,   205,   206,   207,   224,   225,   300,   217,   218,
     303,   304,   305,   306,     8,   234,   224,   225,   311,   312,
     313,   224,   225,   231,   317,   318,   217,   218,   231,   227,
     762,   217,   218,   227,   766,   217,   218,   615,   616,   204,
     205,   206,   207,   204,   205,   206,   207,   228,   341,   342,
     343,   233,   233,   227,   632,   204,   205,   206,   207,   224,
     225,   354,   355,   224,   225,   227,   204,   205,   206,   207,
     321,   322,  2033,   217,   218,   224,   225,    92,   329,   330,
     217,   218,    86,   222,   223,    89,   224,   225,    92,   233,
      94,   669,   204,   205,   206,   207,   233,   390,   228,     6,
     230,   394,   395,   227,   234,  2041,   684,   204,   205,   206,
     207,   204,   205,   206,   207,   408,   204,   205,   206,   207,
     224,   225,   261,   228,   473,   217,   218,   227,   233,   401,
     234,     6,     7,   272,   234,   204,   205,   206,   207,   217,
     218,   233,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   233,   449,   450,   451,   452,
     453,     4,   455,   217,   218,   458,   459,   460,   461,   462,
     463,   123,   465,   234,   217,   218,   227,   217,   218,   233,
     233,   227,   235,   234,   456,   217,   218,  2123,   140,   482,
     233,     3,   464,   233,     6,   234,   148,   149,   150,   224,
     225,   233,   154,   155,   227,  1861,   231,    89,   227,    21,
      92,   234,   217,   218,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   233,   227,
     523,   229,   226,    92,     8,   227,   217,   218,   236,   217,
     218,   235,   234,    86,   228,   230,   230,    90,   233,    89,
     234,   390,   233,    96,    97,   233,    99,   100,   227,   227,
     229,   228,    74,   123,   557,   558,   233,   236,   561,  1001,
     219,   220,   221,  1005,   117,    87,   233,   226,   235,   572,
     140,   127,   128,   235,   577,   578,    98,   133,   148,   149,
     150,   227,   585,    89,   154,   155,    92,   436,    94,   438,
     439,   440,   441,   442,   443,   444,   227,   446,   447,   123,
     449,   450,   451,   228,   453,   230,   609,   610,   233,   458,
     459,   460,   461,   462,   227,   123,   140,   599,   600,   601,
     602,    92,   624,   625,   148,   149,   150,   233,   227,   235,
     154,   155,   140,  1999,  2000,   233,   227,   235,   229,   227,
     148,   149,   150,   234,   932,   236,   154,   155,   228,   227,
     653,   654,   655,   233,   217,   218,   219,   220,   221,   224,
     225,   622,   623,   226,    86,   235,   627,    89,    89,   230,
      92,    92,   233,    94,   677,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   209,   227,   230,
     229,   226,   233,   227,   697,   229,   227,   236,   229,   227,
     222,   223,   236,   762,   227,   236,   229,   766,   230,   224,
     225,   235,   561,   236,   227,   230,   231,   269,   270,   271,
     242,   233,   227,   235,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   234,   261,
     127,   128,   226,   228,   803,   230,   133,   233,   233,   235,
     272,   235,   304,   305,   306,   228,    89,   230,   761,    92,
     233,    94,   765,   233,  1206,   235,  1208,   228,  1210,   230,
    1212,   234,  1088,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   228,  2022,   230,   767,   226,   233,   227,   341,
     342,   343,   228,   228,   230,   230,   318,   233,   233,   228,
      89,   230,   354,   355,   233,   808,   233,    89,   235,   228,
     813,    92,   228,   816,   233,   228,   819,   233,   821,   822,
     233,   824,   233,     4,   235,   828,   829,   233,   233,   235,
     235,  2059,   233,   233,   235,   235,   233,   233,   235,   235,
     899,   233,     4,   235,   826,    92,    92,    94,    94,   233,
    2089,   235,   233,   233,   235,   235,   233,     4,   235,   862,
     233,   864,   235,   233,   867,   235,     4,   233,   390,   235,
     233,   233,   235,   235,   233,   227,   235,   880,   233,   882,
     235,   884,   227,   886,  2112,   233,  1328,   235,   227,   892,
    1320,  1321,     6,     7,   897,  1325,  1326,   233,   233,   235,
     235,   227,   233,   906,   235,   227,   233,  1349,   235,   233,
     233,   235,   235,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,     6,   446,   447,   929,   449,   450,   451,
     452,   453,     4,   455,     6,     6,   458,   459,   460,   461,
     462,   463,  1001,   465,   227,   233,  1005,   235,   233,   233,
     235,   235,  1011,  1012,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   229,   233,   816,   235,   226,
     229,   233,   821,   235,   935,   233,     6,   235,   233,   227,
     235,   942,   233,     7,   235,   946,   217,   218,   233,   233,
     235,   235,   233,   996,   235,   227,   233,  1000,   235,   227,
     233,  1004,   235,   233,   233,   235,   235,   227,   233,  1012,
     235,   233,   233,   235,   235,   233,   233,   235,   235,  1335,
     227,    12,    13,   233,   233,   235,   235,   233,   233,   235,
     235,  1646,  1647,  1036,   229,   233,   558,   235,  1041,   561,
     233,     6,   235,  1046,  1047,  1048,  1049,   233,   233,   235,
     235,   227,   227,   227,   227,  1114,  1115,   227,     6,  1062,
     113,  1064,   234,   234,     8,   234,   227,   227,  1510,   236,
    1500,  1501,   236,   227,   227,  1505,  1506,   234,     6,   227,
       4,   227,   227,   227,   227,  1088,     6,     6,  1091,  1092,
    1093,  1094,   234,   234,   234,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,  1167,  1168,
     227,   102,   103,   104,   227,   227,   107,   227,  1121,   227,
     227,   227,   113,   114,   227,   229,   117,   118,     6,   120,
     121,   229,   234,   234,  1193,  1194,     8,   234,   229,   229,
       6,  1144,  1145,   171,  1147,   234,  1149,  1150,   139,  1152,
       6,  1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,
       6,   234,  1165,  1012,     6,     6,   234,   234,     6,   229,
     226,     7,   163,   164,   165,   234,     4,     5,   235,  1140,
     231,     4,   231,     8,   234,   233,   233,  1190,   228,     7,
       6,     6,  1041,  1196,  1197,     6,   228,    62,  1047,  1048,
    1049,    62,    62,    62,     7,     7,     6,  1495,     6,  1497,
       6,   228,     6,  1062,   234,  1064,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     7,     6,   168,     7,    57,
      58,    59,    60,     6,     6,     6,  1552,    65,    66,    67,
       6,   234,    70,   230,   235,   228,     6,     6,   228,   228,
    1253,   233,   233,     8,    82,    83,   233,   233,   233,   233,
     233,   228,   228,  1266,  1267,  1268,   228,   230,    44,  1328,
      44,     6,  1121,  1888,    44,    44,     6,     4,   227,  1282,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   816,     6,     6,   819,   226,   821,
     822,     6,   824,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,  1320,  1321,     6,
     229,   226,  1325,  1326,     7,     7,   171,     7,   233,     7,
     235,   171,  1335,     7,     7,     7,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     171,  1354,     7,     7,   226,     7,   228,     7,     7,   187,
     188,   189,     7,     7,     7,     7,   234,     6,   230,     7,
     228,   234,   200,     7,   202,   203,     6,  1380,     4,   234,
     234,   234,   234,  1386,     6,   228,  1368,   235,   235,   233,
     123,   228,     7,   228,   233,   228,   224,   225,     6,   233,
     231,   233,     7,   231,     7,     7,   234,  1837,     7,   231,
       6,   235,    44,    44,   234,    44,    44,     8,     6,  1422,
    1423,  1424,     6,     6,     6,  1428,     6,  1430,     7,  1432,
     229,  1434,     6,  1436,  1437,  1438,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
    1453,   234,   227,  1512,   226,     6,   214,   235,     7,   227,
     227,  1464,   227,   227,   227,     7,     7,    94,     7,  1472,
       7,     7,  1475,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,     6,     4,     7,
    1012,   226,     7,     7,     7,     7,     4,  1500,  1501,     6,
     104,  1462,  1505,  1506,   227,   234,     7,     6,   234,     7,
       7,     7,  1494,     7,     7,     7,  1519,     7,     6,  1041,
       6,     6,  1525,    92,     7,  1047,  1048,  1049,     6,     6,
       4,  1847,     4,   233,     4,     6,   234,   234,     6,   235,
    1062,     6,  1064,     6,     6,     6,     4,     6,   233,  1552,
     231,   228,  1611,   228,   233,     7,   232,   227,     6,     6,
    1563,   230,  1544,   234,   231,   228,  1088,     6,     6,   234,
    1573,   117,   234,  1576,     6,   234,     4,     5,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,     6,   234,  1576,     6,   226,   234,   171,  1121,
       6,     6,     6,     6,     6,     6,     6,     6,     6,  1897,
       5,     4,   228,   230,     6,     6,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     4,  1587,   234,     6,    57,
      58,    59,    60,   234,     7,  1638,  1639,    65,    66,    67,
     234,   234,    70,   229,  1646,  1647,     6,   234,     6,   234,
       6,     6,     6,   234,    82,    83,   234,   234,  1661,   234,
    1642,     6,   234,   234,  1667,   167,     6,   233,     6,     4,
    1519,     4,     6,  1676,     6,     6,  1525,     6,     6,     6,
       6,     6,     4,  1686,     7,     5,     7,     6,     6,     6,
       6,     6,     6,  1696,    90,     6,  1984,     6,  1701,   234,
    1682,  1662,  1663,  1664,  1665,  1666,  1667,   234,     6,     6,
       6,     6,     6,   233,     6,     6,     6,     6,     6,  1701,
       6,  1703,  1704,   233,  1573,   228,     6,     6,     6,  1732,
       6,     6,     5,     7,     6,  2023,   231,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,     6,   234,     6,  1757,   226,     6,     6,   234,   187,
     188,   189,   235,     6,     6,   234,     7,   234,   234,   166,
     234,     6,   200,     6,   202,   203,     6,     6,   235,   234,
       6,   235,   235,     6,   235,   169,     6,     6,     6,  1792,
       6,     6,     6,     6,     6,   235,     6,   228,  1320,  1321,
     228,  1804,   230,  1325,  1326,   234,     6,   234,     7,     6,
     234,   234,     6,  1335,  1817,   234,     6,   235,   123,     6,
       6,   234,     6,     6,    12,    13,     6,     6,   235,     6,
       6,  1834,     6,   227,  1837,     6,     6,     6,  1820,   228,
       6,     6,     6,     6,  1847,     6,   234,   234,   234,     6,
       6,     6,     6,  1856,  1363,  1992,     6,   517,  1862,  1627,
    1863,  1864,  1379,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,     3,     3,  1882,
       3,   226,  1885,     3,   598,  1884,  1888,     3,  1548,    -1,
      -1,    -1,    -1,  1896,    -1,    -1,    -1,  1900,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,   102,   103,   104,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   117,
     118,    -1,   120,   121,    -1,    -1,    -1,    -1,    -1,    -1,
    1901,  1902,  1903,  1904,  1905,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,  1958,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   163,   164,   165,  1500,  1501,
      -1,    -1,    -1,  1505,  1506,    -1,  1989,    -1,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,  1957,  1519,    -1,    -1,
    1961,    -1,    -1,  1525,    -1,    -1,  1988,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2025,  2026,  2027,  2028,  2029,    -1,    -1,    -1,
    1552,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2041,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,  2009,    -1,
      -1,  1573,  2013,   203,   204,   205,   206,   207,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2029,    -1,
      -1,   221,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2069,    -1,    -1,
      -1,  2094,    -1,   243,   244,   245,   246,  2100,   248,   249,
     250,   251,    -1,   253,   254,   255,   256,   257,   258,   259,
     260,    -1,   262,   263,   264,    -1,    -1,    -1,   268,    -1,
    2123,    -1,    -1,  2084,  2085,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2135,    -1,  2137,    -1,    -1,   287,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,
     300,     6,    -1,    -1,    -1,  2158,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   324,   325,    -1,    -1,    -1,    -1,
     330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     340,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
     360,    -1,    -1,    -1,   364,   365,   366,    -1,   368,    -1,
      -1,    -1,   372,   373,   374,    -1,    -1,   377,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   391,    -1,    -1,    -1,    -1,    -1,   397,   398,    -1,
      -1,  2100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,    -1,  2135,    -1,  2137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,
      -1,    -1,    -1,    -1,   454,    -1,    -1,   457,    -1,  2158,
       6,    -1,    -1,    -1,    -1,  1837,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1847,    -1,    -1,    -1,    -1,
      -1,   481,   482,    -1,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,    -1,
      -1,   501,   502,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,   523,    -1,    -1,    -1,    -1,    -1,   529,
      -1,    -1,    -1,    -1,   534,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   548,    -1,
      -1,    -1,    -1,    -1,   554,   555,    -1,   557,   558,   559,
     560,    -1,   562,    -1,    -1,   565,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   577,   578,    -1,
      -1,    -1,    -1,    -1,   584,   585,   586,   587,     7,     8,
      -1,    -1,   592,   593,   594,    -1,    -1,    -1,    -1,   599,
     600,   601,   602,   603,    -1,   605,    -1,   607,    -1,   609,
     610,    -1,    -1,    -1,    -1,    -1,    -1,  1989,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   627,   628,   629,
      12,    13,    -1,   633,   634,   635,   636,   637,   638,   639,
     640,   641,    -1,    -1,    -1,    -1,   646,    -1,   648,   649,
      -1,    -1,    -1,   653,   654,   655,    -1,    -1,   658,   659,
     660,    -1,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,   677,    -1,    -1,
     226,    -1,   682,   683,    -1,   685,   686,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   696,   697,    -1,    -1,
      -1,   701,    -1,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
     102,   103,   104,    -1,    -1,   107,    -1,    -1,  2100,    -1,
      -1,   113,   114,    -1,    -1,   117,   118,    -1,   120,   121,
      -1,    -1,     6,    -1,    -1,    -1,   746,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,
      -1,     6,    -1,  2135,    -1,  2137,    -1,    -1,   768,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   163,   164,   165,    -1,    -1,  2158,    -1,    -1,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,   805,   806,   226,   808,   809,
     810,    -1,    -1,   813,   814,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   825,    -1,    -1,   828,   829,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   851,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   862,    -1,   864,    -1,    -1,   867,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     880,    -1,   882,    -1,   884,   244,   886,    -1,    -1,    -1,
     249,    -1,   892,    -1,    -1,   254,    -1,   897,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   905,    -1,    -1,    -1,   268,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,   287,   929,
     289,    -1,    -1,    -1,    -1,    -1,   936,   937,    -1,    -1,
      -1,   300,   942,     6,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   958,    -1,
      -1,   961,   226,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
     980,   226,   982,   983,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   993,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
     102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,  1024,   117,   118,    -1,   120,   121,
      -1,    -1,  1032,  1033,  1034,    -1,  1036,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1044,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,
      -1,  1061,    -1,    -1,     6,    -1,  1066,    -1,    -1,    -1,
      -1,   163,   164,   165,    -1,  1075,   283,    -1,    -1,    -1,
      -1,  1081,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1091,  1092,  1093,  1094,  1095,   303,    -1,    -1,    -1,
      -1,    -1,  1102,    -1,   311,   312,   313,    -1,    -1,    -1,
     317,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   482,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1136,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,   523,  1165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1175,  1176,     6,  1178,  1179,
      -1,  1181,  1182,  1183,    -1,    -1,    -1,   394,   395,    -1,
      -1,  1191,    -1,    -1,    -1,    -1,    -1,  1197,   557,   558,
      -1,   408,    -1,    -1,    -1,    -1,    -1,  1207,    -1,  1209,
      -1,  1211,    -1,  1213,    -1,    -1,    -1,    -1,   577,   578,
      -1,    -1,    -1,    -1,    12,    13,   585,    -1,    -1,    -1,
      -1,    -1,    -1,  1233,    -1,    -1,    -1,    -1,   445,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     609,   610,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1265,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,  1288,    -1,
      -1,    -1,    -1,  1293,   653,   654,   655,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,   102,   103,   104,    -1,   677,   107,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   117,
     118,    -1,   120,   121,    -1,    -1,  1336,    -1,   697,    -1,
      -1,    -1,    -1,    -1,    -1,  1345,  1346,  1347,  1348,    -1,
      -1,   139,  1352,  1353,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   572,    -1,  1367,  1368,     6,
      -1,    -1,    -1,    -1,    -1,   163,   164,   165,    -1,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,  1444,  1445,  1446,   235,     6,   808,
      -1,    -1,    -1,  1453,   813,  1455,    -1,    -1,    53,    54,
      55,    56,  1462,    -1,    -1,    -1,    61,    -1,    -1,   828,
     829,    -1,    -1,    -1,    -1,  1475,    -1,    72,    73,    74,
    1480,    -1,    -1,    -1,    -1,    80,    81,    -1,  1488,  1489,
    1490,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   862,    -1,   864,    -1,    -1,   867,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1520,   880,    -1,   882,    -1,   884,    -1,   886,    -1,  1529,
      -1,    -1,    -1,   892,    -1,    -1,    -1,    -1,   897,    -1,
      -1,    -1,    -1,    -1,    -1,  1545,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   761,    -1,    -1,    -1,   765,    -1,
      -1,    -1,    -1,    -1,  1564,    -1,     6,    -1,    -1,  1569,
     929,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,  1585,  1586,    -1,    -1,   226,
      -1,   186,  1592,  1593,    -1,   190,    -1,    -1,    -1,  1599,
     195,   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,
      12,    13,    -1,    -1,    -1,  1615,  1616,  1617,  1618,  1619,
    1620,  1621,   217,   218,    -1,    -1,    -1,   222,    -1,  1629,
      -1,    -1,   227,   228,    -1,    -1,    -1,   232,  1638,  1639,
    1640,    -1,  1642,    -1,    -1,    -1,    -1,    -1,  1648,  1649,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,  1667,   226,    -1,
      -1,  1671,    -1,    -1,    -1,    -1,    -1,  1036,    -1,    -1,
      -1,    -1,  1682,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,   906,
     102,   103,   104,  1703,    -1,   107,    -1,     6,    -1,    -1,
      -1,   113,   114,    -1,    -1,   117,   118,    -1,   120,   121,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1730,  1731,  1091,  1092,  1093,  1094,    -1,   139,  1738,    -1,
      -1,    -1,   244,    -1,    -1,    12,    13,   249,    -1,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   163,   164,   165,    -1,  1765,   268,    -1,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,  1785,   226,    -1,    -1,   996,
      -1,    -1,    -1,  1000,    -1,  1795,    -1,  1004,   300,    -1,
      -1,    -1,    -1,    -1,  1804,    -1,  1165,    -1,    -1,    -1,
      -1,    -1,  1812,    -1,  1814,    -1,    -1,  1817,    -1,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,   235,  1834,   102,   103,   104,  1197,  1046,
     107,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
     117,   118,  1852,   120,   121,    -1,    -1,  1857,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1869,
      -1,    -1,   139,    -1,    -1,  1875,  1876,  1877,  1878,  1879,
      -1,    -1,    -1,    -1,    -1,  1885,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,    -1,
    1900,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1908,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,  1931,  1932,    -1,    -1,    -1,  1936,  1144,  1145,    -1,
    1147,    -1,  1149,  1150,    -1,  1152,    -1,  1154,  1155,  1156,
    1157,  1158,  1159,  1160,  1161,  1162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1965,    -1,    -1,   235,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
     482,    -1,    -1,  1190,    -1,    -1,  1986,    -1,    -1,  1196,
      -1,    -1,  1992,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    -1,  2002,  2003,  2004,  2005,  2006,  2007,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2020,    -1,    -1,    -1,    -1,  2025,  2026,  2027,  2028,  2029,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,  2039,
      -1,    -1,  2042,    -1,    -1,    -1,  1253,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1266,
    1267,  1268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1282,   578,    -1,  2078,  2079,
    2080,  2081,  2082,  2083,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2094,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   609,   610,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1475,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2127,  2128,  2129,
    2130,  2131,  2132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1354,    -1,    -1,
      -1,   653,   654,   655,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   588,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1380,    -1,   677,    -1,    -1,    -1,  1386,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,   697,    -1,    -1,   226,     8,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,  1422,  1423,  1424,   226,    -1,
      -1,  1428,    -1,  1430,    -1,  1432,    -1,  1434,     8,  1436,
    1437,  1438,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,  1453,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,  1464,    -1,    -1,
      -1,    -1,    12,    13,    -1,  1472,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1638,
    1639,   704,   705,   706,   707,   708,   709,   710,   711,   712,
     713,   714,    -1,   716,   717,   718,   719,   720,   721,   722,
       8,    -1,    -1,   726,   727,   728,   808,    -1,  1667,   732,
     733,   813,   735,    -1,    -1,    -1,    -1,   740,   741,   742,
      -1,   744,    -1,    -1,   747,    -1,    -1,    -1,    -1,    -1,
      -1,   754,   755,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   772,
      -1,     8,   102,   103,   104,    -1,  1563,   107,    -1,    -1,
     862,    -1,   864,   113,   114,   867,    -1,   117,   118,  1576,
     120,   121,    -1,    -1,    -1,    -1,    -1,    -1,   880,    -1,
     882,    -1,   884,    -1,   886,    -1,    -1,    -1,    -1,   139,
     892,    -1,    -1,    -1,    -1,   897,    -1,    -1,    -1,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   163,   164,   165,    -1,   226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   929,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,  1804,   226,    -1,    -1,   872,
      -1,    -1,    -1,    -1,  1661,    -1,    -1,    -1,  1817,    -1,
      -1,    -1,    -1,    -1,   887,    -1,    -1,    -1,    -1,  1676,
      -1,    -1,    -1,    -1,    -1,  1834,    -1,    -1,    -1,  1686,
      -1,    -1,    -1,    -1,    -1,   235,    22,    23,    -1,  1696,
      -1,    -1,    -1,    -1,  1701,    -1,    -1,    -1,    -1,    -1,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,  1732,  1885,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1036,    -1,    -1,    -1,    -1,    -1,
      -1,  1900,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1757,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,  1792,    -1,    -1,   226,  1091,
    1092,  1093,  1094,    -1,    -1,   131,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,    -1,   168,   169,   170,   171,    -1,   173,   174,   175,
     176,   177,   178,    -1,    -1,   181,    -1,    -1,    -1,  1856,
      -1,   187,   188,   189,    -1,    -1,  1863,  1864,   194,   195,
      -1,    -1,    -1,  1165,    -1,    -1,  2025,  2026,  2027,  2028,
    2029,    -1,    -1,    -1,    -1,  1882,    -1,    -1,  1101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1896,
      -1,    -1,    -1,    -1,    -1,  1197,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,  1138,  1139,    -1,    -1,    -1,
      -1,   233,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2094,    -1,   273,    -1,   275,
     276,   277,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     286,  1958,     3,     4,     5,   123,    -1,    -1,     9,    10,
      11,   297,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,    70,
      -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    -1,  2041,    -1,    -1,    -1,    -1,    -1,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,  1296,    -1,    -1,    -1,   226,    -1,  1302,
    1303,  1304,  1305,  1306,   233,  1308,   235,  1310,  1311,    -1,
    1313,    -1,  1315,    -1,    -1,  1318,  1319,  1320,    -1,    -1,
      -1,    -1,  1325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,
      -1,    -1,    -1,    -1,    -1,   186,   187,   188,   189,   190,
     476,    -1,    -1,    -1,   195,   196,   197,   198,   199,   200,
      -1,   202,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,
      -1,   222,    -1,  1475,    -1,    -1,   227,    -1,   229,  1402,
     231,   232,    -1,   234,    -1,   236,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1419,    -1,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,     3,     4,   226,    -1,    -1,    -1,
       9,    10,    11,    -1,   234,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,  1500,    -1,    -1,
      -1,    -1,  1505,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    -1,    -1,    92,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,  1538,  1539,    -1,    -1,  1542,
    1543,    -1,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,
      -1,   120,    -1,    -1,    -1,    -1,  1638,  1639,   127,   128,
     129,   130,   131,    -1,    -1,   134,   135,   136,   137,   138,
      -1,    -1,    -1,   142,    -1,    -1,   145,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,    -1,    12,    13,   226,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,
      -1,   190,   191,    -1,    -1,    -1,   195,   196,   197,   198,
     199,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,
      -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,   232,    -1,   234,   235,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,    -1,   102,   103,   104,  1689,  1690,   107,    -1,
    1693,  1694,    -1,    -1,   113,   114,  1699,  1700,   117,   118,
      -1,   120,   121,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,     4,     5,
     139,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,    -1,    -1,  1817,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1758,  1759,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,  1885,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,  1900,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,   235,    -1,     9,    10,
      11,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      61,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,   200,    -1,   202,   203,    -1,    80,
      81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    -1,
      -1,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,  2025,  2026,  2027,  2028,  2029,    -1,    -1,
      -1,    -1,   113,    -1,   115,  1071,  1072,   118,    -1,   120,
      -1,  1077,  1078,    -1,    -1,    -1,   127,   128,   129,   130,
     131,    -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,
      -1,   142,    -1,    -1,   145,    -1,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2094,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,   190,
     191,    -1,    -1,    -1,   195,   196,   197,   198,   199,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,
      -1,   222,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
      -1,   232,    -1,    -1,   235,    -1,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2105,   235,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,  1285,
    1286,    65,    66,    67,  1290,  1291,    70,    -1,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      -1,    -1,    86,    -1,    -1,    89,    -1,    -1,    92,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,    -1,    -1,   118,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,   129,   130,   131,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,   145,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,   195,   196,   197,   198,   199,   200,    -1,   202,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,   218,    -1,    -1,    -1,   222,    -1,
      -1,    -1,    -1,   227,    -1,     3,     4,     5,   232,    -1,
     234,     9,    10,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    65,    66,    67,
      -1,    -1,    70,    -1,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    -1,    -1,    86,    -1,
      -1,    89,    -1,    -1,    92,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,     4,     5,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,    -1,    -1,
     118,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,   142,    -1,    -1,   145,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    65,
      66,    67,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,   186,   187,
     188,   189,   190,   191,    -1,    -1,    -1,   195,   196,   197,
     198,   199,   200,    -1,   202,   203,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,   227,
      -1,     3,     4,     5,   232,    -1,   234,     9,    10,    11,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    61,
      -1,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,   200,    -1,   202,   203,    80,    81,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    -1,    -1,
      92,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,     4,     5,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,    -1,    -1,   118,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
     142,    -1,    -1,   145,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,   186,    -1,    -1,    -1,   190,   191,
      -1,    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,
      -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
     222,    -1,    -1,    -1,    -1,   227,    -1,     3,     4,     5,
     232,    -1,   234,     9,    10,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    61,    -1,   187,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
     200,    -1,   202,    -1,    80,    81,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    -1,    -1,    92,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
      -1,    -1,   118,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,   142,    -1,    -1,   145,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    67,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
     186,    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,   195,
     196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,   222,    -1,    -1,    -1,
      -1,   227,    -1,     3,     4,    -1,   232,    -1,   234,     9,
      10,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    61,    -1,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,   200,    -1,   202,    -1,
      80,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,
      -1,    -1,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,
     130,   131,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,   142,    -1,    -1,   145,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
     190,   191,    -1,    -1,    -1,   195,   196,   197,   198,   199,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,   222,    -1,    -1,    -1,    -1,   227,    -1,     3,
       4,    -1,   232,    -1,   234,     9,    10,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    89,    -1,    -1,    92,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,    -1,    -1,   118,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,   129,   130,   131,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,   145,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,    -1,    -1,    -1,   190,   191,    -1,    -1,
      -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,   218,    -1,    -1,    -1,   222,    -1,
      -1,    -1,    -1,   227,    -1,     3,     4,    -1,   232,    -1,
     234,     9,    10,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    89,    -1,    -1,    92,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,    -1,    -1,
     118,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,   142,    -1,    -1,   145,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,
      -1,    -1,   190,   191,    -1,    -1,    -1,   195,   196,   197,
     198,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,   227,
      -1,     3,     4,    -1,   232,    -1,   234,     9,    10,    11,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    -1,    -1,
      92,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,    -1,    -1,   118,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
     142,    -1,    -1,   145,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,   190,   191,
      -1,    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,
      -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
     222,    -1,    -1,    -1,    -1,   227,    -1,     3,     4,    -1,
     232,    -1,   234,     9,    10,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    -1,    -1,    92,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
      -1,    -1,   118,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,   142,    -1,    -1,   145,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,   195,
     196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,   222,    -1,    -1,    -1,
      -1,   227,    -1,     3,     4,    -1,   232,    -1,   234,     9,
      10,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,
      -1,    -1,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,
     130,   131,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,   142,    -1,    -1,   145,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
     190,   191,    -1,    -1,    -1,   195,   196,   197,   198,   199,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,   222,    -1,    -1,    -1,    -1,   227,    -1,     3,
       4,    -1,   232,    -1,   234,     9,    10,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    89,    -1,    -1,    92,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,    -1,    -1,   118,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,   129,   130,   131,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,   145,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,    -1,    -1,    -1,   190,   191,    -1,    -1,
      -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,   218,    -1,    -1,    -1,   222,    -1,
      -1,    -1,    -1,   227,    -1,     3,     4,    -1,   232,    -1,
     234,     9,    10,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    89,    -1,    -1,    92,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,    -1,    -1,
     118,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
     138,    -1,    -1,    -1,   142,    -1,    -1,   145,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,
      -1,    -1,   190,   191,    -1,    -1,    -1,   195,   196,   197,
     198,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,   227,
      -1,     3,     4,    -1,   232,    -1,   234,     9,    10,    11,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    -1,    -1,
      92,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,    -1,    -1,   118,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,    -1,    -1,    -1,
     142,    -1,    -1,   145,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,   190,   191,
      -1,    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,
      -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
     222,    -1,    -1,    -1,    -1,   227,    -1,     3,     4,    -1,
     232,    -1,   234,     9,    10,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    -1,    -1,    92,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
      -1,    -1,   118,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,   142,    -1,    -1,   145,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,   195,
     196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,   222,    -1,    -1,    -1,
      -1,   227,    -1,     3,     4,    -1,   232,    -1,   234,     9,
      10,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,
      -1,    -1,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,    -1,    -1,   118,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,
     130,   131,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,   142,    -1,    -1,   145,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
     190,   191,    -1,    -1,    -1,   195,   196,   197,   198,   199,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,   222,    -1,    -1,    -1,    -1,   227,    -1,     3,
       4,    -1,   232,    -1,   234,     9,    10,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    89,    -1,    -1,    92,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,    -1,    -1,   118,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,   129,   130,   131,    -1,    -1,
     134,   135,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,   145,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   186,    -1,    -1,    -1,   190,   191,    -1,    -1,
      -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,   218,    -1,    -1,    -1,   222,    -1,
      -1,    -1,    -1,   227,    -1,     3,     4,     5,   232,    -1,
     234,     9,    10,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    65,    66,    67,
      -1,    -1,    70,    -1,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,     3,     4,     5,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    65,    66,
      67,    -1,    -1,    70,    -1,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,    -1,   186,   187,
     188,   189,   190,    -1,   235,    -1,    -1,   195,   196,   197,
     198,   199,   200,    -1,   202,   203,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,   227,
      -1,    -1,    -1,    -1,   232,    -1,   234,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,   186,
     187,   188,   189,   190,    -1,    -1,    -1,    -1,   195,   196,
     197,   198,   199,   200,    -1,   202,   203,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,   218,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,
     227,    -1,     3,     4,     5,   232,    -1,   234,     9,    10,
      11,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,    70,
      -1,    72,    73,    74,    -1,    -1,    -1,     3,     4,    80,
      81,    82,    83,     9,    10,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    53,    54,    55,
      56,   226,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
     235,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    80,    81,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,   186,   187,   188,   189,   190,
      -1,    -1,    -1,    -1,   195,   196,   197,   198,   199,   200,
      -1,   202,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,
      -1,   222,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
      -1,   232,    -1,   234,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,   235,    -1,    -1,   190,    -1,    -1,    -1,    -1,   195,
     196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,    -1,    -1,    -1,   222,    -1,    -1,    -1,
      -1,   227,    -1,     3,     4,    -1,   232,    -1,   234,     9,
      10,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    53,    54,    55,    56,   226,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      80,    81,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
     190,    -1,    72,    73,    74,   195,   196,   197,   198,   199,
      80,    81,    -1,   203,    -1,    -1,    86,    -1,    -1,    89,
      -1,    -1,    92,    -1,    94,    -1,    -1,   217,   218,    -1,
      -1,   101,   222,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,    -1,   232,   113,   234,   115,    -1,    -1,   118,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,
     130,   131,    -1,    -1,   134,   135,   136,   137,   138,    -1,
      -1,    -1,   142,    -1,    -1,   145,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
     190,   191,    -1,    -1,    -1,   195,   196,   197,   198,   199,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,   222,     3,     4,     5,    -1,   227,    -1,     9,
      10,    11,   232,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,
      70,    -1,    72,    73,    74,    -1,    -1,    -1,     3,     4,
      80,    81,    82,    83,     9,    10,    11,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    53,    54,
      55,    56,   226,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    80,    81,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,   186,   187,   188,   189,
     190,    -1,    -1,    -1,    -1,   195,   196,   197,   198,   199,
     200,    -1,   202,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,   222,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,    -1,   232,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,   186,    -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,
     195,   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,   218,    -1,    -1,    -1,   222,    -1,    -1,
      -1,    -1,   227,     3,     4,   230,    -1,   232,    -1,     9,
      10,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    53,    54,    55,    56,   226,    -1,   228,
      -1,    61,    -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,     3,     4,    -1,    -1,
      80,    81,     9,    10,    11,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    53,    54,    55,    56,
     226,    -1,    -1,    -1,    61,    -1,    -1,   233,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    80,    81,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,   228,    -1,   230,    -1,    -1,
     233,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
     190,    -1,    -1,    -1,    -1,   195,   196,   197,   198,   199,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,    -1,
      -1,    -1,   222,    -1,    -1,    -1,    -1,   227,   228,    -1,
      -1,    -1,   232,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,   186,
      -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,   195,   196,
     197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,   218,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,
     227,     3,     4,   230,     6,   232,    -1,     9,    10,    11,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    53,    54,    55,    56,   226,    -1,    -1,    -1,    61,
      -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,     3,     4,    -1,     6,    80,    81,
       9,    10,    11,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    53,    54,    55,    56,   226,    -1,
      -1,    -1,    61,    -1,    -1,   233,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    81,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,   190,    -1,
      -1,    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,
      -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,    -1,    -1,    -1,
     222,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,
     232,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
      -1,    -1,    -1,    -1,    -1,    -1,   233,   186,    -1,    -1,
      -1,   190,    -1,    -1,    -1,    -1,   195,   196,   197,   198,
     199,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,
      -1,    -1,    -1,   222,     3,     4,    -1,    -1,   227,    -1,
       9,    10,    11,   232,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    81,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,   102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   117,   118,    -1,   120,
     121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,   186,   226,    -1,
      -1,   190,   163,   164,   165,   233,   195,   196,   197,   198,
     199,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,   217,   218,
      -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,   232,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
     102,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,   235,   117,   118,    -1,   120,   121,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,   102,   103,   104,    -1,    -1,   107,
      -1,   163,   164,   165,    -1,   113,   114,    -1,    -1,   117,
     118,    -1,   120,   121,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     0,     1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    12,    13,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,   163,   164,   165,    -1,    -1,
     233,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    -1,    -1,    -1,    68,
      69,    -1,    71,    -1,    -1,    -1,    75,    76,    -1,    78,
      79,    -1,    81,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,   101,   102,   103,   104,   105,   235,   107,    -1,
     109,   110,   111,   112,   113,   114,   115,    -1,   117,   118,
     119,   120,   121,   122,    -1,   124,   125,   126,   127,   128,
     129,   130,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,    -1,
      -1,     4,   151,   152,   153,    -1,    -1,    -1,   157,    12,
      13,    -1,    -1,   162,   163,   164,   165,    -1,    -1,   168,
      -1,   170,    -1,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,    -1,    42,
      43,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,   201,    -1,   203,    -1,    -1,    -1,    -1,    62,
      63,    64,    -1,    -1,    -1,    68,    69,    -1,    71,    -1,
      -1,    -1,    75,    76,    -1,    78,    79,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,   101,   102,
     103,   104,   105,    -1,   107,    -1,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,   118,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    12,    13,    -1,   151,   152,
     153,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,   162,
     163,   164,   165,    -1,    -1,   168,    -1,   170,    -1,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    12,    13,    -1,    -1,    -1,    -1,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,    -1,   102,   103,   104,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
     117,   118,    -1,   120,   121,    -1,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,   139,   102,   103,   104,   143,    -1,   107,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   117,   118,
      -1,   120,   121,    -1,    -1,    -1,   163,   164,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,   163,   164,   165,   233,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,   233,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,   233,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,   233,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,   233,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,   233,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,   233,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,   233,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,   233,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,   233,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,   233,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,   233,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,   233,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,   233,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,   233,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,   233,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,   233,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,   233,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,   233,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
     228,    -1,   230,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,    -1,    -1,   230,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,   230,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,   230,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,   230,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,    -1,    -1,   230,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
     230,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
      -1,    -1,    -1,   230,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,   230,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,   230,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,   230,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,    -1,    -1,   230,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,   230,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,   230,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,   230,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,    -1,    -1,   230,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
     230,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
      -1,    -1,    -1,   230,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,   228,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,   228,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,   228,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
     228,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
      -1,   228,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,   228,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,   228,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,   228,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,   228,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,   228,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
     228,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
      -1,   228,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,   228,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,   228,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,   228,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,   228,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,   228,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
     228,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
      -1,   228,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,   228,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,   228,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,   228,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,   228,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,   228,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
     228,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
      -1,   228,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,   228,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,   228,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,   228,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,   228,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,   228,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
     228,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
      -1,   228,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,   228,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,   228,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,   228,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,   228,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,   228,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
     228,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
      -1,   228,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,   228,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,   228,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,   228,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,   228,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,   238,   239,     6,     0,     4,    12,    13,    42,
      43,    62,    63,    64,    68,    69,    71,    75,    76,    78,
      79,    81,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   101,   102,   103,
     104,   105,   107,   109,   110,   111,   112,   113,   114,   115,
     117,   118,   119,   120,   121,   122,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   151,
     152,   153,   157,   162,   163,   164,   165,   168,   170,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   192,   193,   194,   201,   203,   240,   242,
     243,   263,   282,   283,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   301,   303,   304,   310,   311,   312,   313,
     317,   337,   338,     3,     4,     5,     9,    10,    11,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      65,    66,    67,    70,    72,    73,    74,    80,    82,    83,
     179,   186,   187,   188,   189,   190,   195,   196,   197,   198,
     199,   200,   202,   217,   218,   222,   227,   229,   231,   232,
     234,   236,   261,   314,   315,   317,   332,   333,   337,   338,
      13,    92,   227,   227,     6,   234,     6,     6,     6,     6,
     227,     6,     6,   229,   229,     4,   319,   337,   338,   227,
     229,   261,   261,   227,   234,   227,   227,     4,   227,   234,
     227,   227,     4,   227,   234,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   106,    92,     6,   234,    86,
      89,    92,   227,     4,    37,    38,    39,    40,    41,    86,
      89,    92,    94,   113,   118,   120,   191,   218,   227,   234,
     283,   294,   301,   303,   314,   325,   327,   337,   338,   227,
     234,    92,    92,   113,    89,    92,    94,    86,    89,    92,
      94,    89,    92,    94,    89,    92,   227,    89,   168,   184,
     185,   234,   217,   218,   227,   234,   322,   323,   322,   234,
     234,   322,     4,    86,    90,    96,    97,    99,   100,   117,
     227,    92,    94,    92,    89,     4,   179,   234,   338,     4,
       6,    86,    89,    92,    89,    92,     4,     4,     4,     5,
     227,   325,   326,     4,   227,   227,   227,     4,   234,   329,
     338,     4,   227,   227,   227,     6,     6,   229,   333,   338,
     227,     4,   333,     5,   234,     5,   234,     4,   314,   337,
     229,   227,   234,     6,   227,   234,     6,   227,   229,   236,
     261,     7,   204,   205,   206,   207,   224,   225,   259,   260,
       4,   227,   229,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   227,   227,
     227,   261,   261,   261,   261,   227,   261,   261,   261,   261,
     261,   261,   227,   261,   261,   261,   261,     7,   227,   227,
     227,   261,   261,   227,   227,   229,   314,   314,   314,   228,
     314,   230,   314,     4,   168,   169,   338,     4,   283,   284,
     285,   234,   234,     6,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   226,   234,
       6,   227,   229,   231,   260,     6,   314,     4,   332,   333,
     337,   338,   332,   314,   332,   336,   265,   270,   318,     8,
     333,   338,   314,   218,   314,   327,   328,   314,   314,   227,
     314,   328,   314,   314,   227,   314,   328,   314,   314,   314,
     314,   314,   314,   332,   314,   314,   314,   325,   227,   328,
     326,   326,   326,   332,   227,   229,   261,   227,   229,   261,
     261,   261,   261,     5,   171,   234,     5,   171,     5,   171,
       5,   171,   113,    86,    89,    92,    94,   261,   234,   314,
     327,   314,   235,   328,     8,   219,   227,   229,   261,   231,
     314,   328,   227,   227,   227,   325,   326,   326,   326,   227,
     227,   227,   227,   227,   325,   227,   325,   227,   325,   234,
     234,   314,     4,   325,   329,   234,   234,   322,   322,   322,
     314,   314,   217,   218,   234,   234,   322,   217,   218,   227,
     285,   322,   234,   227,   234,   227,   227,   227,   227,   227,
     227,   227,   314,   326,   326,   326,   227,     4,   229,   229,
     285,     6,     6,   234,   234,   234,   326,   326,   229,   229,
     229,   314,     6,     6,   314,   314,   314,   231,   314,   234,
     171,   314,   314,   314,   314,     6,     6,   234,     6,   285,
       6,   285,   227,   229,   234,   227,   229,   332,   314,   285,
     325,   325,   228,   314,   230,   314,   234,   234,   333,   325,
       6,   229,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   336,   332,   336,   332,
     332,   332,   332,   332,   332,   332,   325,   332,   332,   314,
     332,   332,   332,   336,   332,   314,   232,   335,   338,   333,
     314,   332,   332,   332,   332,   332,   338,   333,   338,     7,
     207,   259,   228,     7,   207,   259,   230,     7,   259,   260,
     231,     7,   261,   235,    86,    89,    92,    94,   113,   118,
     121,   282,   314,   328,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   244,
     314,   314,     4,   320,     6,   227,   229,   228,   233,   227,
     229,   231,   228,   233,   233,   228,   233,   230,   233,   264,
     230,   264,   234,   321,     8,   233,   233,   228,   219,   233,
     235,   228,   228,   314,   228,   235,   228,   228,   314,   228,
     235,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,     7,   314,   235,     6,     6,     6,   228,   314,   314,
     228,   230,   234,   262,   234,   314,   327,   234,   327,   338,
     314,   314,   332,   314,    62,   314,    62,    62,    62,     5,
     234,     5,   234,     5,   234,     5,   234,   327,   328,   228,
     235,   314,   234,   314,   327,   314,   314,   234,   262,   320,
     228,   235,   314,   314,   314,     7,     7,   307,   307,   276,
     314,   333,   277,   314,   333,   278,   314,   333,   279,   314,
     333,   314,     6,   314,     6,   314,     6,   328,   328,   234,
     228,     6,   234,   285,   285,   233,   233,   233,   322,   322,
     284,   284,   233,   314,   235,   298,   233,   285,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   228,     7,   308,
       6,     7,   314,     6,   314,   314,   235,   328,   328,   328,
       6,     6,   314,   314,   314,   228,   228,   228,   228,   168,
     233,   285,   234,     8,   228,   228,   230,   328,   235,   235,
     285,   230,   228,   143,   302,   228,   233,   235,     7,   207,
     259,   228,     7,   207,   259,   230,   314,   328,     6,     6,
     314,   228,   230,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   233,   262,   262,   262,   262,   262,
     262,   262,   233,   233,   233,   262,   233,   262,   262,   228,
     228,   233,   262,   262,   233,   262,   233,   233,   233,   233,
     262,   262,   262,   228,   262,   316,   314,   262,     8,   334,
       6,   233,   233,   228,   233,   262,   233,   262,   228,   228,
     230,    44,    44,   325,     7,   259,   260,    44,    44,   325,
     231,   259,   260,   333,   314,     6,     4,     4,   234,   330,
     262,   234,   234,   234,   234,   227,   113,    89,    92,    94,
     235,   235,     8,     4,   158,   159,   160,   161,   235,   247,
     251,   254,   256,   257,   228,   230,   260,   314,   314,     6,
     214,   241,   328,   314,   314,   320,     6,   328,   314,     6,
     332,     6,   338,     6,   332,   338,   229,   338,   314,   333,
       7,   314,   327,   171,     7,     7,   228,     7,   171,     7,
       7,   228,     7,   171,     7,     7,     7,     7,     7,     7,
       7,     7,     7,   314,   228,   234,     6,   228,   230,   328,
     328,   228,   328,   230,   230,   233,   233,   262,   233,   234,
     235,   234,   234,   234,   328,   328,   328,   328,   262,   235,
       7,     8,   328,   228,   230,   328,     7,   234,   228,   228,
     228,   314,   325,     4,   306,     6,   228,   233,   228,   233,
     228,   233,   228,   233,   228,   228,   228,   235,   235,   328,
     231,   285,   235,   235,   322,   314,   314,   235,   235,   314,
     322,   123,   123,   140,   148,   149,   150,   154,   155,   299,
     300,   322,   235,   295,   228,   235,   228,   228,   228,   228,
     228,   228,   228,     7,   314,     6,   314,   228,   230,   230,
     235,   235,   235,   230,   230,   233,     7,     7,     7,   231,
     314,   235,   314,   314,     7,   231,   235,   235,     7,     6,
     314,   235,   234,   325,     6,    44,    44,   325,   259,   260,
      44,    44,   325,   259,   260,   235,   235,   230,   260,   231,
     260,   332,   314,   314,   314,   314,   328,   332,   314,   325,
     332,   332,   332,   272,     8,   274,   314,   332,   332,   314,
     261,   261,     6,   314,     6,   261,   261,     6,     4,   168,
     169,   314,     6,     6,     6,     7,   229,   329,   331,     6,
     328,   328,   328,   328,   314,   227,   227,   227,   227,   262,
     314,   248,   227,   227,   234,   258,     6,   260,   260,   228,
     230,   214,   332,   228,   228,   230,   228,   233,     7,   227,
     229,   235,   314,   262,   262,   322,    92,    94,   325,   325,
       7,   325,    92,    94,   325,   325,     7,   325,    94,   325,
     325,   325,   325,   325,   325,   325,   325,   325,     6,     7,
     328,   231,   235,   235,   235,   314,   314,   314,   314,   314,
     314,   314,   235,   235,   235,   235,   325,   314,   235,   235,
     325,   328,     7,     7,     7,   123,   305,     6,   259,   314,
     259,   314,   259,   314,   259,   314,     7,     7,     7,     7,
       7,   235,     4,   235,   233,   233,   233,   235,   235,   104,
       4,     6,   314,   234,     6,   227,     6,   156,     6,   156,
     235,   300,   233,   299,     7,     6,     7,     7,     7,     7,
       7,     7,     7,   325,     6,   234,     6,     6,     6,    92,
       7,     6,     6,   314,   325,   325,   325,     4,   233,     8,
       8,   228,     4,     4,   233,   234,     6,   234,   325,   235,
     261,   261,     6,   314,     6,   261,   261,     6,   314,     6,
     262,     6,     4,     6,   262,   262,   262,   262,   262,   233,
     233,   262,   228,   262,   262,   233,   233,   262,   273,   232,
     233,   262,   275,   228,   228,   262,   262,   262,   336,   336,
       6,   262,   336,   336,     7,   259,   260,   231,     7,     6,
     329,   314,   233,   235,   235,   235,   235,   235,   228,   314,
     314,   314,   314,   259,   227,   314,   314,   324,   325,   234,
     231,     6,     6,   241,     6,   314,   234,   314,   333,   228,
     230,   272,     6,     6,     6,   234,   234,   117,   281,   281,
     325,     6,   234,   234,     6,     6,   325,   171,   280,   234,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     5,
     235,     4,   262,   228,   230,   233,   233,   233,   233,   233,
     233,   233,     6,   262,     6,   235,   325,   325,   325,     4,
       6,   325,   325,   325,   325,   325,   325,   325,   234,   234,
       7,     6,     7,   314,   314,   314,   234,   234,   234,   229,
       6,   314,   325,   314,     6,     6,   314,   322,   235,     5,
     325,   234,   234,   234,   234,   234,   234,   234,   325,     6,
     328,   234,   314,   230,     6,     6,   167,   314,   314,   314,
       6,     6,     7,   333,   285,   285,   233,     6,   262,   336,
     336,     6,   262,   336,   336,     6,   259,   260,   332,   314,
     332,     4,   314,     4,   183,     6,   262,   262,     6,   262,
     262,   333,   314,     6,     4,   330,     6,   230,   329,     6,
       6,     6,     6,   228,   228,   228,   228,   325,   245,   314,
     233,   233,   233,   235,   246,   314,     4,   332,   233,   325,
     333,     7,     7,   230,   314,   314,   322,     6,     6,     6,
     314,   314,     6,    90,     6,   314,     5,   234,   314,   314,
     314,   314,   314,   314,   314,   234,     6,   280,     6,   314,
       6,     6,     6,     6,     6,     4,     6,     6,   328,   328,
     314,   314,   333,   235,   228,   233,   235,   284,   284,   314,
     314,   235,   233,   228,   235,   233,     6,     6,   324,   322,
     322,   322,   322,   322,   218,   322,     6,   235,   314,     6,
       6,   325,   233,   235,     8,   235,   228,   234,   314,   333,
     233,   302,   302,   325,     6,   262,   262,     6,   262,   262,
     325,   228,   262,   262,   234,   325,   333,   234,   314,   333,
     333,     6,     6,     6,     6,     6,     6,     7,     6,   231,
       6,   228,   233,   314,   314,   325,   234,   233,   235,     6,
     314,   266,   269,   234,   234,   235,   235,   235,   235,   234,
     235,     5,   324,   262,   262,   233,   233,   233,   233,   233,
     314,     6,   234,   235,   235,   234,     6,     6,   234,   314,
     235,   235,   235,   230,     6,   325,     7,   234,   314,   235,
     233,   233,   233,   233,   233,   233,     6,   235,   166,   314,
     314,   328,     6,     6,   333,   235,   235,   235,     6,     6,
       6,     6,     6,   271,   314,   327,   336,   329,   169,   249,
     314,   233,   233,   324,   314,     6,   233,   272,   274,   325,
     325,     6,     6,     6,     6,   314,     6,     6,   235,   314,
     314,   314,   314,   314,   235,   324,   127,   128,   133,   309,
     127,   128,   309,   328,   284,   233,   235,     6,   235,   325,
     285,   235,     6,   328,   322,   322,   322,   322,   322,   314,
     235,   235,   235,   228,   234,     6,   233,   235,     7,     7,
     235,     6,   234,   314,   314,   235,   314,   235,   235,   268,
     267,   235,   234,   233,   233,   233,   233,   233,   235,   234,
     322,   325,     6,   234,   322,     6,   235,   235,   314,     6,
     123,   235,   296,   234,   235,   233,   233,   233,   233,   233,
       6,     6,     6,   285,   314,   333,   338,   246,   228,   233,
       6,   234,   233,   272,   272,   314,   314,   314,   314,   314,
     314,     6,   322,     6,   322,     6,     6,   235,   314,   299,
     285,     6,   328,   328,   328,   328,   322,   328,   302,     7,
     227,   235,   252,   314,   324,   314,   235,   235,   233,   233,
     233,   233,   233,   233,   233,   233,     6,   235,   235,   297,
     235,   235,   235,   235,   233,   235,   235,   333,   228,     6,
     234,   228,   235,   235,   314,   314,   314,   314,   314,   314,
     322,   322,   299,     6,     6,     6,     6,   328,     6,     6,
     250,   332,   255,   234,     6,   235,   262,   233,   233,   233,
     233,   233,   233,   235,   235,   233,   235,   234,   324,     6,
     314,   314,   314,   314,   314,   314,     6,   332,     6,   253,
     332,   235,   235,   235,   235,   235,   235,   235,   233,   235,
       6,     6,     6,   332,     6
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
        case 3:
#line 221 "Gmsh.y"
    { yyerrok; return 1; ;}
    break;

  case 6:
#line 232 "Gmsh.y"
    { return 1; ;}
    break;

  case 7:
#line 233 "Gmsh.y"
    { return 1; ;}
    break;

  case 8:
#line 234 "Gmsh.y"
    { return 1; ;}
    break;

  case 9:
#line 236 "Gmsh.y"
    {
      // FIXME: when changing to OpenCASCADE, get maxTags from GEO_Internals and
      // add that info in OCC_Internals - same in the other direction
      factory = (yyvsp[(3) - (5)].c);
      if(factory == "OpenCASCADE" && !GModel::current()->getOCCInternals())
        GModel::current()->createOCCInternals();
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 10:
#line 244 "Gmsh.y"
    { return 1; ;}
    break;

  case 11:
#line 245 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 12:
#line 246 "Gmsh.y"
    { return 1; ;}
    break;

  case 13:
#line 247 "Gmsh.y"
    { return 1; ;}
    break;

  case 14:
#line 248 "Gmsh.y"
    { return 1; ;}
    break;

  case 15:
#line 249 "Gmsh.y"
    { return 1; ;}
    break;

  case 16:
#line 250 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 17:
#line 251 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 18:
#line 252 "Gmsh.y"
    { return 1; ;}
    break;

  case 19:
#line 253 "Gmsh.y"
    { return 1; ;}
    break;

  case 20:
#line 254 "Gmsh.y"
    { return 1; ;}
    break;

  case 21:
#line 255 "Gmsh.y"
    { return 1; ;}
    break;

  case 22:
#line 256 "Gmsh.y"
    { return 1; ;}
    break;

  case 23:
#line 257 "Gmsh.y"
    { return 1; ;}
    break;

  case 24:
#line 258 "Gmsh.y"
    { return 1; ;}
    break;

  case 25:
#line 259 "Gmsh.y"
    { return 1; ;}
    break;

  case 26:
#line 264 "Gmsh.y"
    {
      (yyval.c) = (char*)"w";
    ;}
    break;

  case 27:
#line 268 "Gmsh.y"
    {
      (yyval.c) = (char*)"a";
    ;}
    break;

  case 28:
#line 275 "Gmsh.y"
    {
      Msg::Direct((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 29:
#line 280 "Gmsh.y"
    {
      Msg::Error((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 30:
#line 285 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(6) - (7)].c));
      FILE *fp = Fopen(tmp.c_str(), (yyvsp[(5) - (7)].c));
      if(!fp){
	yymsg(0, "Unable to open file '%s'", tmp.c_str());
      }
      else{
	fprintf(fp, "%s\n", (yyvsp[(3) - (7)].c));
	fclose(fp);
      }
      Free((yyvsp[(3) - (7)].c));
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 31:
#line 299 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = PrintListOfDouble((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Printf");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Printf", i, (i > 1) ? "s" : "");
      else
	Msg::Direct(tmpstring);
      Free((yyvsp[(3) - (7)].c));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 32:
#line 312 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = PrintListOfDouble((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Error");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Error", i, (i > 1) ? "s" : "");
      else
	Msg::Error(tmpstring);
      Free((yyvsp[(3) - (7)].c));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 33:
#line 325 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = PrintListOfDouble((yyvsp[(3) - (9)].c), (yyvsp[(5) - (9)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Printf");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Printf", i, (i > 1) ? "s" : "");
      else{
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(8) - (9)].c));
	FILE *fp = Fopen(tmp.c_str(), (yyvsp[(7) - (9)].c));
	if(!fp){
	  yymsg(0, "Unable to open file '%s'", tmp.c_str());
	}
	else{
	  fprintf(fp, "%s\n", tmpstring);
	  fclose(fp);
	}
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(8) - (9)].c));
      List_Delete((yyvsp[(5) - (9)].l));
    ;}
    break;

  case 34:
#line 353 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(1) - (6)].c), "View") && ViewData->finalize()){
	ViewData->setName((yyvsp[(2) - (6)].c));
	ViewData->setFileName(gmsh_yyname);
	ViewData->setFileIndex(gmsh_yyviewindex++);
	new PView(ViewData);
      }
      else
	delete ViewData;
#endif
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 35:
#line 367 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  new PView(PView::list[index], false);
        else
	  yymsg(0, "Unknown view %d", index);
      }
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 36:
#line 380 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  new PView(PView::list[index], true);
        else
	  yymsg(0, "Unknown view %d", index);
      }
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 37:
#line 393 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (8)].c), "View")){
	int index = (int)(yyvsp[(4) - (8)].d), index2 = (int)(yyvsp[(6) - (8)].d);
	if(index >= 0 && index < (int)PView::list.size() &&
           index2 >= 0 && index2 < (int)PView::list.size()){
          PView::list[index2]->setOptions(PView::list[index]->getOptions());
        }
        else
	  yymsg(0, "Unknown view %d or %d", index, index2);
      }
#endif
      Free((yyvsp[(2) - (8)].c));
    ;}
    break;

  case 38:
#line 411 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData = new PViewDataList();
#endif
    ;}
    break;

  case 44:
#line 425 "Gmsh.y"
    { ViewCoord.push_back((yyvsp[(1) - (1)].d)); ;}
    break;

  case 45:
#line 427 "Gmsh.y"
    { ViewCoord.push_back((yyvsp[(3) - (3)].d)); ;}
    break;

  case 46:
#line 432 "Gmsh.y"
    { if(ViewValueList) ViewValueList->push_back((yyvsp[(1) - (1)].d)); ;}
    break;

  case 47:
#line 434 "Gmsh.y"
    { if(ViewValueList) ViewValueList->push_back((yyvsp[(3) - (3)].d)); ;}
    break;

  case 48:
#line 439 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strncmp((yyvsp[(1) - (1)].c), "SP", 2)){
	ViewValueList = &ViewData->SP; ViewNumList = &ViewData->NbSP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VP", 2)){
	ViewValueList = &ViewData->VP; ViewNumList = &ViewData->NbVP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TP", 2)){
	ViewValueList = &ViewData->TP; ViewNumList = &ViewData->NbTP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SL", 2)){
	ViewValueList = &ViewData->SL; ViewNumList = &ViewData->NbSL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VL", 2)){
	ViewValueList = &ViewData->VL; ViewNumList = &ViewData->NbVL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TL", 2)){
	ViewValueList = &ViewData->TL; ViewNumList = &ViewData->NbTL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "ST", 2)){
	ViewValueList = &ViewData->ST; ViewNumList = &ViewData->NbST;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VT", 2)){
	ViewValueList = &ViewData->VT; ViewNumList = &ViewData->NbVT;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TT", 2)){
	ViewValueList = &ViewData->TT; ViewNumList = &ViewData->NbTT;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SQ", 2)){
	ViewValueList = &ViewData->SQ; ViewNumList = &ViewData->NbSQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VQ", 2)){
	ViewValueList = &ViewData->VQ; ViewNumList = &ViewData->NbVQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TQ", 2)){
	ViewValueList = &ViewData->TQ; ViewNumList = &ViewData->NbTQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SS", 2)){
	ViewValueList = &ViewData->SS; ViewNumList = &ViewData->NbSS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VS", 2)){
	ViewValueList = &ViewData->VS; ViewNumList = &ViewData->NbVS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TS", 2)){
	ViewValueList = &ViewData->TS; ViewNumList = &ViewData->NbTS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SH", 2)){
	ViewValueList = &ViewData->SH; ViewNumList = &ViewData->NbSH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VH", 2)){
	ViewValueList = &ViewData->VH; ViewNumList = &ViewData->NbVH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TH", 2)){
	ViewValueList = &ViewData->TH; ViewNumList = &ViewData->NbTH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SI", 2)){
	ViewValueList = &ViewData->SI; ViewNumList = &ViewData->NbSI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VI", 2)){
	ViewValueList = &ViewData->VI; ViewNumList = &ViewData->NbVI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TI", 2)){
	ViewValueList = &ViewData->TI; ViewNumList = &ViewData->NbTI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SY", 2)){
	ViewValueList = &ViewData->SY; ViewNumList = &ViewData->NbSY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VY", 2)){
	ViewValueList = &ViewData->VY; ViewNumList = &ViewData->NbVY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TY", 2)){
	ViewValueList = &ViewData->TY; ViewNumList = &ViewData->NbTY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else{
	yymsg(0, "Unknown element type '%s'", (yyvsp[(1) - (1)].c));
	ViewValueList = 0; ViewNumList = 0;
      }
#endif
      ViewCoord.clear();
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 49:
#line 543 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(ViewValueList){
	for(int i = 0; i < 3; i++)
	  for(unsigned int j = 0; j < ViewCoord.size() / 3; j++)
	    ViewValueList->push_back(ViewCoord[3 * j + i]);
      }
#endif
    ;}
    break;

  case 50:
#line 553 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(ViewValueList) (*ViewNumList)++;
#endif
    ;}
    break;

  case 51:
#line 562 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(1) - (1)].c)) + 1; i++) ViewData->T2C.push_back((yyvsp[(1) - (1)].c)[i]);
#endif
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 52:
#line 569 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(3) - (3)].c)) + 1; i++) ViewData->T2C.push_back((yyvsp[(3) - (3)].c)[i]);
#endif
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 53:
#line 579 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->T2D.push_back((yyvsp[(3) - (8)].d));
      ViewData->T2D.push_back((yyvsp[(5) - (8)].d));
      ViewData->T2D.push_back((yyvsp[(7) - (8)].d));
      ViewData->T2D.push_back(ViewData->T2C.size());
#endif
    ;}
    break;

  case 54:
#line 588 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->NbT2++;
#endif
    ;}
    break;

  case 55:
#line 597 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(1) - (1)].c)) + 1; i++) ViewData->T3C.push_back((yyvsp[(1) - (1)].c)[i]);
#endif
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 56:
#line 604 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(3) - (3)].c)) + 1; i++) ViewData->T3C.push_back((yyvsp[(3) - (3)].c)[i]);
#endif
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 57:
#line 614 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->T3D.push_back((yyvsp[(3) - (10)].d)); ViewData->T3D.push_back((yyvsp[(5) - (10)].d));
      ViewData->T3D.push_back((yyvsp[(7) - (10)].d)); ViewData->T3D.push_back((yyvsp[(9) - (10)].d));
      ViewData->T3D.push_back(ViewData->T3C.size());
#endif
    ;}
    break;

  case 58:
#line 622 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->NbT3++;
#endif
    ;}
    break;

  case 59:
#line 632 "Gmsh.y"
    {
#if defined(HAVE_POST)
      int type =
	(ViewData->NbSL || ViewData->NbVL) ? TYPE_LIN :
	(ViewData->NbST || ViewData->NbVT) ? TYPE_TRI :
	(ViewData->NbSQ || ViewData->NbVQ) ? TYPE_QUA :
	(ViewData->NbSS || ViewData->NbVS) ? TYPE_TET :
	(ViewData->NbSY || ViewData->NbVY) ? TYPE_PYR :
	(ViewData->NbSI || ViewData->NbVI) ? TYPE_PRI :
      	(ViewData->NbSH || ViewData->NbVH) ? TYPE_HEX :
	0;
      ViewData->setInterpolationMatrices(type, ListOfListOfDouble2Matrix((yyvsp[(3) - (8)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(6) - (8)].l)));
#endif
    ;}
    break;

  case 60:
#line 651 "Gmsh.y"
    {
#if defined(HAVE_POST)
      int type =
	(ViewData->NbSL || ViewData->NbVL) ? TYPE_LIN :
	(ViewData->NbST || ViewData->NbVT) ? TYPE_TRI :
	(ViewData->NbSQ || ViewData->NbVQ) ? TYPE_QUA :
	(ViewData->NbSS || ViewData->NbVS) ? TYPE_TET :
      	(ViewData->NbSH || ViewData->NbVH) ? TYPE_HEX :
	0;
      ViewData->setInterpolationMatrices(type, ListOfListOfDouble2Matrix((yyvsp[(3) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(6) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(9) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(12) - (14)].l)));
#endif
    ;}
    break;

  case 61:
#line 670 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewValueList = &ViewData->Time;
#endif
    ;}
    break;

  case 62:
#line 676 "Gmsh.y"
    {
    ;}
    break;

  case 63:
#line 683 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 64:
#line 684 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 65:
#line 685 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 66:
#line 686 "Gmsh.y"
    { (yyval.i) = 3; ;}
    break;

  case 67:
#line 687 "Gmsh.y"
    { (yyval.i) = 4; ;}
    break;

  case 68:
#line 691 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 69:
#line 692 "Gmsh.y"
    { (yyval.i) = -1; ;}
    break;

  case 70:
#line 698 "Gmsh.y"
    { (yyval.c) = (char*)"("; ;}
    break;

  case 71:
#line 698 "Gmsh.y"
    { (yyval.c) = (char*)"["; ;}
    break;

  case 72:
#line 699 "Gmsh.y"
    { (yyval.c) = (char*)")"; ;}
    break;

  case 73:
#line 699 "Gmsh.y"
    { (yyval.c) = (char*)"]"; ;}
    break;

  case 77:
#line 709 "Gmsh.y"
    {
      Msg::SetOnelabNumber((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].d));
      Free((yyvsp[(3) - (7)].c));
    ;}
    break;

  case 78:
#line 714 "Gmsh.y"
    {
      Msg::SetOnelabString((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].c));
      Free((yyvsp[(3) - (7)].c));
      Free((yyvsp[(5) - (7)].c));
    ;}
    break;

  case 79:
#line 720 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (4)].c)) && (yyvsp[(2) - (4)].i) && List_Nbr((yyvsp[(3) - (4)].l)) == 1){
        yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (4)].c));
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (4)].c)]);
        if(!(yyvsp[(2) - (4)].i)) s.list = (List_Nbr((yyvsp[(3) - (4)].l)) != 1); // list if 0 or > 1 elements
        if(!s.list){ // single expression
          if(List_Nbr((yyvsp[(3) - (4)].l)) != 1){
            yymsg(0, "Cannot assign list to variable '%s'", (yyvsp[(1) - (4)].c));
          }
          else{
            double d;
            List_Read((yyvsp[(3) - (4)].l), 0, &d);
            if(s.value.empty()){
              if((yyvsp[(2) - (4)].i)) yymsg(1, "Uninitialized variable '%s'", (yyvsp[(1) - (4)].c));
              s.value.resize(1, 0.);
            }
            switch((yyvsp[(2) - (4)].i)){
            case 0 : s.value[0] = d; break;
            case 1 : s.value[0] += d; break;
            case 2 : s.value[0] -= d; break;
            case 3 : s.value[0] *= d; break;
            case 4 :
              if(d) s.value[0] /= d;
              else yymsg(0, "Division by zero in '%s /= %g'", (yyvsp[(1) - (4)].c), d);
              break;
            }
          }
        }
        else{
          // list of expressions; this is not recommended (should use [] or ()
          // notation instead)
          switch((yyvsp[(2) - (4)].i)){
          case 0: // affect
            s.value.clear(); // fall-through
          case 1: // append
            for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
              double d;
              List_Read((yyvsp[(3) - (4)].l), i, &d);
              s.value.push_back(d);
            }
            break;
          case 2: // remove
            for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
              double d;
              List_Read((yyvsp[(3) - (4)].l), i, &d);
              std::vector<double>::iterator it = std::find(s.value.begin(),
                                                           s.value.end(), d);
              if(it != s.value.end()) s.value.erase(it);
            }
            break;
          default:
            yymsg(0, "Operators *= and /= not available for lists");
            break;
          }
        }
      }
      Free((yyvsp[(1) - (4)].c));
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 80:
#line 782 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (3)].c)]);
        if(!s.list && s.value.empty())
          yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (3)].c));
        else if(!s.list)
          s.value[0] += (yyvsp[(2) - (3)].i);
        else
          yymsg(0, "Variable '%s' is a list", (yyvsp[(1) - (3)].c));
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 81:
#line 799 "Gmsh.y"
    {
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
      s.list = true;
      double d;
      switch((yyvsp[(4) - (6)].i)){
      case 0: // affect
        s.value.clear(); // fall-through
      case 1: // append
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          s.value.push_back(d);
        }
        break;
      case 2: // remove
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          std::vector<double>::iterator it = std::find(s.value.begin(),
                                                       s.value.end(), d);
          if(it != s.value.end()) s.value.erase(it);
        }
        break;
      default:
        yymsg(0, "Operators *= and /= not available for lists");
        break;
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 82:
#line 828 "Gmsh.y"
    {
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
      s.list = true;
      double d;
      switch((yyvsp[(4) - (6)].i)){
      case 0: // affect
        s.value.clear(); // fall-through
      case 1: // append
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          s.value.push_back(d);
        }
        break;
      case 2: // remove
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          std::vector<double>::iterator it = std::find(s.value.begin(),
                                                       s.value.end(), d);
          if(it != s.value.end()) s.value.erase(it);
        }
        break;
      default:
        yymsg(0, "Operators *= and /= not available for lists");
        break;
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 83:
#line 857 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 84:
#line 862 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 85:
#line 867 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 86:
#line 872 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 87:
#line 877 "Gmsh.y"
    {
      assignVariables((yyvsp[(1) - (9)].c), (yyvsp[(4) - (9)].l), (yyvsp[(7) - (9)].i), (yyvsp[(8) - (9)].l));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(4) - (9)].l));
      List_Delete((yyvsp[(8) - (9)].l));
    ;}
    break;

  case 88:
#line 884 "Gmsh.y"
    {
      assignVariables((yyvsp[(1) - (9)].c), (yyvsp[(4) - (9)].l), (yyvsp[(7) - (9)].i), (yyvsp[(8) - (9)].l));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(4) - (9)].l));
      List_Delete((yyvsp[(8) - (9)].l));
    ;}
    break;

  case 89:
#line 894 "Gmsh.y"
    {
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
      s.list = true;
      double d;
      switch((yyvsp[(4) - (6)].i)){
      case 0: // affect
        s.value.clear(); // fall-through
      case 1: // append
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          s.value.push_back(d);
        }
        break;
      case 2: // remove
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          std::vector<double>::iterator it = std::find(s.value.begin(),
                                                       s.value.end(), d);
          if(it != s.value.end()) s.value.erase(it);
        }
        break;
      default:
        yymsg(0, "Operators *= and /= not available for lists");
        break;
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 90:
#line 923 "Gmsh.y"
    {
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
      s.list = true;
      double d;
      switch((yyvsp[(4) - (6)].i)){
      case 0: // affect
        s.value.clear(); // fall-through
      case 1: // append
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          s.value.push_back(d);
        }
        break;
      case 2: // remove
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          std::vector<double>::iterator it = std::find(s.value.begin(),
                                                       s.value.end(), d);
          if(it != s.value.end()) s.value.erase(it);
        }
        break;
      default:
        yymsg(0, "Operators *= and /= not available for lists");
        break;
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 91:
#line 952 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 92:
#line 957 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 93:
#line 962 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 94:
#line 967 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 95:
#line 975 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)] = std::vector<std::string>(1, (yyvsp[(3) - (4)].c));
      Free((yyvsp[(1) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 96:
#line 984 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (8)].c)] = std::vector<std::string>();
      Free((yyvsp[(1) - (8)].c));
    ;}
    break;

  case 97:
#line 990 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (8)].c)] = std::vector<std::string>();
      Free((yyvsp[(1) - (8)].c));
    ;}
    break;

  case 98:
#line 996 "Gmsh.y"
    {
      std::vector<std::string> s;
      for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
        char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
        s.push_back(*c);
        Free(*c);
      }
      gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)] = s;
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 99:
#line 1009 "Gmsh.y"
    {
      std::vector<std::string> s;
      for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
        char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
        s.push_back(*c);
        Free(*c);
      }
      gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)] = s;
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 100:
#line 1022 "Gmsh.y"
    {
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (9)].c))){
        for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
          char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
          gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)].push_back(*c);
          Free(*c);
        }
      }
      else
        yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (9)].c));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 101:
#line 1037 "Gmsh.y"
    {
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (9)].c))){
        for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
          char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
          gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)].push_back(*c);
          Free(*c);
        }
      }
      else
        yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (9)].c));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 102:
#line 1054 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (8)].c)] = std::vector<std::string>();
      Free((yyvsp[(1) - (8)].c));
    ;}
    break;

  case 103:
#line 1060 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (8)].c)] = std::vector<std::string>();
      Free((yyvsp[(1) - (8)].c));
    ;}
    break;

  case 104:
#line 1066 "Gmsh.y"
    {
      std::vector<std::string> s;
      for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
        char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
        s.push_back(*c);
        Free(*c);
      }
      gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)] = s;
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 105:
#line 1079 "Gmsh.y"
    {
      std::vector<std::string> s;
      for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
        char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
        s.push_back(*c);
        Free(*c);
      }
      gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)] = s;
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 106:
#line 1092 "Gmsh.y"
    {
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (9)].c))){
        for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
          char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
          gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)].push_back(*c);
          Free(*c);
        }
      }
      else
        yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (9)].c));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 107:
#line 1107 "Gmsh.y"
    {
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (9)].c))){
        for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
          char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
          gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)].push_back(*c);
          Free(*c);
        }
      }
      else
        yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (9)].c));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 108:
#line 1124 "Gmsh.y"
    {
      std::string tmp((yyvsp[(5) - (6)].c));
      StringOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), tmp);
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 109:
#line 1131 "Gmsh.y"
    {
      std::string tmp((yyvsp[(8) - (9)].c));
      StringOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), tmp);
      Free((yyvsp[(1) - (9)].c)); Free((yyvsp[(6) - (9)].c)); Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 110:
#line 1140 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), d)){
	switch((yyvsp[(4) - (6)].i)){
	case 0 : d = (yyvsp[(5) - (6)].d); break;
	case 1 : d += (yyvsp[(5) - (6)].d); break;
	case 2 : d -= (yyvsp[(5) - (6)].d); break;
	case 3 : d *= (yyvsp[(5) - (6)].d); break;
	case 4 :
	  if((yyvsp[(5) - (6)].d)) d /= (yyvsp[(5) - (6)].d);
	  else yymsg(0, "Division by zero in '%s.%s /= %g'", (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
	  break;
	}
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), d);
      }
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 111:
#line 1159 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), d)){
	switch((yyvsp[(7) - (9)].i)){
	case 0 : d = (yyvsp[(8) - (9)].d); break;
	case 1 : d += (yyvsp[(8) - (9)].d); break;
	case 2 : d -= (yyvsp[(8) - (9)].d); break;
	case 3 : d *= (yyvsp[(8) - (9)].d); break;
	case 4 :
	  if((yyvsp[(8) - (9)].d)) d /= (yyvsp[(8) - (9)].d);
	  else yymsg(0, "Division by zero in '%s[%d].%s /= %g'", (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].d));
	  break;
	}
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), d);
      }
      Free((yyvsp[(1) - (9)].c)); Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 112:
#line 1178 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (5)].c), 0, (yyvsp[(3) - (5)].c), d)){
	d += (yyvsp[(4) - (5)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (5)].c), 0, (yyvsp[(3) - (5)].c), d);
      }
      Free((yyvsp[(1) - (5)].c)); Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 113:
#line 1188 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (8)].c), (int)(yyvsp[(3) - (8)].d), (yyvsp[(6) - (8)].c), d)){
	d += (yyvsp[(7) - (8)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (8)].c), (int)(yyvsp[(3) - (8)].d), (yyvsp[(6) - (8)].c), d);
      }
      Free((yyvsp[(1) - (8)].c)); Free((yyvsp[(6) - (8)].c));
    ;}
    break;

  case 114:
#line 1200 "Gmsh.y"
    {
      ColorOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (8)].c), 0, (yyvsp[(5) - (8)].c), (yyvsp[(7) - (8)].u));
      Free((yyvsp[(1) - (8)].c)); Free((yyvsp[(5) - (8)].c));
    ;}
    break;

  case 115:
#line 1206 "Gmsh.y"
    {
      ColorOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (11)].c), (int)(yyvsp[(3) - (11)].d), (yyvsp[(8) - (11)].c), (yyvsp[(10) - (11)].u));
      Free((yyvsp[(1) - (11)].c)); Free((yyvsp[(8) - (11)].c));
    ;}
    break;

  case 116:
#line 1214 "Gmsh.y"
    {
      GmshColorTable *ct = GetColorTable(0);
      if(!ct)
	yymsg(0, "View[%d] does not exist", 0);
      else{
	ct->size = List_Nbr((yyvsp[(5) - (6)].l));
	if(ct->size > COLORTABLE_NBMAX_COLOR)
	  yymsg(0, "Too many (%d>%d) colors in View[%d].ColorTable",
		ct->size, COLORTABLE_NBMAX_COLOR, 0);
	else
	  for(int i = 0; i < ct->size; i++) List_Read((yyvsp[(5) - (6)].l), i, &ct->table[i]);
	if(ct->size == 1){
	  ct->size = 2;
	  ct->table[1] = ct->table[0];
	}
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 117:
#line 1235 "Gmsh.y"
    {
      GmshColorTable *ct = GetColorTable((int)(yyvsp[(3) - (9)].d));
      if(!ct)
	yymsg(0, "View[%d] does not exist", (int)(yyvsp[(3) - (9)].d));
      else{
	ct->size = List_Nbr((yyvsp[(8) - (9)].l));
	if(ct->size > COLORTABLE_NBMAX_COLOR)
	  yymsg(0, "Too many (%d>%d) colors in View[%d].ColorTable",
		   ct->size, COLORTABLE_NBMAX_COLOR, (int)(yyvsp[(3) - (9)].d));
	else
	  for(int i = 0; i < ct->size; i++) List_Read((yyvsp[(8) - (9)].l), i, &ct->table[i]);
	if(ct->size == 1){
	  ct->size = 2;
	  ct->table[1] = ct->table[0];
	}
      }
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(8) - (9)].l));
    ;}
    break;

  case 118:
#line 1258 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      if(!strcmp((yyvsp[(1) - (5)].c),"Background"))
	GModel::current()->getFields()->setBackgroundFieldId((int)(yyvsp[(4) - (5)].d));
      else if(!strcmp((yyvsp[(1) - (5)].c),"BoundaryLayer"))
	GModel::current()->getFields()->setBoundaryLayerFieldId((int)(yyvsp[(4) - (5)].d));
      else
	yymsg(0, "Unknown command %s Field", (yyvsp[(1) - (5)].c));
#endif
    ;}
    break;

  case 119:
#line 1269 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      if(!GModel::current()->getFields()->newField((int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c)))
	yymsg(0, "Cannot create field %i of type '%s'", (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c));
#endif
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 120:
#line 1277 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (9)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (9)].c)];
	if(option){
	  try { option->numericalValue((yyvsp[(8) - (9)].d)); }
	  catch(...){
	    yymsg(0, "Cannot assign a numerical value to option '%s' "
		  "in field %i of type '%s'", (yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (9)].d));
#endif
      Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 121:
#line 1299 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (9)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (9)].c)];
	if(option){
	  try { option->string((yyvsp[(8) - (9)].c)); }
	  catch (...){
	    yymsg(0, "Cannot assign a string value to  option '%s' "
		  "in field %i of type '%s'", (yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (9)].d));
#endif
      Free((yyvsp[(6) - (9)].c));
      Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 122:
#line 1322 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (11)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (11)].c)];
	if(option){
	  if (option->getType() == FIELD_OPTION_LIST) {
	    std::list<int> vl = option->list();
	    vl.clear();
	    for(int i = 0; i < List_Nbr((yyvsp[(9) - (11)].l)); i++){
	      double id;
	      List_Read((yyvsp[(9) - (11)].l), i, &id);
	      vl.push_back((int)id);
	    }
	    option->list(vl);
	  }
	  else {
	    std::list<double> vl = option->listdouble();
	    vl.clear();
	    for(int i = 0; i < List_Nbr((yyvsp[(9) - (11)].l)); i++){
	      double id;
	      List_Read((yyvsp[(9) - (11)].l), i, &id);
	      vl.push_back(id);
	    }
	    option->listdouble(vl);
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (11)].c), (int)(yyvsp[(3) - (11)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (11)].d));
#endif
      Free((yyvsp[(6) - (11)].c));
      List_Delete((yyvsp[(9) - (11)].l));
    ;}
    break;

  case 123:
#line 1360 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (7)].d));
      if(field){
        FieldCallback *callback = field->callbacks[(yyvsp[(6) - (7)].c)];
        if(callback) {
          callback->run();
        }
        else
          yymsg(0, "Unknown callback '%s' in field %i of type '%s'",
              (yyvsp[(6) - (7)].c), (int)(yyvsp[(3) - (7)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (7)].d));
#endif
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 124:
#line 1381 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
      try {
	PluginManager::instance()->setPluginOption((yyvsp[(3) - (9)].c), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].d));
      }
      catch (...) {
	yymsg(0, "Unknown option '%s' or plugin '%s'", (yyvsp[(6) - (9)].c), (yyvsp[(3) - (9)].c));
      }
#endif
      Free((yyvsp[(3) - (9)].c)); Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 125:
#line 1393 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
      try {
	PluginManager::instance()->setPluginOption((yyvsp[(3) - (9)].c), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].c));
      }
      catch (...) {
	yymsg(0, "Unknown option '%s' or plugin '%s'", (yyvsp[(6) - (9)].c), (yyvsp[(3) - (9)].c));
      }
#endif
      Free((yyvsp[(3) - (9)].c)); Free((yyvsp[(6) - (9)].c)); Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 129:
#line 1411 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (3)].c));
      std::vector<double> val(1, 0.);
      if(!gmsh_yysymbols.count(key)){
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 130:
#line 1420 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (5)].c));
      std::vector<double> val(1, (yyvsp[(5) - (5)].d));
      if(!gmsh_yysymbols.count(key)){
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 131:
#line 1429 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 132:
#line 1431 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(6) - (9)].l)) != 1)
	yymsg(1, "List notation should be used to define list '%s[]'", (yyvsp[(3) - (9)].c));
      std::string key((yyvsp[(3) - (9)].c));
      std::vector<double> val;
      for(int i = 0; i < List_Nbr((yyvsp[(6) - (9)].l)); i++){
        double d;
        List_Read((yyvsp[(6) - (9)].l), i, &d);
        val.push_back(d);
      }
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(6) - (9)].l));
    ;}
    break;

  case 133:
#line 1449 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 134:
#line 1451 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (11)].c));
      std::vector<double> val;
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (11)].l)); i++){
        double d;
        List_Read((yyvsp[(8) - (11)].l), i, &d);
        val.push_back(d);
      }
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (11)].c));
      Free((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 135:
#line 1467 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 136:
#line 1469 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (11)].c));
      std::vector<double> val;
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (11)].l)); i++){
        double d;
        List_Read((yyvsp[(8) - (11)].l), i, &d);
        val.push_back(d);
      }
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (11)].c));
      Free((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 137:
#line 1485 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (5)].c)), val((yyvsp[(5) - (5)].c));
      if(!gmsh_yystringsymbols.count(key)){
        gmsh_yystringsymbols[key] = std::vector<std::string>(1, val);
      }
      Free((yyvsp[(3) - (5)].c));
      Free((yyvsp[(5) - (5)].c));
    ;}
    break;

  case 138:
#line 1494 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 139:
#line 1496 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (9)].c)), val((yyvsp[(6) - (9)].c));
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yystringsymbols[key] = std::vector<std::string>(1, val);
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 141:
#line 1510 "Gmsh.y"
    {
      std::string name((yyvsp[(3) - (3)].c));
      Msg::UndefineOnelabParameter(name);
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 142:
#line 1518 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(doubleXstring));
      doubleXstring v = {(yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].c)};
      List_Add((yyval.l), &v);
    ;}
    break;

  case 143:
#line 1524 "Gmsh.y"
    {
      doubleXstring v = {(yyvsp[(3) - (5)].d), (yyvsp[(5) - (5)].c)};
      List_Add((yyval.l), &v);
    ;}
    break;

  case 144:
#line 1529 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(doubleXstring));
      int n = List_Nbr((yyvsp[(1) - (5)].l));
      if(!gmsh_yystringsymbols.count((yyvsp[(3) - (5)].c))){
	yymsg(0, "Unknown string variable '%s'", (yyvsp[(3) - (5)].c));
      }
      else{
        std::vector<std::string> &s(gmsh_yystringsymbols[(yyvsp[(3) - (5)].c)]);
        int m = s.size();
        if(n == m){
          for(int i = 0; i < n; i++){
            double d;
            List_Read((yyvsp[(1) - (5)].l), i, &d);
            doubleXstring v = {d, strsave((char*)s[i].c_str())};
            List_Add((yyval.l), &v);
          }
        }
        else{
          yymsg(0, "Size mismatch in enumeration: %d != %d", n, m);
        }
      }
      List_Delete((yyvsp[(1) - (5)].l));
    ;}
    break;

  case 147:
#line 1560 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (3)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (3)].l)); i++){
        double v;
        List_Read((yyvsp[(3) - (3)].l), i, &v);
        floatOptions[key].push_back(v);
      }
      Free((yyvsp[(2) - (3)].c));
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 148:
#line 1571 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (5)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
        doubleXstring v;
        List_Read((yyvsp[(4) - (5)].l), i, &v);
        floatOptions[key].push_back(v.d);
        charOptions[key].push_back(v.s);
      }
      Free((yyvsp[(2) - (5)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++)
        Free(((doubleXstring*)List_Pointer((yyvsp[(4) - (5)].l), i))->s);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 149:
#line 1586 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (3)].c));
      std::string val((yyvsp[(3) - (3)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(2) - (3)].c));
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 152:
#line 1602 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (3)].c));
      double val = (yyvsp[(3) - (3)].d);
      floatOptions[key].push_back(val);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 153:
#line 1610 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (3)].c));
      std::string val((yyvsp[(3) - (3)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(2) - (3)].c));
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 154:
#line 1619 "Gmsh.y"
    {
      std::string key("Macro");
      std::string val((yyvsp[(3) - (3)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 155:
#line 1627 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (5)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
        char *s;
        List_Read((yyvsp[(4) - (5)].l), i, &s);
        std::string val(s);
        Free(s);
        charOptions[key].push_back(val);
      }
      Free((yyvsp[(2) - (5)].c));
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 156:
#line 1645 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 157:
#line 1649 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName
        (std::string((yyvsp[(1) - (1)].c)), 0, ++GModel::current()->getGEOInternals()->MaxPhysicalNum);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 158:
#line 1655 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 0, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 159:
#line 1663 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 160:
#line 1667 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName
        (std::string((yyvsp[(1) - (1)].c)), 1, ++GModel::current()->getGEOInternals()->MaxPhysicalNum);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 161:
#line 1673 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 1, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 162:
#line 1681 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 163:
#line 1685 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName
        (std::string((yyvsp[(1) - (1)].c)), 2, ++GModel::current()->getGEOInternals()->MaxPhysicalNum);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 164:
#line 1691 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 2, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 165:
#line 1699 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 166:
#line 1703 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName
        (std::string((yyvsp[(1) - (1)].c)), 3, ++GModel::current()->getGEOInternals()->MaxPhysicalNum);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 167:
#line 1709 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), 3, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 168:
#line 1717 "Gmsh.y"
    {
      (yyval.i) = -1;
    ;}
    break;

  case 169:
#line 1721 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(4) - (5)].d);
    ;}
    break;

  case 170:
#line 1727 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++) (yyval.v)[i] = 0.;
    ;}
    break;

  case 171:
#line 1731 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++) (yyval.v)[i] = (yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 172:
#line 1738 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      double x = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[0];
      double y = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[1];
      double z = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[2];
      double lc = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[3];
      if(lc == 0.) lc = MAX_LC; // no mesh size given at the point
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addVertex(num, x, y, z, lc);
      }
      else{
        if(!myGmshSurface)
          GModel::current()->getGEOInternals()->addVertex(num, x, y, z, lc);
        else
          GModel::current()->getGEOInternals()->addVertex(num, x, y, myGmshSurface, lc);
      }
      AddToTemporaryBoundingBox(x, y, z);
      (yyval.s).Type = MSH_POINT;
      (yyval.s).Num = num;
    ;}
    break;

  case 173:
#line 1759 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addLine(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addLine(num, tags);
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_LINE;
      (yyval.s).Num = num;
    ;}
    break;

  case 174:
#line 1773 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE"){
        yymsg(0, "Spline not available with OpenCASCADE factory");
      }
      else{
        GModel::current()->getGEOInternals()->addSpline(num, tags);
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_SPLN;
      (yyval.s).Num = num;
    ;}
    break;

  case 175:
#line 1787 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (8)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (8)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(tags.size() == 3){
          GModel::current()->getOCCInternals()->addCircleArc
            (num, tags[0], tags[1], tags[2]);
        }
        else if(param.size() >= 4 && param.size() <= 6){
          double r = param[3];
          double a1 = (param.size() == 6) ? param[4] : 0.;
          double a2 = (param.size() == 6) ? param[5] :
            (param.size() == 5) ? param[4] : 2.*M_PI;
          GModel::current()->getOCCInternals()->addCircle
            (num, param[0], param[1], param[2], r, a1, a2);
        }
        else{
          yymsg(0, "Circle requires 3 points or 4 to 6 parameters");
        }
      }
      else{
        if(tags.size() == 3){
          GModel::current()->getGEOInternals()->addCircleArc
            (num, tags[0], tags[1], tags[2], (yyvsp[(7) - (8)].v)[0], (yyvsp[(7) - (8)].v)[1], (yyvsp[(7) - (8)].v)[2]);
        }
        else{
          yymsg(0, "Circle requires 3 points");
        }
      }
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SEGM_CIRC;
      (yyval.s).Num = num;
    ;}
    break;

  case 176:
#line 1822 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (8)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (8)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(tags.size() == 3){
          GModel::current()->getOCCInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[2]);
        }
        else if(tags.size() == 4){
          GModel::current()->getOCCInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[3]);
        }
        else if(param.size() >= 5 && param.size() <= 7){
          double a1 = (param.size() == 7) ? param[5] : 0.;
          double a2 = (param.size() == 7) ? param[6] :
            (param.size() == 6) ? param[5] : 2.*M_PI;
          GModel::current()->getOCCInternals()->addEllipse
            (num, param[0], param[1], param[2], param[3], param[4], a1, a2);
        }
        else{
          yymsg(0, "Ellipse requires 3 or 4 points, or 5 to 7 parameters");
        }
      }
      else{
        if(tags.size() == 4){
          GModel::current()->getGEOInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[2], tags[3], (yyvsp[(7) - (8)].v)[0], (yyvsp[(7) - (8)].v)[1], (yyvsp[(7) - (8)].v)[2]);
        }
        else{
          yymsg(0, "Ellipse requires 4 points");
        }
      }
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SEGM_ELLI;
      (yyval.s).Num = num;
    ;}
    break;

  case 177:
#line 1860 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addBSpline(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addBSpline(num, tags);
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_BSPLN;
      (yyval.s).Num = num;
    ;}
    break;

  case 178:
#line 1874 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addBezier(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addBezier(num, tags);
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_BEZIER;
      (yyval.s).Num = num;
    ;}
    break;

  case 179:
#line 1889 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (11)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (11)].l), tags);
      std::vector<double> knots; ListOfDouble2Vector((yyvsp[(8) - (11)].l), knots);
      if(factory == "OpenCASCADE"){
        yymsg(0, "Nurbs not available yet with OpenCASCADE factory");
      }
      else{
        int order = knots.size() - tags.size() - 1;
        if(order != (int)(yyvsp[(10) - (11)].d))
          yymsg(1, "Incompatible Nurbs order: using %d", order);
        GModel::current()->getGEOInternals()->addNurbs(num, tags, knots);
      }
      List_Delete((yyvsp[(6) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
      (yyval.s).Type = MSH_SEGM_NURBS;
      (yyval.s).Num = num;
    ;}
    break;

  case 180:
#line 1908 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->addCompoundLine(num, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SEGM_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 181:
#line 1917 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addWire(num, tags, false);
      }
      else{
        yymsg(0, "Wire only available using OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 182:
#line 1931 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addLineLoop(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addLineLoop(num, tags);
      }
      List_Delete((yyvsp[(7) - (8)].l));
      Free((yyvsp[(2) - (8)].c));
      (yyval.s).Type = MSH_SEGM_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 183:
#line 1946 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addPlaneSurface(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addPlaneSurface(num, tags);
      }
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 184:
#line 1960 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(6) - (8)].l), wires);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(wires.size() != 1){
          yymsg(0, "OpenCASCADE face filling requires a single line loop");
        }
        else{
          GModel::current()->getOCCInternals()->addSurfaceFilling(num, wires[0]);
        }
      }
      else{
        GModel::current()->getGEOInternals()->addSurfaceFilling(num, wires, (yyvsp[(7) - (8)].i));
      }
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SURF_REGL;
      (yyval.s).Num = num;
    ;}
    break;

  case 185:
#line 1979 "Gmsh.y"
    {
      yymsg(1, "'Ruled Surface' command is deprecated: use 'Surface' instead");
      int num = (int)(yyvsp[(4) - (9)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(7) - (9)].l), wires);
      GModel::current()->getGEOInternals()->addSurfaceFilling(num, wires, (yyvsp[(8) - (9)].i));
      List_Delete((yyvsp[(7) - (9)].l));
      (yyval.s).Type =  MSH_SURF_REGL;
      (yyval.s).Num = num;
    ;}
    break;

  case 186:
#line 1989 "Gmsh.y"
    {
      myGmshSurface = 0;
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 187:
#line 1995 "Gmsh.y"
    {
      myGmshSurface = gmshSurface::getSurface((int)(yyvsp[(3) - (4)].d));
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 188:
#line 2001 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (10)].d);
      myGmshSurface = gmshParametricSurface::NewParametricSurface(num, (yyvsp[(7) - (10)].c), (yyvsp[(8) - (10)].c), (yyvsp[(9) - (10)].c));
      (yyval.s).Type = 0;
      (yyval.s).Num = num;
    ;}
    break;

  case 189:
#line 2008 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      (yyval.s).Type = 0;
      if(param.size() == 4 || param.size() == 5){
        if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
          double alpha = (param.size() == 5) ? param[4] : 2.*M_PI;
          GModel::current()->getOCCInternals()->addSphere
            (num, param[0], param[1], param[2], param[3], alpha);
        }
        else{
          yymsg(0, "Sphere only available with OpenCASCADE factory");
        }
        (yyval.s).Type = MSH_VOLUME;
      }
      else if(tags.size() == 2){
        myGmshSurface = GModel::current()->getGEOInternals()->newGeometrySphere
          (num, tags[0], tags[1]);
      }
      else{
        yymsg(0, "Sphere requires 2 points or 4 or 5 parameters");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Num = num;
    ;}
    break;

  case 190:
#line 2035 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(tags.size() == 2){
        myGmshSurface = GModel::current()->getGEOInternals()->newGeometryPolarSphere
          (num, tags[0], tags[1]);
      }
      else{
        yymsg(0, "PolarSphere requires 2 points");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = 0;
      (yyval.s).Num = num;
    ;}
    break;

  case 191:
#line 2050 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 6){
          GModel::current()->getOCCInternals()->addBlock
            (num, param[0], param[1], param[2], param[3], param[4], param[5]);
        }
        else{
          yymsg(0, "Block requires 6 parameters");
        }
      }
      else{
        yymsg(0, "Block only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 192:
#line 2070 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 5 || param.size() == 6){
          double alpha = (param.size() == 6) ? param[5] : 2*M_PI;
          GModel::current()->getOCCInternals()->addTorus
            (num, param[0], param[1], param[2], param[3], param[4], alpha);
        }
        else{
          yymsg(0, "Torus requires 5 ou 6 parameters");
        }
      }
      else{
        yymsg(0, "Torus only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 193:
#line 2091 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 6 || param.size() == 7){
          double r = (param.size() == 7) ? param[6] : 0.;
          GModel::current()->getOCCInternals()->addRectangle
            (num, param[0], param[1], param[2], param[3], param[4], param[5], r);
        }
        else{
          yymsg(0, "Rectangle requires 6 ou 7 parameters");
        }
      }
      else{
        yymsg(0, "Rectangle only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 194:
#line 2112 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 4 || param.size() == 5){
          double ry = (param.size() == 5) ? param[4] : param[3];
          GModel::current()->getOCCInternals()->addDisk
            (num, param[0], param[1], param[2], param[3], ry);
        }
        else{
          yymsg(0, "Disk requires 4 or 5 parameters");
        }
      }
      else{
        yymsg(0, "Disk only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 195:
#line 2133 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 7 || param.size() == 8){
          double angle = (param.size() == 8) ? param[7] : 2*M_PI;
          GModel::current()->getOCCInternals()->addCylinder
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6], angle);
        }
        else{
          yymsg(0, "Cylinder requires 7 or 8 parameters");
        }
      }
      else{
        yymsg(0, "Cylinder only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 196:
#line 2155 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 8 || param.size() == 9){
          double alpha = (param.size() == 9) ? param[8] : 2*M_PI;
          GModel::current()->getOCCInternals()->addCone
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6], param[7], alpha);
        }
        else{
          yymsg(0, "Cone requires 8 or 9 parameters");
        }
      }
      else{
        yymsg(0, "Cone only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 197:
#line 2177 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 7){
          GModel::current()->getOCCInternals()->addWedge
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6]);
        }
        else{
          yymsg(0, "Wedge requires 7 parameters");
        }
      }
      else{
        yymsg(0, "Wedge only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 198:
#line 2198 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() >= 2){
          int in = (int)param[0];
          double offset = param[1];
          std::vector<int> exclude;
          for(unsigned int i = 2; i < param.size(); i++)
            exclude.push_back(param[i]);
          GModel::current()->getOCCInternals()->addThickSolid
            (num, in, exclude, offset);
        }
        else{
          yymsg(0, "ThickSolid requires at least 2 parameters");
        }
      }
      else{
        yymsg(0, "ThickSolid only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
    ;}
    break;

  case 199:
#line 2221 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->addCompoundSurface(num, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SURF_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 200:
#line 2231 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (12)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (12)].l), tags);
      std::vector<int> bndTags[4];
      for(int i = 0; i < List_Nbr((yyvsp[(10) - (12)].l)); i++){
        if(i < 4)
          ListOfDouble2Vector(*(List_T**)List_Pointer((yyvsp[(10) - (12)].l), i), bndTags[i]);
        else
          break;
      }
      GModel::current()->getGEOInternals()->addCompoundSurface(num, tags, bndTags);
      List_Delete((yyvsp[(7) - (12)].l));
      Free((yyvsp[(8) - (12)].c));
      for (int i = 0; i < List_Nbr((yyvsp[(10) - (12)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(10) - (12)].l), i));
      List_Delete((yyvsp[(10) - (12)].l));
      (yyval.s).Type = MSH_SURF_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 201:
#line 2251 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addSurfaceLoop(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addSurfaceLoop(num, tags);
      }
      List_Delete((yyvsp[(7) - (8)].l));
      Free((yyvsp[(2) - (8)].c));
      (yyval.s).Type = MSH_SURF_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 202:
#line 2266 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addVolume(num, tags);
      }
      else{
        GModel::current()->getGEOInternals()->addVolume(num, tags);
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 203:
#line 2280 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> wires, out[4]; ListOfDouble2Vector((yyvsp[(6) - (7)].l), wires);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addThruSections
          (num, wires, out, true, false);
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 204:
#line 2295 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> wires, out[4]; ListOfDouble2Vector((yyvsp[(7) - (8)].l), wires);
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->addThruSections
          (num, wires, out, true, true);
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 205:
#line 2310 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->addCompoundVolume(num, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_VOLUME_COMPOUND;
      (yyval.s).Num = num;
    ;}
    break;

  case 206:
#line 2319 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].i);
      int op = (yyvsp[(6) - (8)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->modifyPhysicalGroup(0, num, op, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_PHYSICAL_POINT;
      (yyval.s).Num = num;
    ;}
    break;

  case 207:
#line 2329 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].i);
      int op = (yyvsp[(6) - (8)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->modifyPhysicalGroup(1, num, op, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_PHYSICAL_LINE;
      (yyval.s).Num = num;
    ;}
    break;

  case 208:
#line 2339 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].i);
      int op = (yyvsp[(6) - (8)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->modifyPhysicalGroup(2, num, op, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_PHYSICAL_SURFACE;
      (yyval.s).Num = num;
    ;}
    break;

  case 209:
#line 2349 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].i);
      int op = (yyvsp[(6) - (8)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      GModel::current()->getGEOInternals()->modifyPhysicalGroup(3, num, op, tags);
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_PHYSICAL_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 210:
#line 2364 "Gmsh.y"
    {
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(4) - (5)].l), tags);
        GModel::current()->getOCCInternals()->translate(tags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2]);
      }
      else{
        TranslateShapes((yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], (yyvsp[(4) - (5)].l));
      }
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 211:
#line 2375 "Gmsh.y"
    {
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(10) - (11)].l), tags);
        GModel::current()->getOCCInternals()->rotate(tags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2],
                                                     (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d));
      }
      else{
        RotateShapes((yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(7) - (11)].d), (yyvsp[(10) - (11)].l));
      }
      (yyval.l) = (yyvsp[(10) - (11)].l);
    ;}
    break;

  case 212:
#line 2387 "Gmsh.y"
    {
      if(factory == "OpenCASCADE"){
        Msg::Error("Symmetry not implemented yet with OpenCASCADE factory");
      }
      else{
        SymmetryShapes((yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], (yyvsp[(2) - (5)].v)[3], (yyvsp[(4) - (5)].l));
      }
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 213:
#line 2397 "Gmsh.y"
    {
      if(factory == "OpenCASCADE"){
        Msg::Error("Dilate not implemented yet with OpenCASCADE factory");
      }
      else{
        DilatShapes((yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d), (yyvsp[(8) - (9)].l));
      }
      (yyval.l) = (yyvsp[(8) - (9)].l);
    ;}
    break;

  case 214:
#line 2407 "Gmsh.y"
    {
      if(factory == "OpenCASCADE"){
        Msg::Error("Dilate not implemented yet with OpenCASCADE factory");
      }
      else{
        DilatShapes((yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].v)[0], (yyvsp[(5) - (9)].v)[1], (yyvsp[(5) - (9)].v)[2], (yyvsp[(8) - (9)].l));
      }
      (yyval.l) = (yyvsp[(8) - (9)].l);
    ;}
    break;

  case 215:
#line 2417 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 3, sizeof(Shape));
      if(!strcmp((yyvsp[(1) - (4)].c), "Duplicata")){
        if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
          std::vector<int> in[4], out[4]; ListOfShapes2Vectors((yyvsp[(3) - (4)].l), in);
          GModel::current()->getOCCInternals()->copy(in, out);
          Vectors2ListOfShapes(out, (yyval.l));
        }
        else{
          for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
            Shape TheShape;
            List_Read((yyvsp[(3) - (4)].l), i, &TheShape);
            CopyShape(TheShape.Type, TheShape.Num, &TheShape.Num);
            List_Add((yyval.l), &TheShape);
          }
        }
      }
      else if(!strcmp((yyvsp[(1) - (4)].c), "Boundary") || !strcmp((yyvsp[(1) - (4)].c), "CombinedBoundary")){
        if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
          std::vector<int> in[4], out[4]; ListOfShapes2Vectors((yyvsp[(3) - (4)].l), in);
          GModel::current()->getOCCInternals()->getBoundary
            (in, out, !strcmp((yyvsp[(1) - (4)].c), "CombinedBoundary") ? true : false);
          Vectors2ListOfShapes(out, (yyval.l));
        }
        else{
          BoundaryShapes((yyvsp[(3) - (4)].l), (yyval.l), !strcmp((yyvsp[(1) - (4)].c), "CombinedBoundary") ? true : false);
        }
      }
      else{
        yymsg(0, "Unknown command on multiple shapes: '%s'", (yyvsp[(1) - (4)].c));
      }
      Free((yyvsp[(1) - (4)].c));
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 216:
#line 2452 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE"){
        yymsg(0, "Intersect Line not available with OpenCASCADE");
      }
      else{
        IntersectCurvesWithSurface((yyvsp[(4) - (9)].l), (int)(yyvsp[(8) - (9)].d), (yyval.l));
      }
      List_Delete((yyvsp[(4) - (9)].l));
    ;}
    break;

  case 217:
#line 2463 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape*));
      if(factory == "OpenCASCADE"){
        yymsg(0, "Split Line not available with OpenCASCADE");
      }
      else{
        List_T *tmp = ListOfDouble2ListOfInt((yyvsp[(7) - (9)].l));
        SplitCurve((int)(yyvsp[(4) - (9)].d), tmp, (yyval.l));
        List_Delete(tmp);
      }
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 218:
#line 2478 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 219:
#line 2479 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 220:
#line 2484 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 3, sizeof(Shape));
    ;}
    break;

  case 221:
#line 2488 "Gmsh.y"
    {
      List_Add((yyval.l), &(yyvsp[(2) - (2)].s));
    ;}
    break;

  case 222:
#line 2492 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        s.Type = MSH_POINT;
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 223:
#line 2503 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        s.Type = MSH_SEGM_LINE;
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 224:
#line 2514 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        s.Type = MSH_SURF_PLAN; // we don't care about the actual type
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 225:
#line 2525 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        s.Type = MSH_VOLUME;
        List_Add((yyval.l), &s);
      }
    ;}
    break;

  case 226:
#line 2541 "Gmsh.y"
    {
#if defined(HAVE_DINTEGRATION)
      if(List_Nbr((yyvsp[(7) - (8)].l)) == 4){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[4];
          for(int i = 0; i < 4; i++)
            List_Read((yyvsp[(7) - (8)].l), i, &d[i]);
          gLevelset *ls = new gLevelsetPlane(d[0], d[1], d[2], d[3], t);
          LevelSet *l = Create_LevelSet(ls->getTag(), ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else
        yymsg(0, "Wrong levelset definition (%d)", (yyvsp[(4) - (8)].d));
      List_Delete((yyvsp[(7) - (8)].l));
#endif
    ;}
    break;

  case 227:
#line 2563 "Gmsh.y"
    {
#if defined(HAVE_DINTEGRATION)
      int t = (int)(yyvsp[(4) - (10)].d);
      if(FindLevelSet(t)){
	yymsg(0, "Levelset %d already exists", t);
      }
      else {
	//Msg::Info("nb = %d \n",List_Nbr($8) );
	fullMatrix<double> centers(List_Nbr((yyvsp[(8) - (10)].l)),3);
	for (int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++){
	  List_T *l = *(List_T**)List_Pointer((yyvsp[(8) - (10)].l), i);
	  for (int j = 0; j < List_Nbr(l); j++){
	    //Msg::Info("nb j = %d \n",List_Nbr(l) );
	    centers(i,j) = (double)(*(double*)List_Pointer(l, j));
	  }
	}
        gLevelset *ls = new gLevelsetPoints(centers, t);
        LevelSet *l = Create_LevelSet(ls->getTag(), ls);
        Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(8) - (10)].l), i));
      List_Delete((yyvsp[(8) - (10)].l));
#endif
    ;}
    break;

  case 228:
#line 2590 "Gmsh.y"
    {
#if defined(HAVE_DINTEGRATION)
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 0){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double n[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetPlane(pt, n, t);
          LevelSet *l = Create_LevelSet(ls->getTag(), ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else
        yymsg(0, "Wrong levelset definition (%d)", (yyvsp[(4) - (14)].d));
      List_Delete((yyvsp[(12) - (14)].l));
#endif
    ;}
    break;

  case 229:
#line 2612 "Gmsh.y"
    {
#if defined(HAVE_DINTEGRATION)
      if(List_Nbr((yyvsp[(14) - (16)].l)) == 0){
        int t = (int)(yyvsp[(4) - (16)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double pt1[3] = {(yyvsp[(8) - (16)].v)[0], (yyvsp[(8) - (16)].v)[1], (yyvsp[(8) - (16)].v)[2]};
          double pt2[3] = {(yyvsp[(10) - (16)].v)[0], (yyvsp[(10) - (16)].v)[1], (yyvsp[(10) - (16)].v)[2]};
          double pt3[3] = {(yyvsp[(12) - (16)].v)[0], (yyvsp[(12) - (16)].v)[1], (yyvsp[(12) - (16)].v)[2]};
          gLevelset *ls = new gLevelsetPlane(pt1, pt2, pt3, t);
          LevelSet *l = Create_LevelSet(ls->getTag(), ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else
        yymsg(0, "Wrong levelset definition (%d)", (yyvsp[(4) - (16)].d));
      List_Delete((yyvsp[(14) - (16)].l));
#endif
    ;}
    break;

  case 230:
#line 2634 "Gmsh.y"
    {
#if defined(HAVE_DINTEGRATION)
      if(List_Nbr((yyvsp[(10) - (12)].l)) == 1){
        int t = (int)(yyvsp[(4) - (12)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(10) - (12)].l), 0, &d);
          gLevelset *ls = new gLevelsetSphere((yyvsp[(8) - (12)].v)[0], (yyvsp[(8) - (12)].v)[1], (yyvsp[(8) - (12)].v)[2], d, t);
          LevelSet *l = Create_LevelSet(ls->getTag(), ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else
        yymsg(0, "Wrong levelset definition (%d)", (yyvsp[(4) - (12)].d));
      List_Delete((yyvsp[(10) - (12)].l));
#endif
    ;}
    break;

  case 231:
#line 2656 "Gmsh.y"
    {
#if defined(HAVE_DINTEGRATION)
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 1){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(12) - (14)].l), 0, &d);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetGenCylinder(pt, dir, d, t);
          LevelSet *l = Create_LevelSet(ls->getTag(), ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else if(List_Nbr((yyvsp[(12) - (14)].l)) == 2){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[2];
          for(int i = 0; i < 2; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCylinder(pt, dir, d[0], d[1], t);
          LevelSet *l = Create_LevelSet(ls->getTag(), ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else if(List_Nbr((yyvsp[(12) - (14)].l)) == 3){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[3];
          for(int i = 0; i < 3; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCylinder(pt, dir, d[0], d[1], d[2], t);
          LevelSet *l = Create_LevelSet(ls->getTag(), ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else
        yymsg(0, "Wrong levelset definition (%d)", (yyvsp[(4) - (14)].d));
      List_Delete((yyvsp[(12) - (14)].l));
#endif
    ;}
    break;

  case 232:
#line 2712 "Gmsh.y"
    {
#if defined(HAVE_DINTEGRATION)
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 1){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(12) - (14)].l), 0, &d);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCone(pt, dir, d, t);
          LevelSet *l = Create_LevelSet(ls->getTag(), ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else
        yymsg(0, "Wrong levelset definition (%d)", (yyvsp[(4) - (14)].d));
      List_Delete((yyvsp[(12) - (14)].l));
#endif
    ;}
    break;

  case 233:
#line 2736 "Gmsh.y"
    {
#if defined(HAVE_DINTEGRATION)
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 3){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[3];
          for(int i = 0; i < 3; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetEllipsoid(pt, dir, d[0], d[1], d[2], t);
          LevelSet *l = Create_LevelSet(ls->getTag(), ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else
        yymsg(0, "Wrong levelset definition (%d)", (yyvsp[(4) - (14)].d));
      List_Delete((yyvsp[(12) - (14)].l));
#endif
    ;}
    break;

  case 234:
#line 2761 "Gmsh.y"
    {
#if defined(HAVE_DINTEGRATION)
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 5){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[5];
          for(int i = 0; i < 5; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetGeneralQuadric(pt, dir, d[0], d[1],
                                                      d[2], d[3], d[4], t);
          LevelSet *l = Create_LevelSet(ls->getTag(), ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else
        yymsg(0, "Wrong levelset definition (%d)", (yyvsp[(4) - (14)].d));
      List_Delete((yyvsp[(12) - (14)].l));
#endif
    ;}
    break;

  case 235:
#line 2786 "Gmsh.y"
    {
#if defined(HAVE_DINTEGRATION)
      if(!strcmp((yyvsp[(2) - (8)].c), "Union")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            LevelSet *pl = FindLevelSet((int)d);
	    if(!pl) yymsg(0, "Levelset Union %d : unknown levelset %d", t, (int)d);
            else vl.push_back(pl->ls);
          }
          gLevelset *ls = new gLevelsetUnion(vl, true);
          LevelSet *l = Create_LevelSet(t, ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Intersection")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            LevelSet *pl = FindLevelSet((int)d);
	    if(!pl) yymsg(0, "Levelset Intersection %d : unknown levelset %d", t, (int)d);
            else vl.push_back(pl->ls);
          }
          gLevelset *ls = new gLevelsetIntersection(vl, true);
          LevelSet *l = Create_LevelSet(t, ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Cut")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            LevelSet *pl = FindLevelSet((int)d);
	    if(!pl) yymsg(0, "Levelset Cut %d : unknown levelset %d", t, (int)d);
            else vl.push_back(pl->ls);
          }
          gLevelset *ls = new gLevelsetCut(vl, true);
          LevelSet *l = Create_LevelSet(t, ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Crack")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            LevelSet *pl = FindLevelSet((int)d);
	    if(!pl) yymsg(0, "Levelset Crack %d : unknown levelset %d", t, (int)d);
            else vl.push_back(pl->ls);
          }
          gLevelset *ls = new gLevelsetCrack(vl);
          LevelSet *l = Create_LevelSet(t, ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Reverse")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(7) - (8)].l), 0, &d);
          LevelSet *pl = FindLevelSet((int)d);
          gLevelset *ls = NULL;
          if(!pl) yymsg(0, "Levelset Reverse %d : unknown levelset %d", t, (int)d);
          else ls = new gLevelsetReverse(pl->ls);
          LevelSet *l = Create_LevelSet(t, ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
#if defined(HAVE_POST)
      else if(!strcmp((yyvsp[(2) - (8)].c), "PostView")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          if(List_Nbr((yyvsp[(7) - (8)].l)) > 0){
            double d; List_Read((yyvsp[(7) - (8)].l), 0, &d);
            gLevelset *ls = new gLevelsetPostView((int)d, t);
            LevelSet *l = Create_LevelSet(ls->getTag(), ls);
            Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
          }
        }
      }
#endif
      else
        yymsg(0, "Wrong levelset definition (%d)", (yyvsp[(4) - (8)].d));
      Free((yyvsp[(2) - (8)].c));
      List_Delete((yyvsp[(7) - (8)].l));
#endif
    ;}
    break;

  case 236:
#line 2899 "Gmsh.y"
    {
#if defined(HAVE_DINTEGRATION)
      if(!strcmp((yyvsp[(2) - (8)].c), "MathEval")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(FindLevelSet(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          gLevelset *ls = new gLevelsetMathEval((yyvsp[(7) - (8)].c), t);
          LevelSet *l = Create_LevelSet(ls->getTag(), ls);
          Tree_Add(GModel::current()->getGEOInternals()->LevelSets, &l);
        }
      }
      else
        yymsg(0, "Wrong levelset definition");
      Free((yyvsp[(2) - (8)].c)); Free((yyvsp[(7) - (8)].c));
#endif
    ;}
    break;

  case 237:
#line 2918 "Gmsh.y"
    {
#if defined(HAVE_DINTEGRATION)
      if(!strcmp((yyvsp[(2) - (6)].c), "CutMesh")){
        int t = (int)(yyvsp[(4) - (6)].d);
        GModel *GM = GModel::current();
        if(FindLevelSet(t)){
          GM->buildCutGModel(FindLevelSet(t)->ls, true, false);
          GM->setVisibility(0);
        }
        else
          yymsg(0, "Unknown levelset (%d)", t);
      }
      else if(!strcmp((yyvsp[(2) - (6)].c), "CutMeshTri")){
        int t = (int)(yyvsp[(4) - (6)].d);
        GModel *GM = GModel::current();
        if(FindLevelSet(t)){
          GM->buildCutGModel(FindLevelSet(t)->ls, true, true);
          GM->setVisibility(0);
        }
        else
          yymsg(0, "Unknown levelset (%d)", t);
      }
      else if(!strcmp((yyvsp[(2) - (6)].c), "SplitMesh")){
        int t = (int)(yyvsp[(4) - (6)].d);
        GModel *GM = GModel::current();
        if(FindLevelSet(t)){
          GM->buildCutGModel(FindLevelSet(t)->ls, false, true);
          GM->setVisibility(0);
        }
        else
          yymsg(0, "Unknown levelset (%d)", t);
      }
      else
        yymsg(0, "Wrong levelset definition");
      Free((yyvsp[(2) - (6)].c));
#endif
    ;}
    break;

  case 238:
#line 2961 "Gmsh.y"
    {
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> tags[4]; ListOfShapes2Vectors((yyvsp[(3) - (4)].l), tags);
        GModel::current()->getOCCInternals()->remove(tags);
      }
      // FIXME use GEOInternals + int api
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        Shape TheShape;
        List_Read((yyvsp[(3) - (4)].l), i, &TheShape);
        DeleteShape(TheShape.Type, TheShape.Num);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 239:
#line 2975 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      GModel::current()->getFields()->deleteField((int)(yyvsp[(4) - (6)].d));
#endif
    ;}
    break;

  case 240:
#line 2981 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  delete PView::list[index];
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command 'Delete %s'", (yyvsp[(2) - (6)].c));
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 241:
#line 2996 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Meshes") || !strcmp((yyvsp[(2) - (3)].c), "All")){
        ClearProject();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Model")){
	GModel::current()->destroy(true); // destroy, but keep name/filename
	GModel::current()->getGEOInternals()->destroy();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Physicals")){
	GModel::current()->getGEOInternals()->resetPhysicalGroups();
	GModel::current()->deletePhysicalGroups();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Variables")){
	gmsh_yysymbols.clear();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Options")){
        ReInitOptions(0);
        InitOptionsGUI(0);
      }
      else{
	if(gmsh_yysymbols.count((yyvsp[(2) - (3)].c)))
	  gmsh_yysymbols.erase((yyvsp[(2) - (3)].c));
	else
	  yymsg(0, "Unknown object or expression to delete '%s'", (yyvsp[(2) - (3)].c));
      }
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 242:
#line 3024 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (4)].c), "Empty") && !strcmp((yyvsp[(3) - (4)].c), "Views")){
	for(int i = PView::list.size() - 1; i >= 0; i--)
	  if(PView::list[i]->getData()->empty()) delete PView::list[i];
      }
      else
	yymsg(0, "Unknown command 'Delete %s %s'", (yyvsp[(2) - (4)].c), (yyvsp[(3) - (4)].c));
#endif
      Free((yyvsp[(2) - (4)].c)); Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 243:
#line 3041 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
	Shape TheShape;
	List_Read((yyvsp[(4) - (5)].l), i, &TheShape);
	ColorShape(TheShape.Type, TheShape.Num, (yyvsp[(2) - (5)].u), false);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 244:
#line 3050 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
	Shape TheShape;
	List_Read((yyvsp[(5) - (6)].l), i, &TheShape);
	ColorShape(TheShape.Type, TheShape.Num, (yyvsp[(3) - (6)].u), true);
      }
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 245:
#line 3064 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
	Shape TheShape;
	List_Read((yyvsp[(4) - (5)].l), i, &TheShape);
	SetPartition(TheShape.Type, TheShape.Num, (yyvsp[(2) - (5)].d));
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 246:
#line 3078 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++)
	VisibilityShape((yyvsp[(2) - (3)].c), i, 1, false);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 247:
#line 3084 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++)
	VisibilityShape((yyvsp[(2) - (3)].c), i, 0, false);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 248:
#line 3090 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
	Shape TheShape;
	List_Read((yyvsp[(3) - (4)].l), i, &TheShape);
	VisibilityShape(TheShape.Type, TheShape.Num, 1, false);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 249:
#line 3099 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
	Shape TheShape;
	List_Read((yyvsp[(4) - (5)].l), i, &TheShape);
	VisibilityShape(TheShape.Type, TheShape.Num, 1, true);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 250:
#line 3108 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
	Shape TheShape;
	List_Read((yyvsp[(3) - (4)].l), i, &TheShape);
	VisibilityShape(TheShape.Type, TheShape.Num, 0, false);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 251:
#line 3117 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
	Shape TheShape;
	List_Read((yyvsp[(4) - (5)].l), i, &TheShape);
	VisibilityShape(TheShape.Type, TheShape.Num, 0, true);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 252:
#line 3131 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (3)].c), "Include")){
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	Msg::StatusBar(true, "Reading '%s'...", tmp.c_str());
	// Warning: we explicitly ask ParseFile not to fclose() the included
        // file, in order to allow user functions definitions in these files.
        // The files will be closed in the next time OpenFile terminates. If
        // you need to include many many files and don't have functions in
        // the files, use "Merge" instead of "Include", as some OSes limit
        // the number of files a process can open simultaneously. (A better
        // solution would be to modify FunctionManager to reopen the files
        // instead of using the FILE pointer...)
	ParseFile(tmp, false, true);
	SetBoundingBox();
	Msg::StatusBar(true, "Done reading '%s'", tmp.c_str());
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Print")){
	// make sure we have the latest data from CAD internals in GModel (fixes
	// bug where we would have no geometry in the picture if the print
	// command is in the same file as the geometry)
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateOutputFile(tmp, CTX::instance()->print.fileFormat);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Save")){
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateOutputFile(tmp, CTX::instance()->mesh.fileFormat);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Merge") || !strcmp((yyvsp[(1) - (3)].c), "MergeWithBoundingBox")){
	// sync CAD internals here, so that if we e.g. import a STEP file, we
        // have the correct entity tags and the numberings don't clash
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	MergeFile(tmp, true);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "NonBlockingSystemCall")){
	SystemCall((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "System") || !strcmp((yyvsp[(1) - (3)].c), "SystemCall")){
	SystemCall((yyvsp[(2) - (3)].c), true);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SetName")){
	GModel::current()->setName((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "CreateDir")){
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateSingleDir(tmp);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "OnelabRun")){
        Msg::RunOnelabClient((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "OptimizeMesh")){
        GModel::current()->optimizeMesh((yyvsp[(2) - (3)].c));
      }
      else{
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (3)].c));
      }
      Free((yyvsp[(1) - (3)].c)); Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 253:
#line 3204 "Gmsh.y"
    {
      int n = List_Nbr((yyvsp[(3) - (5)].l));
      if(n == 1){
        char *s; List_Read((yyvsp[(3) - (5)].l), 0, &s);
        Msg::RunOnelabClient(s);
        Free(s);
      }
      else if(n == 2){
        char *s, *t; List_Read((yyvsp[(3) - (5)].l), 0, &s); List_Read((yyvsp[(3) - (5)].l), 1, &t);
        Msg::RunOnelabClient(s, t);
        Free(s); Free(t);
      }
      else{
        yymsg(0, "OnelabRun takes one or two arguments");
      }
      List_Delete((yyvsp[(3) - (5)].l));
    ;}
    break;

  case 254:
#line 3222 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(1) - (7)].c), "Save") && !strcmp((yyvsp[(2) - (7)].c), "View")){
	int index = (int)(yyvsp[(4) - (7)].d);
	if(index >= 0 && index < (int)PView::list.size()){
          std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(6) - (7)].c));
	  PView::list[index]->write(tmp, CTX::instance()->post.fileFormat);
	}
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (7)].c));
#endif
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(2) - (7)].c)); Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 255:
#line 3239 "Gmsh.y"
    {
#if defined(HAVE_POST) && defined(HAVE_MESH)
      if(!strcmp((yyvsp[(1) - (7)].c), "Background") && !strcmp((yyvsp[(2) - (7)].c), "Mesh")  && !strcmp((yyvsp[(3) - (7)].c), "View")){
	int index = (int)(yyvsp[(5) - (7)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  GModel::current()->getFields()->setBackgroundMesh(index);
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (7)].c));
#endif
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(2) - (7)].c)); Free((yyvsp[(3) - (7)].c));
    ;}
    break;

  case 256:
#line 3254 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (3)].c), "Sleep")){
	SleepInSeconds((yyvsp[(2) - (3)].d));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Remesh")){
	yymsg(0, "Surface remeshing must be reinterfaced");
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Mesh")){
	int lock = CTX::instance()->lock;
	CTX::instance()->lock = 0;
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
	GModel::current()->mesh((int)(yyvsp[(2) - (3)].d));
	CTX::instance()->lock = lock;
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SetOrder")){
#if defined(HAVE_MESH)
        SetOrderN(GModel::current(), (yyvsp[(2) - (3)].d), CTX::instance()->mesh.secondOrderLinear,
                  CTX::instance()->mesh.secondOrderIncomplete,
                  CTX::instance()->mesh.meshOnlyVisible);
#endif
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "PartitionMesh")){
        GModel::current()->partitionMesh((yyvsp[(2) - (3)].d));
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (3)].c));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 257:
#line 3287 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
       try {
	 PluginManager::instance()->action((yyvsp[(3) - (7)].c), (yyvsp[(6) - (7)].c), 0);
       }
       catch(...) {
	 yymsg(0, "Unknown action '%s' or plugin '%s'", (yyvsp[(6) - (7)].c), (yyvsp[(3) - (7)].c));
       }
#endif
       Free((yyvsp[(3) - (7)].c)); Free((yyvsp[(6) - (7)].c));
     ;}
    break;

  case 258:
#line 3299 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (3)].c), "ElementsFromAllViews"))
	PView::combine(false, 1, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "ElementsFromVisibleViews"))
	PView::combine(false, 0, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "ElementsByViewName"))
	PView::combine(false, 2, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsFromAllViews"))
	PView::combine(true, 1, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsFromVisibleViews"))
	PView::combine(true, 0, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsByViewName"))
	PView::combine(true, 2, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "Views"))
	PView::combine(false, 1, CTX::instance()->post.combineRemoveOrig);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeSteps"))
	PView::combine(true, 2, CTX::instance()->post.combineRemoveOrig);
      else
	yymsg(0, "Unknown 'Combine' command");
#endif
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 259:
#line 3323 "Gmsh.y"
    {
      Msg::Exit(0);
    ;}
    break;

  case 260:
#line 3327 "Gmsh.y"
    {
      gmsh_yyerrorstate = 999; // this will be checked when yyparse returns
      YYABORT;
    ;}
    break;

  case 261:
#line 3332 "Gmsh.y"
    {
      // force sync
      if(GModel::current()->getOCCInternals())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      GModel::current()->getGEOInternals()->synchronize(GModel::current());
    ;}
    break;

  case 262:
#line 3339 "Gmsh.y"
    {
      new GModel();
      GModel::current(GModel::list.size() - 1);
    ;}
    break;

  case 263:
#line 3344 "Gmsh.y"
    {
      CTX::instance()->forcedBBox = 0;
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      SetBoundingBox();
    ;}
    break;

  case 264:
#line 3354 "Gmsh.y"
    {
      CTX::instance()->forcedBBox = 1;
      SetBoundingBox((yyvsp[(3) - (15)].d), (yyvsp[(5) - (15)].d), (yyvsp[(7) - (15)].d), (yyvsp[(9) - (15)].d), (yyvsp[(11) - (15)].d), (yyvsp[(13) - (15)].d));
    ;}
    break;

  case 265:
#line 3359 "Gmsh.y"
    {
#if defined(HAVE_OPENGL)
      drawContext::global()->draw();
#endif
    ;}
    break;

  case 266:
#line 3365 "Gmsh.y"
    {
#if defined(HAVE_OPENGL)
     CTX::instance()->mesh.changed = ENT_ALL;
     for(unsigned int index = 0; index < PView::list.size(); index++)
       PView::list[index]->setChanged(true);
#endif
    ;}
    break;

  case 267:
#line 3373 "Gmsh.y"
    {
      GModel::current()->createTopologyFromMesh();
    ;}
    break;

  case 268:
#line 3377 "Gmsh.y"
    {
      GModel::current()->createTopologyFromMesh(1);
    ;}
    break;

  case 269:
#line 3381 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      GModel::current()->refineMesh(CTX::instance()->mesh.secondOrderLinear);
    ;}
    break;

  case 270:
#line 3391 "Gmsh.y"
    {
      int lock = CTX::instance()->lock;
      CTX::instance()->lock = 0;
      std::vector<int> technique;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (16)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (16)].l), i, &d);
        technique.push_back((int)d);
      }
      if(technique.empty()){
        yyerror("Need at least one adaptation technique");
      }
      else{
        std::vector<simpleFunction<double>*> f;
        for(int i = 0; i < List_Nbr((yyvsp[(6) - (16)].l)); i++){
          double d;
          List_Read((yyvsp[(6) - (16)].l), i, &d);
          LevelSet *l = FindLevelSet((int)d);
          if(l) f.push_back(l->ls);
          else yymsg(0, "Unknown Levelset %d", (int)d);
        }
        if(technique.size() != f.size()){
          yyerror("Number of techniques != number of levelsets");
        }
        else{
          if(List_Nbr((yyvsp[(9) - (16)].l)) != (int)f.size()){
            yyerror("Number of parameters != number of levelsets");
          }
          else{
            std::vector<std::vector<double> > parameters;
            parameters.resize(List_Nbr((yyvsp[(9) - (16)].l)));
            for(int i = 0; i < List_Nbr((yyvsp[(9) - (16)].l)); i++){
              List_T *l = *(List_T**)List_Pointer((yyvsp[(9) - (16)].l), i);
              for(int j = 0; j < List_Nbr(l); j++){
                double d;
                List_Read(l, j, &d);
                parameters[i].push_back(d);
              }
            }
            int niter = (int)(yyvsp[(12) - (16)].d);
            bool meshAll = ((yyvsp[(14) - (16)].d) == 0) ? false : true;
            if(GModel::current()->getOCCInternals() &&
               GModel::current()->getOCCInternals()->getChanged())
              GModel::current()->getOCCInternals()->synchronize(GModel::current());
            if(GModel::current()->getGEOInternals()->getChanged())
              GModel::current()->getGEOInternals()->synchronize(GModel::current());
            GModel::current()->adaptMesh(technique, f, parameters, niter, meshAll);
          }
        }
      }
      List_Delete((yyvsp[(3) - (16)].l));
      List_Delete((yyvsp[(6) - (16)].l));
      for(int i = 0; i < List_Nbr((yyvsp[(9) - (16)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(9) - (16)].l), i));
      List_Delete((yyvsp[(9) - (16)].l));
      CTX::instance()->lock = lock;
    ;}
    break;

  case 271:
#line 3454 "Gmsh.y"
    {
#if defined(HAVE_POPPLER)
       std::vector<int> is;
       for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
	 double d;
	 List_Read((yyvsp[(4) - (11)].l), i, &d);
	 is.push_back ((int) d);
       }
       gmshPopplerWrapper::instance()->setMacroForPages(is, (yyvsp[(7) - (11)].c), (yyvsp[(9) - (11)].c) );
#endif
     ;}
    break;

  case 272:
#line 3470 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(3) - (6)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(5) - (6)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0;
      LoopControlVariablesNameTab[ImbricatedLoop] = "";
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if((yyvsp[(3) - (6)].d) > (yyvsp[(5) - (6)].d))
	skip_until("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
    ;}
    break;

  case 273:
#line 3487 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(3) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(5) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[(7) - (8)].d);
      LoopControlVariablesNameTab[ImbricatedLoop] = "";
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if(((yyvsp[(7) - (8)].d) > 0. && (yyvsp[(3) - (8)].d) > (yyvsp[(5) - (8)].d)) || ((yyvsp[(7) - (8)].d) < 0. && (yyvsp[(3) - (8)].d) < (yyvsp[(5) - (8)].d)))
	skip_until("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
    ;}
    break;

  case 274:
#line 3504 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(5) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(7) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0;
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[(2) - (8)].c);
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (8)].c)]);
      s.list = false;
      s.value.resize(1);
      s.value[0] = (yyvsp[(5) - (8)].d);
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if((yyvsp[(5) - (8)].d) > (yyvsp[(7) - (8)].d))
	skip_until("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
      Free((yyvsp[(2) - (8)].c));
    ;}
    break;

  case 275:
#line 3526 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(5) - (10)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(7) - (10)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[(9) - (10)].d);
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[(2) - (10)].c);
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (10)].c)]);
      s.list = false;
      s.value.resize(1);
      s.value[0] = (yyvsp[(5) - (10)].d);
      gmshgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if(((yyvsp[(9) - (10)].d) > 0. && (yyvsp[(5) - (10)].d) > (yyvsp[(7) - (10)].d)) || ((yyvsp[(9) - (10)].d) < 0. && (yyvsp[(5) - (10)].d) < (yyvsp[(7) - (10)].d)))
	skip_until("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
      Free((yyvsp[(2) - (10)].c));
    ;}
    break;

  case 276:
#line 3548 "Gmsh.y"
    {
      if(ImbricatedLoop <= 0){
	yymsg(0, "Invalid For/EndFor loop");
	ImbricatedLoop = 0;
      }
      else{
	double step = LoopControlVariablesTab[ImbricatedLoop - 1][2];
        std::string name = LoopControlVariablesNameTab[ImbricatedLoop - 1];
        if(name.size()){
          if(!gmsh_yysymbols.count(name))
            yymsg(0, "Unknown loop variable '%s'", name.c_str());
          else{
            gmsh_yysymbol &s(gmsh_yysymbols[name]);
            if(!s.list && s.value.size()){
              s.value[0] += step;
              LoopControlVariablesTab[ImbricatedLoop - 1][0] = s.value[0];
            }
            else
              yymsg(0, "Bad loop variable %s", name.c_str());
          }
        }
        else{
          LoopControlVariablesTab[ImbricatedLoop - 1][0] += step;
        }
	double x0 = LoopControlVariablesTab[ImbricatedLoop - 1][0];
	double x1 = LoopControlVariablesTab[ImbricatedLoop - 1][1];
        if((step > 0. && x0 <= x1) || (step < 0. && x0 >= x1)){
	  gmshsetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop - 1]);
	  gmsh_yylineno = yylinenoImbricatedLoopsTab[ImbricatedLoop - 1];
	}
	else
	  ImbricatedLoop--;
      }
    ;}
    break;

  case 277:
#line 3583 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->createFunction
         (std::string((yyvsp[(2) - (2)].c)), gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Redefinition of function %s", (yyvsp[(2) - (2)].c));
      skip_until(NULL, "Return");
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 278:
#line 3591 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->createFunction
         (std::string((yyvsp[(2) - (2)].c)), gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Redefinition of function %s", (yyvsp[(2) - (2)].c));
      skip_until(NULL, "Return");
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 279:
#line 3599 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->leaveFunction
         (&gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Error while exiting function");
    ;}
    break;

  case 280:
#line 3605 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->enterFunction
         (std::string((yyvsp[(2) - (3)].c)), &gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Unknown function %s", (yyvsp[(2) - (3)].c));
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 281:
#line 3612 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->enterFunction
         (std::string((yyvsp[(2) - (3)].c)), &gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Unknown function %s", (yyvsp[(2) - (3)].c));
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 282:
#line 3619 "Gmsh.y"
    {
      ImbricatedTest++;
      if(ImbricatedTest > MAX_RECUR_TESTS-1){
	yymsg(0, "Reached maximum number of imbricated tests");
        ImbricatedTest = MAX_RECUR_TESTS-1;
      }

      if((yyvsp[(3) - (4)].d)){
        // Current test is true
        statusImbricatedTests[ImbricatedTest] = 1;
      }
      else{
        statusImbricatedTests[ImbricatedTest] = 0;
        // Go after the next ElseIf or Else or EndIf
        int type_until2 = 0;
        skip_until_test("If", "EndIf", "ElseIf", 4, &type_until2);
        if(!type_until2) ImbricatedTest--; // EndIf reached
      }
    ;}
    break;

  case 283:
#line 3639 "Gmsh.y"
    {
      if(ImbricatedTest > 0){
        if (statusImbricatedTests[ImbricatedTest]){
          // Last test (If or ElseIf) was true, thus go after EndIf (out of If EndIf)
          skip_until("If", "EndIf");
          ImbricatedTest--;
        }
        else{
          // Previous test(s) (If and ElseIf) not yet true
          if((yyvsp[(3) - (4)].d)){
            statusImbricatedTests[ImbricatedTest] = 1;
          }
          else{
            // Current test still not true: statusImbricatedTests[ImbricatedTest] = 0;
            // Go after the next ElseIf or Else or EndIf
            int type_until2 = 0;
            skip_until_test("If", "EndIf", "ElseIf", 4, &type_until2);
            if(!type_until2) ImbricatedTest--;
          }
        }
      }
      else{
	yymsg(0, "Orphan ElseIf");
      }
    ;}
    break;

  case 284:
#line 3665 "Gmsh.y"
    {
      if(ImbricatedTest > 0){
        if(statusImbricatedTests[ImbricatedTest]){
          skip_until("If", "EndIf");
          ImbricatedTest--;
        }
      }
      else{
	yymsg(0, "Orphan Else");
      }
    ;}
    break;

  case 285:
#line 3677 "Gmsh.y"
    {
      ImbricatedTest--;
      if(ImbricatedTest < 0)
        yymsg(1, "Orphan EndIf");
    ;}
    break;

  case 286:
#line 3689 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> in[4], out[4]; ListOfShapes2Vectors((yyvsp[(4) - (5)].l), in);
        GModel::current()->getOCCInternals()->extrude(-1, in, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], out);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        // FIXME use GEOInternals + int api -- SAME FOR ALL BELOW!
        ExtrudeShapes(TRANSLATE, (yyvsp[(4) - (5)].l),
                      (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], 0., 0., 0., 0., 0., 0., 0.,
                      NULL, (yyval.l));
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 287:
#line 3705 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> in[4], out[4]; ListOfShapes2Vectors((yyvsp[(10) - (11)].l), in);
        GModel::current()->getOCCInternals()->revolve(-1, in, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2],
                                                      (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d), out);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        ExtrudeShapes(ROTATE, (yyvsp[(10) - (11)].l),
                      0., 0., 0., (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(7) - (11)].d),
                      NULL, (yyval.l));
      }
      List_Delete((yyvsp[(10) - (11)].l));
    ;}
    break;

  case 288:
#line 3721 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      ExtrudeShapes(TRANSLATE_ROTATE, (yyvsp[(12) - (13)].l),
		    (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2], (yyvsp[(7) - (13)].v)[0], (yyvsp[(7) - (13)].v)[1], (yyvsp[(7) - (13)].v)[2], (yyvsp[(9) - (13)].d),
		    NULL, (yyval.l));
      List_Delete((yyvsp[(12) - (13)].l));
    ;}
    break;

  case 289:
#line 3729 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 290:
#line 3735 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      ExtrudeShapes(TRANSLATE, (yyvsp[(4) - (7)].l),
		    (yyvsp[(2) - (7)].v)[0], (yyvsp[(2) - (7)].v)[1], (yyvsp[(2) - (7)].v)[2], 0., 0., 0., 0., 0., 0., 0.,
		    &extr, (yyval.l));
      List_Delete((yyvsp[(4) - (7)].l));
    ;}
    break;

  case 291:
#line 3743 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 292:
#line 3749 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      ExtrudeShapes(ROTATE, (yyvsp[(10) - (13)].l),
		    0., 0., 0., (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2], (yyvsp[(7) - (13)].d),
		    &extr, (yyval.l));
      List_Delete((yyvsp[(10) - (13)].l));
    ;}
    break;

  case 293:
#line 3757 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 294:
#line 3763 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      ExtrudeShapes(TRANSLATE_ROTATE, (yyvsp[(12) - (15)].l),
		    (yyvsp[(3) - (15)].v)[0], (yyvsp[(3) - (15)].v)[1], (yyvsp[(3) - (15)].v)[2], (yyvsp[(5) - (15)].v)[0], (yyvsp[(5) - (15)].v)[1], (yyvsp[(5) - (15)].v)[2], (yyvsp[(7) - (15)].v)[0], (yyvsp[(7) - (15)].v)[1], (yyvsp[(7) - (15)].v)[2], (yyvsp[(9) - (15)].d),
		    &extr, (yyval.l));
      List_Delete((yyvsp[(12) - (15)].l));
    ;}
    break;

  case 295:
#line 3771 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 296:
#line 3777 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      ExtrudeShapes(BOUNDARY_LAYER, (yyvsp[(3) - (6)].l), 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.,
		    &extr, (yyval.l));
      List_Delete((yyvsp[(3) - (6)].l));
    ;}
    break;

  case 297:
#line 3784 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> in[4], out[4]; ListOfShapes2Vectors((yyvsp[(3) - (9)].l), in);
        GModel::current()->getOCCInternals()->addPipe(-1, in, (int)(yyvsp[(8) - (9)].d), out);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "Pipe only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(3) - (9)].l));
    ;}
    break;

  case 298:
#line 3797 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> wires, out[4]; ListOfDouble2Vector((yyvsp[(2) - (2)].l), wires);
        GModel::current()->getOCCInternals()->addThruSections(-1, wires, out,
                                                              false, false);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 299:
#line 3811 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> wires, out[4]; ListOfDouble2Vector((yyvsp[(3) - (3)].l), wires);
        GModel::current()->getOCCInternals()->addThruSections(-1, wires, out,
                                                              false, true);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 300:
#line 3825 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        double radius = (yyvsp[(9) - (10)].d);
        std::vector<int> regions, edges, out[4];
        ListOfDouble2Vector((yyvsp[(3) - (10)].l), regions); ListOfDouble2Vector((yyvsp[(6) - (10)].l), edges);
        GModel::current()->getOCCInternals()->fillet(regions, edges, radius, out);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "Fillet only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(3) - (10)].l));
      List_Delete((yyvsp[(6) - (10)].l));
    ;}
    break;

  case 301:
#line 3844 "Gmsh.y"
    {
    ;}
    break;

  case 302:
#line 3847 "Gmsh.y"
    {
    ;}
    break;

  case 303:
#line 3853 "Gmsh.y"
    {
      int n = (int)fabs((yyvsp[(3) - (5)].d));
      if(n){ // we accept n==0 to easily disable layers
        extr.mesh.ExtrudeMesh = true;
        extr.mesh.NbLayer = 1;
        extr.mesh.NbElmLayer.clear();
        extr.mesh.hLayer.clear();
        extr.mesh.NbElmLayer.push_back((int)fabs((yyvsp[(3) - (5)].d)));
        extr.mesh.hLayer.push_back(1.);
      }
    ;}
    break;

  case 304:
#line 3865 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = true;
      extr.mesh.NbLayer = List_Nbr((yyvsp[(3) - (7)].l));
      if(List_Nbr((yyvsp[(3) - (7)].l)) == List_Nbr((yyvsp[(5) - (7)].l))){
	extr.mesh.NbElmLayer.clear();
	extr.mesh.hLayer.clear();
	for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
	  double d;
	  List_Read((yyvsp[(3) - (7)].l), i, &d);
	  extr.mesh.NbElmLayer.push_back((d > 0) ? (int)d : 1);
	  List_Read((yyvsp[(5) - (7)].l), i, &d);
	  extr.mesh.hLayer.push_back(d);
	}
      }
      else
	yymsg(0, "Wrong layer definition {%d, %d}", List_Nbr((yyvsp[(3) - (7)].l)), List_Nbr((yyvsp[(5) - (7)].l)));
      List_Delete((yyvsp[(3) - (7)].l));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 305:
#line 3885 "Gmsh.y"
    {
      extr.mesh.ScaleLast = true;
    ;}
    break;

  case 306:
#line 3889 "Gmsh.y"
    {
      extr.mesh.Recombine = true;
    ;}
    break;

  case 307:
#line 3893 "Gmsh.y"
    {
      extr.mesh.Recombine = (yyvsp[(2) - (3)].d) ? true : false;
    ;}
    break;

  case 308:
#line 3897 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_ADDVERTS_1;
    ;}
    break;

  case 309:
#line 3901 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_ADDVERTS_1_RECOMB;
    ;}
    break;

  case 310:
#line 3905 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_NOVERTS_1;
    ;}
    break;

  case 311:
#line 3909 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_NOVERTS_1_RECOMB;
    ;}
    break;

  case 312:
#line 3913 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (9)].l), tags);
      int num = (int)(yyvsp[(3) - (9)].d);
      GModel::current()->getGEOInternals()->addDiscreteSurface(num);
      extr.mesh.Holes[num].first = (yyvsp[(8) - (9)].d);
      extr.mesh.Holes[num].second = tags;
      List_Delete((yyvsp[(6) - (9)].l));
    ;}
    break;

  case 313:
#line 3922 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (6)].c), "Index"))
        extr.mesh.BoundaryLayerIndex = (yyvsp[(4) - (6)].d);
      else if(!strcmp((yyvsp[(2) - (6)].c), "View"))
        extr.mesh.ViewIndex = (yyvsp[(4) - (6)].d);
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 314:
#line 3934 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Union; ;}
    break;

  case 315:
#line 3935 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Intersection; ;}
    break;

  case 316:
#line 3936 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Difference; ;}
    break;

  case 317:
#line 3937 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Section; ;}
    break;

  case 318:
#line 3938 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Fragments; ;}
    break;

  case 319:
#line 3942 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 320:
#line 3943 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 321:
#line 3944 "Gmsh.y"
    { (yyval.i) = (yyvsp[(2) - (3)].d); ;}
    break;

  case 322:
#line 3949 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> shape[4], tool[4], out[4];
        ListOfShapes2Vectors((yyvsp[(3) - (9)].l), shape);
        ListOfShapes2Vectors((yyvsp[(7) - (9)].l), tool);
        GModel::current()->getOCCInternals()->applyBooleanOperator
          (-1, (OCC_Internals::BooleanOperator)(yyvsp[(1) - (9)].i), shape, tool, out, (yyvsp[(4) - (9)].i), (yyvsp[(8) - (9)].i));
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "Boolean operators only available with OpenCASCADE factory");
      }
      List_Delete((yyvsp[(3) - (9)].l));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 323:
#line 3966 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> out[4];
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
        GModel::current()->getOCCInternals()->importShapes(tmp, true, out);
        Vectors2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "ShapeFromFile only available with OpenCASCADE factory");
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 324:
#line 3984 "Gmsh.y"
    {
      if(factory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> shape[4], tool[4], out[4];
        ListOfShapes2Vectors((yyvsp[(7) - (14)].l), shape);
        ListOfShapes2Vectors((yyvsp[(11) - (14)].l), tool);
        GModel::current()->getOCCInternals()->applyBooleanOperator
          ((int)(yyvsp[(3) - (14)].d), (OCC_Internals::BooleanOperator)(yyvsp[(1) - (14)].i), shape, tool, out, (yyvsp[(8) - (14)].i), (yyvsp[(12) - (14)].i));
      }
      List_Delete((yyvsp[(7) - (14)].l));
      List_Delete((yyvsp[(11) - (14)].l));
    ;}
    break;

  case 325:
#line 3999 "Gmsh.y"
    {
      (yyval.v)[0] = (yyval.v)[1] = 1.;
    ;}
    break;

  case 326:
#line 4003 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Progression") || !strcmp((yyvsp[(2) - (3)].c), "Power"))
        (yyval.v)[0] = 1.;
      else if(!strcmp((yyvsp[(2) - (3)].c), "Bump"))
        (yyval.v)[0] = 2.;
      else{
        yymsg(0, "Unknown transfinite mesh type");
        (yyval.v)[0] = 1.;
      }
      (yyval.v)[1] = (yyvsp[(3) - (3)].d);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 327:
#line 4018 "Gmsh.y"
    {
      (yyval.i) = -1; // left
    ;}
    break;

  case 328:
#line 4022 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (1)].c), "Right"))
        (yyval.i) = 1;
      else if(!strcmp((yyvsp[(1) - (1)].c), "Left"))
	(yyval.i) = -1;
      else if(!strcmp((yyvsp[(1) - (1)].c), "AlternateRight"))
	(yyval.i) = 2;
      else if(!strcmp((yyvsp[(1) - (1)].c), "AlternateLeft"))
	(yyval.i) = -2;
      else // "Alternate" -> "Alternate Right"
	(yyval.i) = 2;
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 329:
#line 4038 "Gmsh.y"
    {
     (yyval.l) = List_Create(1, 1, sizeof(double));
   ;}
    break;

  case 330:
#line 4042 "Gmsh.y"
    {
     (yyval.l) = (yyvsp[(2) - (2)].l);
   ;}
    break;

  case 331:
#line 4047 "Gmsh.y"
    {
      (yyval.i) = 45;
    ;}
    break;

  case 332:
#line 4051 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(2) - (2)].d);
    ;}
    break;

  case 333:
#line 4057 "Gmsh.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(double));
    ;}
    break;

  case 334:
#line 4061 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (2)].l);
    ;}
    break;

  case 335:
#line 4068 "Gmsh.y"
    {
      // mesh sizes at vertices are stored in internal CAD data, as they can be
      // specified during vertex creation and copied around during CAD
      // operations
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(3) - (6)].l), i, &d);
        int tag = (int)d;
        if(GModel::current()->getOCCInternals())
          GModel::current()->getOCCInternals()->setMeshSize(0, tag, (yyvsp[(5) - (6)].d));
        GModel::current()->getGEOInternals()->setMeshSize(0, tag, (yyvsp[(5) - (6)].d));
        GVertex *gv = GModel::current()->getVertexByTag(tag);
        if(gv) gv->setPrescribedMeshSizeAtVertex((yyvsp[(5) - (6)].d));
      }
      List_Delete((yyvsp[(3) - (6)].l));
    ;}
    break;

  case 336:
#line 4085 "Gmsh.y"
    {
      // transfinite constraints are also stored in GEO internals, as they can
      // be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      int type = (int)(yyvsp[(6) - (7)].v)[0];
      double coef = fabs((yyvsp[(6) - (7)].v)[1]);
      int npoints = ((int)(yyvsp[(5) - (7)].d) < 2) ? 2 : (int)(yyvsp[(5) - (7)].d);
      if(!(yyvsp[(3) - (7)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteLine
          (0, npoints, type, coef);
        for(GModel::eiter it = GModel::current()->firstEdge();
            it != GModel::current()->lastEdge(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
          (*it)->meshAttributes.nbPointsTransfinite = npoints;
          (*it)->meshAttributes.typeTransfinite = type;
          (*it)->meshAttributes.coeffTransfinite = coef;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (7)].l), i, &d);
          int j = (int)fabs(d);
          for(int sig = -1; sig <= 1; sig += 2){
            GModel::current()->getGEOInternals()->setTransfiniteLine
              (sig * j, npoints, type * gmsh_sign(d), coef);
            GEdge *ge = GModel::current()->getEdgeByTag(sig * j);
            if(ge){
              ge->meshAttributes.method = MESH_TRANSFINITE;
              ge->meshAttributes.nbPointsTransfinite = npoints;
              ge->meshAttributes.typeTransfinite = type * gmsh_sign(d);
              ge->meshAttributes.coeffTransfinite = coef;
            }
          }
        }
        List_Delete((yyvsp[(3) - (7)].l));
      }
    ;}
    break;

  case 337:
#line 4126 "Gmsh.y"
    {
      // transfinite constraints are also stored in GEO internals, as they can
      // be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      std::vector<int> corners; ListOfDouble2Vector((yyvsp[(4) - (6)].l), corners);
      if(!(yyvsp[(3) - (6)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteSurface(0, (yyvsp[(5) - (6)].i), corners);
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
          (*it)->meshAttributes.transfiniteArrangement = (yyvsp[(5) - (6)].i);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (6)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteSurface(tag, (yyvsp[(5) - (6)].i), corners);
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf){
            gf->meshAttributes.method = MESH_TRANSFINITE;
            gf->meshAttributes.transfiniteArrangement = (yyvsp[(5) - (6)].i);
            if(corners.empty() || corners.size() == 3 || corners.size() == 4){
              for(unsigned int j = 0; j < corners.size(); j++){
                GVertex *gv = GModel::current()->getVertexByTag(std::abs(corners[j]));
                if(gv)
                  gf->meshAttributes.corners.push_back(gv);
                else
                  yymsg(0, "Unknown model vertex with tag %d", corners[j]);
              }
            }
            else{
              yymsg(0, "Transfinite surface requires 3 or 4 corners vertices");
            }
          }
        }
        List_Delete((yyvsp[(3) - (6)].l));
      }
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 338:
#line 4170 "Gmsh.y"
    {
      // transfinite constraints are also stored in GEO internals, as they can
      // be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      std::vector<int> corners; ListOfDouble2Vector((yyvsp[(4) - (5)].l), corners);
      if(!(yyvsp[(3) - (5)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteVolume(0, corners);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (5)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteVolume(tag, corners);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr){
            gr->meshAttributes.method = MESH_TRANSFINITE;
            if(corners.empty() || corners.size() == 6 || corners.size() == 8){
              for(unsigned int i = 0; i < corners.size(); i++){
                GVertex *gv = GModel::current()->getVertexByTag(std::abs(corners[i]));
                if(gv)
                  gr->meshAttributes.corners.push_back(gv);
                else
                  yymsg(0, "Unknown model vertex with tag %d", corners[i]);
              }
            }
          }
        }
        List_Delete((yyvsp[(3) - (5)].l));
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 339:
#line 4209 "Gmsh.y"
    {
      // transfinite constraints are also stored in GEO internals, as they can
      // be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(2) - (3)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteVolumeQuadTri(0);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++)
          (*it)->meshAttributes.QuadTri = TRANSFINITE_QUADTRI_1;
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(2) - (3)].l)); i++){
          double d;
          List_Read((yyvsp[(2) - (3)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteVolumeQuadTri(tag);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr) gr->meshAttributes.QuadTri = TRANSFINITE_QUADTRI_1;
        }
        List_Delete((yyvsp[(2) - (3)].l));
      }
    ;}
    break;

  case 340:
#line 4234 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (8)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (8)].l), i, &d);
	CTX::instance()->mesh.algo2d_per_face[(int)d] = (int)(yyvsp[(7) - (8)].d);
      }
      List_Delete((yyvsp[(4) - (8)].l));
    ;}
    break;

  case 341:
#line 4243 "Gmsh.y"
    {
      // recombine constraints are also stored in GEO internals, as they can be
      // copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (5)].l)){
        GModel::current()->getGEOInternals()->setRecombine(2, 0, (yyvsp[(4) - (5)].i));
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.recombine = 1;
          (*it)->meshAttributes.recombineAngle = (yyvsp[(4) - (5)].i);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (5)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setRecombine(2, tag, (yyvsp[(4) - (5)].i));
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf){
            gf->meshAttributes.recombine = 1;
            gf->meshAttributes.recombineAngle = (yyvsp[(4) - (5)].i);
          }
        }
        List_Delete((yyvsp[(3) - (5)].l));
      }
    ;}
    break;

  case 342:
#line 4273 "Gmsh.y"
    {
      // recombine constraints are also stored in GEO internals, as they can be
      // copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setRecombine(3, 0, 0.);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++){
          (*it)->meshAttributes.recombine3D = 1;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setRecombine(3, tag, 0.);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr) gr->meshAttributes.recombine3D = 1;
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 343:
#line 4299 "Gmsh.y"
    {
      // smoothing constraints are also stored in GEO internals, as they can be
      // copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (6)].l)){
        GModel::current()->getGEOInternals()->setSmoothing(0, (int)(yyvsp[(5) - (6)].d));
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.transfiniteSmoothing = (int)(yyvsp[(5) - (6)].d);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (6)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setSmoothing(tag, (int)(yyvsp[(5) - (6)].d));
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf) gf->meshAttributes.transfiniteSmoothing = (int)(yyvsp[(5) - (6)].d);
        }
        List_Delete((yyvsp[(3) - (6)].l));
      }
    ;}
    break;

  case 344:
#line 4326 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (11)].l)) != List_Nbr((yyvsp[(8) - (11)].l))){
        yymsg(0, "Number of master lines (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (11)].l)), List_Nbr((yyvsp[(4) - (11)].l)));
      }
      else{
        std::vector<double> transfo;
        if(List_Nbr((yyvsp[(10) - (11)].l)) != 0) {
          if (List_Nbr((yyvsp[(10) - (11)].l)) < 12){
            yymsg(0, "Affine transformation requires at least 12 entries (we have %d)",
                  List_Nbr((yyvsp[(10) - (11)].l)));
          }
          else {
            transfo.resize(List_Nbr((yyvsp[(10) - (11)].l)));
            for(int i = 0; i < List_Nbr((yyvsp[(10) - (11)].l)); i++)
              List_Read((yyvsp[(10) - (11)].l), i, &transfo[i]);
          }
        }
        for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (11)].l), i, &d_master);
          List_Read((yyvsp[(4) - (11)].l), i, &d_slave);
          int j_master = (int)d_master;
          int j_slave  = (int)d_slave;
          addPeriodicEdge(j_slave, j_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 345:
#line 4358 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (11)].l)) != List_Nbr((yyvsp[(8) - (11)].l))){
        yymsg(0, "Number of master faces (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (11)].l)), List_Nbr((yyvsp[(4) - (11)].l)));
      }
      else{
        if (List_Nbr((yyvsp[(10) - (11)].l)) < 12){
          // FIXME full automatic case here if List_Nbr($10) == 0)
          yymsg(0, "Affine transformation requires at least 12 entries");
        }
        else {
          std::vector<double> transfo(16,0);
          for(int i = 0; i < List_Nbr((yyvsp[(10) - (11)].l)); i++)
            List_Read((yyvsp[(10) - (11)].l), i, &transfo[i]);
          for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
            double d_master, d_slave;
            List_Read((yyvsp[(8) - (11)].l), i, &d_master);
            List_Read((yyvsp[(4) - (11)].l), i, &d_slave);
            addPeriodicFace(d_slave, d_master, transfo);
          }
        }
      }
      List_Delete((yyvsp[(4) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 346:
#line 4385 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (18)].l)) != List_Nbr((yyvsp[(8) - (18)].l))){
        yymsg(0, "Number of master edges (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (18)].l)), List_Nbr((yyvsp[(4) - (18)].l)));
      }
      else{
        SPoint3 axis((yyvsp[(12) - (18)].v)[0],(yyvsp[(12) - (18)].v)[1],(yyvsp[(12) - (18)].v)[2]);
        SPoint3 origin((yyvsp[(14) - (18)].v)[0],(yyvsp[(14) - (18)].v)[1],(yyvsp[(14) - (18)].v)[2]);
        double  angle((yyvsp[(16) - (18)].d));
        SPoint3 translation(0,0,0);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (18)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (18)].l), i, &d_master);
          List_Read((yyvsp[(4) - (18)].l), i, &d_slave);
          addPeriodicEdge(d_slave,d_master,transfo);
        }
      }
      List_Delete((yyvsp[(4) - (18)].l));
      List_Delete((yyvsp[(8) - (18)].l));
    ;}
    break;

  case 347:
#line 4411 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (18)].l)) != List_Nbr((yyvsp[(8) - (18)].l))){
        yymsg(0, "Number of master faces (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (18)].l)), List_Nbr((yyvsp[(4) - (18)].l)));
      }
      else{
        SPoint3 origin((yyvsp[(14) - (18)].v)[0],(yyvsp[(14) - (18)].v)[1],(yyvsp[(14) - (18)].v)[2]);
        SPoint3 axis((yyvsp[(12) - (18)].v)[0],(yyvsp[(12) - (18)].v)[1],(yyvsp[(12) - (18)].v)[2]);
        double  angle((yyvsp[(16) - (18)].d));
        SPoint3 translation(0,0,0);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (18)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (18)].l), i, &d_master);
          List_Read((yyvsp[(4) - (18)].l), i, &d_slave);
          addPeriodicFace(d_slave, d_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (18)].l));
      List_Delete((yyvsp[(8) - (18)].l));
    ;}
    break;

  case 348:
#line 4437 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (12)].l)) != List_Nbr((yyvsp[(8) - (12)].l))){
        yymsg(0, "Number of master edges (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (12)].l)), List_Nbr((yyvsp[(4) - (12)].l)));
      }
      else{
        SPoint3 origin(0,0,0);
        SPoint3 axis(0,0,0);
        double  angle(0);
        SPoint3 translation((yyvsp[(11) - (12)].v)[0],(yyvsp[(11) - (12)].v)[1],(yyvsp[(11) - (12)].v)[2]);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (12)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (12)].l), i, &d_master);
          List_Read((yyvsp[(4) - (12)].l), i, &d_slave);
          addPeriodicEdge(d_slave,d_master,transfo);
        }
      }
      List_Delete((yyvsp[(4) - (12)].l));
      List_Delete((yyvsp[(8) - (12)].l));
    ;}
    break;

  case 349:
#line 4463 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(4) - (12)].l)) != List_Nbr((yyvsp[(8) - (12)].l))){
        yymsg(0, "Number of master faces (%d) different from number of "
              "slaves (%d) ", List_Nbr((yyvsp[(8) - (12)].l)), List_Nbr((yyvsp[(4) - (12)].l)));
      }
      else{
        SPoint3 origin(0,0,0);
        SPoint3 axis(0,0,0);
        double  angle(0);
        SPoint3 translation((yyvsp[(11) - (12)].v)[0],(yyvsp[(11) - (12)].v)[1],(yyvsp[(11) - (12)].v)[2]);

        std::vector<double> transfo;
        computeAffineTransformation(origin,axis,angle,translation,transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (12)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (12)].l), i, &d_master);
          List_Read((yyvsp[(4) - (12)].l), i, &d_slave);
          addPeriodicFace(d_slave, d_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (12)].l));
      List_Delete((yyvsp[(8) - (12)].l));
    ;}
    break;

  case 350:
#line 4489 "Gmsh.y"
    {
      if (List_Nbr((yyvsp[(5) - (12)].l)) != List_Nbr((yyvsp[(10) - (12)].l))){
        yymsg(0, "Number of master surface edges (%d) different from number of "
              "slave (%d) edges", List_Nbr((yyvsp[(10) - (12)].l)), List_Nbr((yyvsp[(5) - (12)].l)));
      }
      else{
        int j_master = (int)(yyvsp[(8) - (12)].d);
        int j_slave = (int)(yyvsp[(3) - (12)].d);
        std::map<int,int> edgeCounterParts;
        for (int i = 0; i < List_Nbr((yyvsp[(5) - (12)].l)); i++){
          double ds,dm;
          List_Read((yyvsp[(5) - (12)].l),i,&ds);
          List_Read((yyvsp[(10) - (12)].l),i,&dm);
          edgeCounterParts[(int) ds] = (int) dm;
        }
        addPeriodicFace(j_slave, j_master, edgeCounterParts);
      }
      List_Delete((yyvsp[(5) - (12)].l));
      List_Delete((yyvsp[(10) - (12)].l));
    ;}
    break;

  case 351:
#line 4510 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(0, tags, 2, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 352:
#line 4516 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(1, tags, 2, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 353:
#line 4522 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(0, tags, 3, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 354:
#line 4528 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(1, tags, 3, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 355:
#line 4534 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
      addEmbedded(2, tags, 3, (int)(yyvsp[(8) - (10)].d));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 356:
#line 4540 "Gmsh.y"
    {
      // reverse mesh constraints are also stored in GEO internals, as they can
      // be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setReverseMesh(2, 0);
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.reverseMesh = 1;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int num = (int)d;
          GModel::current()->getGEOInternals()->setReverseMesh(2, num);
          GFace *gf = GModel::current()->getFaceByTag(num);
          if(gf) gf->meshAttributes.reverseMesh = 1;
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 357:
#line 4566 "Gmsh.y"
    {
      // reverse mesh constraints are also stored in GEO internals, as they can
      // be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setReverseMesh(1, 0);
        for(GModel::eiter it = GModel::current()->firstEdge();
            it != GModel::current()->lastEdge(); it++){
          (*it)->meshAttributes.reverseMesh = 1;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int num = (int)d;
          GModel::current()->getGEOInternals()->setReverseMesh(1, num);
          GEdge *ge = GModel::current()->getEdgeByTag(num);
          if(ge) ge->meshAttributes.reverseMesh = 1;
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 358:
#line 4592 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (4)].l)){
        for(GModel::viter it = GModel::current()->firstVertex();
            it != GModel::current()->lastVertex(); it++)
          (*it)->relocateMeshVertices();
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          GVertex *gv = GModel::current()->getVertexByTag((int)d);
          if(gv) gv->relocateMeshVertices();
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 359:
#line 4609 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (4)].l)){
        for(GModel::eiter it = GModel::current()->firstEdge();
            it != GModel::current()->lastEdge(); it++)
          (*it)->relocateMeshVertices();
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          GEdge *ge = GModel::current()->getEdgeByTag((int)d);
          if(ge) ge->relocateMeshVertices();
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 360:
#line 4626 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (4)].l)){
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++)
          (*it)->relocateMeshVertices();
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          GFace *gf = GModel::current()->getFaceByTag((int)d);
          if(gf) gf->relocateMeshVertices();
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 361:
#line 4643 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
	double dnum;
	List_Read((yyvsp[(3) - (4)].l), i, &dnum);
	int num = (int)fabs(dnum);
        GModel::current()->getGEOInternals()->setDegenerated(1, num);
        GEdge *ge = GModel::current()->getEdgeByTag(num);
        if(ge) ge->setTooSmall(true);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 362:
#line 4655 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh(1, tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 363:
#line 4661 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh(2, tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 364:
#line 4667 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh(3, tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 365:
#line 4679 "Gmsh.y"
    {
      GModel::current()->getGEOInternals()->removeAllDuplicates();
    ;}
    break;

  case 366:
#line 4683 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Geometry"))
        GModel::current()->getGEOInternals()->removeAllDuplicates();
      else if(!strcmp((yyvsp[(2) - (3)].c), "Mesh"))
        GModel::current()->removeDuplicateMeshVertices(CTX::instance()->geom.tolerance);
      else
        yymsg(0, "Unknown coherence command");
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 367:
#line 4693 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(4) - (6)].l), tags);
      GModel::current()->getGEOInternals()->mergeVertices(tags);
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 368:
#line 4703 "Gmsh.y"
    { (yyval.c) = (char*)"Homology"; ;}
    break;

  case 369:
#line 4704 "Gmsh.y"
    { (yyval.c) = (char*)"Cohomology"; ;}
    break;

  case 370:
#line 4705 "Gmsh.y"
    { (yyval.c) = (char*)"Betti"; ;}
    break;

  case 371:
#line 4710 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (2)].c), domain, subdomain, dim);
    ;}
    break;

  case 372:
#line 4716 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (5)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (5)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(3) - (5)].l));
    ;}
    break;

  case 373:
#line 4728 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (7)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(5) - (7)].l)); i++){
        double d;
        List_Read((yyvsp[(5) - (7)].l), i, &d);
        subdomain.push_back((int)d);
      }
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (7)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(3) - (7)].l));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 374:
#line 4746 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(6) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(6) - (10)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(8) - (10)].l), i, &d);
        subdomain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (10)].l), i, &d);
        dim.push_back((int)d);
      }
      GModel::current()->addHomologyRequest((yyvsp[(1) - (10)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(6) - (10)].l));
      List_Delete((yyvsp[(8) - (10)].l));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 375:
#line 4773 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d);           ;}
    break;

  case 376:
#line 4774 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d);           ;}
    break;

  case 377:
#line 4775 "Gmsh.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d);          ;}
    break;

  case 378:
#line 4776 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (2)].d);           ;}
    break;

  case 379:
#line 4777 "Gmsh.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d);          ;}
    break;

  case 380:
#line 4778 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d);      ;}
    break;

  case 381:
#line 4779 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d);      ;}
    break;

  case 382:
#line 4780 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d);      ;}
    break;

  case 383:
#line 4782 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (3)].d))
	yymsg(0, "Division by zero in '%g / %g'", (yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].d));
      else
	(yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d);
    ;}
    break;

  case 384:
#line 4788 "Gmsh.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d);  ;}
    break;

  case 385:
#line 4789 "Gmsh.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].d));  ;}
    break;

  case 386:
#line 4790 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d);      ;}
    break;

  case 387:
#line 4791 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d);      ;}
    break;

  case 388:
#line 4792 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d);     ;}
    break;

  case 389:
#line 4793 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d);     ;}
    break;

  case 390:
#line 4794 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d);     ;}
    break;

  case 391:
#line 4795 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d);     ;}
    break;

  case 392:
#line 4796 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d);     ;}
    break;

  case 393:
#line 4797 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d);     ;}
    break;

  case 394:
#line 4798 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d) ? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d); ;}
    break;

  case 395:
#line 4799 "Gmsh.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 396:
#line 4800 "Gmsh.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 397:
#line 4801 "Gmsh.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 398:
#line 4802 "Gmsh.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 399:
#line 4803 "Gmsh.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 400:
#line 4804 "Gmsh.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 401:
#line 4805 "Gmsh.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 402:
#line 4806 "Gmsh.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 403:
#line 4807 "Gmsh.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 404:
#line 4808 "Gmsh.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 405:
#line 4809 "Gmsh.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d));;}
    break;

  case 406:
#line 4810 "Gmsh.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 407:
#line 4811 "Gmsh.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 408:
#line 4812 "Gmsh.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 409:
#line 4813 "Gmsh.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 410:
#line 4814 "Gmsh.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 411:
#line 4815 "Gmsh.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 412:
#line 4816 "Gmsh.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d) + 0.5); ;}
    break;

  case 413:
#line 4817 "Gmsh.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 414:
#line 4818 "Gmsh.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 415:
#line 4819 "Gmsh.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d) * (yyvsp[(3) - (6)].d) + (yyvsp[(5) - (6)].d) * (yyvsp[(5) - (6)].d)); ;}
    break;

  case 416:
#line 4820 "Gmsh.y"
    { (yyval.d) = (yyvsp[(3) - (4)].d) * (double)rand() / (double)RAND_MAX; ;}
    break;

  case 417:
#line 4829 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d); ;}
    break;

  case 418:
#line 4830 "Gmsh.y"
    { (yyval.d) = 3.141592653589793; ;}
    break;

  case 419:
#line 4831 "Gmsh.y"
    { (yyval.d) = (double)ImbricatedTest; ;}
    break;

  case 420:
#line 4832 "Gmsh.y"
    { (yyval.d) = Msg::GetCommRank(); ;}
    break;

  case 421:
#line 4833 "Gmsh.y"
    { (yyval.d) = Msg::GetCommSize(); ;}
    break;

  case 422:
#line 4834 "Gmsh.y"
    { (yyval.d) = GetGmshMajorVersion(); ;}
    break;

  case 423:
#line 4835 "Gmsh.y"
    { (yyval.d) = GetGmshMinorVersion(); ;}
    break;

  case 424:
#line 4836 "Gmsh.y"
    { (yyval.d) = GetGmshPatchVersion(); ;}
    break;

  case 425:
#line 4837 "Gmsh.y"
    { (yyval.d) = Cpu(); ;}
    break;

  case 426:
#line 4838 "Gmsh.y"
    { (yyval.d) = GetMemoryUsage()/1024./1024.; ;}
    break;

  case 427:
#line 4839 "Gmsh.y"
    { (yyval.d) = TotalRam(); ;}
    break;

  case 428:
#line 4844 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 429:
#line 4846 "Gmsh.y"
    {
      std::vector<double> val(1, (yyvsp[(3) - (6)].d));
      Msg::ExchangeOnelabParameter("", val, floatOptions, charOptions);
      (yyval.d) = val[0];
    ;}
    break;

  case 430:
#line 4852 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d); ;}
    break;

  case 431:
#line 4854 "Gmsh.y"
    {
      (yyval.d) = Msg::GetOnelabNumber((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 432:
#line 4859 "Gmsh.y"
    {
      (yyval.d) = Msg::GetOnelabNumber((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 433:
#line 4864 "Gmsh.y"
    {
      if(gmsh_yysymbols.count((yyvsp[(1) - (1)].c))){
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (1)].c)]);
        if(s.value.empty()){
          yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (1)].c));
          (yyval.d) = 0.;
        }
        else
          (yyval.d) = s.value[0];
      }
      else{
        std::string key((yyvsp[(1) - (1)].c));
        if(StructTable_M.count(key)) {
          (yyval.d) = (double)StructTable_M[key]._value;
        }
        else {
          yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (1)].c));
          (yyval.d) = 0.;
        }
      }
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 434:
#line 4887 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (4)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (4)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (4)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (4)].c), index);
          (yyval.d) = 0.;
        }
        else
          (yyval.d) = s.value[index];
      }
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 435:
#line 4905 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (4)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (4)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (4)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (4)].c), index);
          (yyval.d) = 0.;
        }
        else
          (yyval.d) = s.value[index];
      }
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 436:
#line 4923 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (4)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (4)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (4)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (4)].c), index);
          (yyval.d) = 0.;
        }
        else
          (yyval.d) = s.value[index];
      }
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 437:
#line 4941 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (4)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (4)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (4)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (4)].c), index);
          (yyval.d) = 0.;
        }
        else
          (yyval.d) = s.value[index];
      }
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 438:
#line 4959 "Gmsh.y"
    {
      (yyval.d) = gmsh_yysymbols.count((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 439:
#line 4964 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      (yyval.d) = !StatFile(tmp);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 440:
#line 4970 "Gmsh.y"
    {
      if(gmsh_yysymbols.count((yyvsp[(2) - (4)].c))){
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (4)].c)]);
	(yyval.d) = s.value.size();
      }
      else if(gmsh_yystringsymbols.count((yyvsp[(2) - (4)].c))){
	(yyval.d) = gmsh_yystringsymbols[(yyvsp[(2) - (4)].c)].size();
      }
      else{
        yymsg(0, "Unknown variable '%s'", (yyvsp[(2) - (4)].c));
	(yyval.d) = 0.;
      }
      Free((yyvsp[(2) - (4)].c));
    ;}
    break;

  case 441:
#line 4985 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (2)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (2)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (2)].c)]);
        if(s.value.empty()){
          yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (2)].c));
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[0];
          s.value[0] += (yyvsp[(2) - (2)].i);
        }
      }
      Free((yyvsp[(1) - (2)].c));
    ;}
    break;

  case 442:
#line 5004 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (5)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (5)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (5)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (5)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (5)].c), index);
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[index];
          s.value[index] += (yyvsp[(5) - (5)].i);
        }
      }
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 443:
#line 5024 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (5)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (5)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (5)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (5)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (5)].c), index);
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[index];
          s.value[index] += (yyvsp[(5) - (5)].i);
        }
      }
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 444:
#line 5044 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (5)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (5)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (5)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (5)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (5)].c), index);
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[index];
          s.value[index] += (yyvsp[(5) - (5)].i);
        }
      }
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 445:
#line 5064 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (5)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (5)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (5)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (5)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (5)].c), index);
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[index];
          s.value[index] += (yyvsp[(5) - (5)].i);
        }
      }
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 446:
#line 5094 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (3)].c));
      if(StructTable_M.count(key)) {
        std::string key2((yyvsp[(3) - (3)].c));
        if(StructTable_M[key]._fopt.count(key2)) {
	  (yyval.d) = StructTable_M[key]._fopt[key2][0];
        }
        else {
	  yymsg(0, "Unknown member '%s' of Struct %s", (yyvsp[(3) - (3)].c), (yyvsp[(1) - (3)].c));  (yyval.d) = 0.;
	}
      }
      else  {
        NumberOption(GMSH_GET, (yyvsp[(1) - (3)].c), 0, (yyvsp[(3) - (3)].c), (yyval.d));
      }
      Free((yyvsp[(1) - (3)].c));
      if (flag_tSTRING_alloc) Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 447:
#line 5112 "Gmsh.y"
    {
      NumberOption(GMSH_GET, (yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(6) - (6)].c), (yyval.d));
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(6) - (6)].c));
    ;}
    break;

  case 448:
#line 5117 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (4)].c), 0, (yyvsp[(3) - (4)].c), d)){
	d += (yyvsp[(4) - (4)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (4)].c), 0, (yyvsp[(3) - (4)].c), d);
	(yyval.d) = d;
      }
      Free((yyvsp[(1) - (4)].c)); Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 449:
#line 5127 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c), d)){
	d += (yyvsp[(7) - (7)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c), d);
	(yyval.d) = d;
      }
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 450:
#line 5137 "Gmsh.y"
    {
      (yyval.d) = Msg::GetValue((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 451:
#line 5142 "Gmsh.y"
    {
      int matches = 0;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (6)].l), i, &d);
        matches += List_Search((yyvsp[(5) - (6)].l), &d, fcmp_double);
      }
      (yyval.d) = matches;
      Free((yyvsp[(3) - (6)].l)); Free((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 452:
#line 5153 "Gmsh.y"
    {
      std::string s((yyvsp[(3) - (6)].c)), substr((yyvsp[(5) - (6)].c));
      if(s.find(substr) != std::string::npos)
        (yyval.d) = 1.;
      else
        (yyval.d) = 0.;
      Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 453:
#line 5162 "Gmsh.y"
    {
      (yyval.d) = strlen((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 454:
#line 5167 "Gmsh.y"
    {
      (yyval.d) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 455:
#line 5172 "Gmsh.y"
    {
      int align = 0, font = 0, fontsize = CTX::instance()->glFontSize;
      if(List_Nbr((yyvsp[(3) - (4)].l)) % 2){
        yyerror("Number of text attributes should be even");
      }
      else{
        for(int i = 0 ; i < List_Nbr((yyvsp[(3) - (4)].l)); i += 2){
          char *s1, *s2; List_Read((yyvsp[(3) - (4)].l), i, &s1); List_Read((yyvsp[(3) - (4)].l), i + 1, &s2);
          std::string key(s1), val(s2);
          Free(s1); Free(s2);
#if defined(HAVE_OPENGL)
          if(key == "Font")
            font = drawContext::global()->getFontIndex(val.c_str());
          else if(key == "FontSize")
            fontsize = atoi(val.c_str());
          else if(key == "Align")
            align = drawContext::global()->getFontAlign(val.c_str());
#endif
        }
      }
      List_Delete((yyvsp[(3) - (4)].l));
      (yyval.d) = (double)((align<<16)|(font<<8)|(fontsize));
    ;}
    break;

  case 456:
#line 5200 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 457:
#line 5203 "Gmsh.y"
    {
      std::string key(Struct_Name);
      StructTable_M[key] = Struct((int)(yyvsp[(6) - (8)].d), 1, floatOptions, charOptions);
      (yyval.d) = (yyvsp[(6) - (8)].d);
      Free(Struct_Name);
    ;}
    break;

  case 458:
#line 5213 "Gmsh.y"
    { Struct_NameSpace = NULL; Struct_Name = (yyvsp[(1) - (1)].c); ;}
    break;

  case 459:
#line 5215 "Gmsh.y"
    { Struct_NameSpace = (yyvsp[(1) - (4)].c); Struct_Name = (yyvsp[(4) - (4)].c); ;}
    break;

  case 460:
#line 5220 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); flag_tSTRING_alloc = 1; ;}
    break;

  case 462:
#line 5231 "Gmsh.y"
    {
      std::string key((yyvsp[(2) - (3)].c)), val(Struct_Name);
      gmsh_yystringsymbols[key] = std::vector<std::string>(1, val);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 463:
#line 5240 "Gmsh.y"
    {
      memcpy((yyval.v), (yyvsp[(1) - (1)].v), 5*sizeof(double));
    ;}
    break;

  case 464:
#line 5244 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = -(yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 465:
#line 5248 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 466:
#line 5252 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(1) - (3)].v)[i] - (yyvsp[(3) - (3)].v)[i];
    ;}
    break;

  case 467:
#line 5256 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(1) - (3)].v)[i] + (yyvsp[(3) - (3)].v)[i];
    ;}
    break;

  case 468:
#line 5263 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (11)].d);  (yyval.v)[1] = (yyvsp[(4) - (11)].d);  (yyval.v)[2] = (yyvsp[(6) - (11)].d);  (yyval.v)[3] = (yyvsp[(8) - (11)].d); (yyval.v)[4] = (yyvsp[(10) - (11)].d);
    ;}
    break;

  case 469:
#line 5267 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (9)].d);  (yyval.v)[1] = (yyvsp[(4) - (9)].d);  (yyval.v)[2] = (yyvsp[(6) - (9)].d);  (yyval.v)[3] = (yyvsp[(8) - (9)].d); (yyval.v)[4] = 1.0;
    ;}
    break;

  case 470:
#line 5271 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (7)].d);  (yyval.v)[1] = (yyvsp[(4) - (7)].d);  (yyval.v)[2] = (yyvsp[(6) - (7)].d);  (yyval.v)[3] = 0.0; (yyval.v)[4] = 1.0;
    ;}
    break;

  case 471:
#line 5275 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (7)].d);  (yyval.v)[1] = (yyvsp[(4) - (7)].d);  (yyval.v)[2] = (yyvsp[(6) - (7)].d);  (yyval.v)[3] = 0.0; (yyval.v)[4] = 1.0;
    ;}
    break;

  case 472:
#line 5282 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(List_T*));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].l)));
    ;}
    break;

  case 473:
#line 5287 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].l)));
    ;}
    break;

  case 474:
#line 5294 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d)));
    ;}
    break;

  case 475:
#line 5299 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 476:
#line 5303 "Gmsh.y"
    {
      // creates an empty list
      (yyval.l) = List_Create(2, 1, sizeof(double));
    ;}
    break;

  case 477:
#line 5308 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 478:
#line 5312 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) = - (*pd);
      }
    ;}
    break;

  case 479:
#line 5320 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (5)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) *= (yyvsp[(1) - (5)].d);
      }
    ;}
    break;

  case 480:
#line 5331 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 481:
#line 5335 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (1)].c), "*") || !strcmp((yyvsp[(1) - (1)].c), "all"))
        (yyval.l) = 0;
      else{
        yyerror("Unknown special string for list replacement");
        (yyval.l) = List_Create(2, 1, sizeof(double));
      }
    ;}
    break;

  case 482:
#line 5347 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (2)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) = - (*pd);
      }
    ;}
    break;

  case 483:
#line 5355 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (3)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) *= (yyvsp[(1) - (3)].d);
      }
    ;}
    break;

  case 484:
#line 5363 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      for(double d = (yyvsp[(1) - (3)].d); ((yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d)) ? (d <= (yyvsp[(3) - (3)].d)) : (d >= (yyvsp[(3) - (3)].d));
          ((yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d)) ? (d += 1.) : (d -= 1.))
	List_Add((yyval.l), &d);
    ;}
    break;

  case 485:
#line 5370 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!(yyvsp[(5) - (5)].d)){  //|| ($1 < $3 && $5 < 0) || ($1 > $3 && $5 > 0)
        yymsg(0, "Wrong increment in '%g:%g:%g'", (yyvsp[(1) - (5)].d), (yyvsp[(3) - (5)].d), (yyvsp[(5) - (5)].d));
      }
      else
	for(double d = (yyvsp[(1) - (5)].d); ((yyvsp[(5) - (5)].d) > 0) ? (d <= (yyvsp[(3) - (5)].d)) : (d >= (yyvsp[(3) - (5)].d)); d += (yyvsp[(5) - (5)].d))
	  List_Add((yyval.l), &d);
   ;}
    break;

  case 486:
#line 5380 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 1, sizeof(double));
      int tag = (int)(yyvsp[(3) - (4)].d);
      double x = 0., y = 0., z = 0.;
      bool found = GModel::current()->getGEOInternals()->getVertex(tag, x, y, z);
      if(!found && GModel::current()->getOCCInternals())
        found = GModel::current()->getOCCInternals()->getVertex(tag, x, y, z);
      if(!found){
        GVertex *gv = GModel::current()->getVertexByTag(tag);
        if(gv){
          x = gv->x();
          y = gv->y();
          z = gv->z();
        }
        else{
          yymsg(0, "Unknown model vertex with tag %d", tag);
        }
      }
      List_Add((yyval.l), &x);
      List_Add((yyval.l), &y);
      List_Add((yyval.l), &z);
    ;}
    break;

  case 487:
#line 5403 "Gmsh.y"
    {
      (yyval.l) = GetAllElementaryEntityNumbers(0);
    ;}
    break;

  case 488:
#line 5407 "Gmsh.y"
    {
      (yyval.l) = GetAllElementaryEntityNumbers(1);
    ;}
    break;

  case 489:
#line 5411 "Gmsh.y"
    {
      (yyval.l) = GetAllElementaryEntityNumbers(2);
    ;}
    break;

  case 490:
#line 5415 "Gmsh.y"
    {
      (yyval.l) = GetAllElementaryEntityNumbers(3);
    ;}
    break;

  case 491:
#line 5419 "Gmsh.y"
    {
      (yyval.l) = GetAllPhysicalEntityNumbers(0);
    ;}
    break;

  case 492:
#line 5423 "Gmsh.y"
    {
      (yyval.l) = GetAllPhysicalEntityNumbers(1);
    ;}
    break;

  case 493:
#line 5427 "Gmsh.y"
    {
      (yyval.l) = GetAllPhysicalEntityNumbers(2);
    ;}
    break;

  case 494:
#line 5431 "Gmsh.y"
    {
      (yyval.l) = GetAllPhysicalEntityNumbers(3);
    ;}
    break;

  case 495:
#line 5435 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
        double num;
        List_Read((yyvsp[(4) - (5)].l), i, &num);
        PhysicalGroup *p = FindPhysicalGroup((int)num, MSH_PHYSICAL_POINT);
        if(p){
          for(int j = 0; j < List_Nbr(p->Entities); j++){
            int nume;
            List_Read(p->Entities, j, &nume);
            double d = nume;
            List_Add((yyval.l), &d);
          }
        }
        else{
          std::map<int, std::vector<GEntity*> > groups;
          GModel::current()->getPhysicalGroups(0, groups);
          std::map<int, std::vector<GEntity*> >::iterator it = groups.find((int)num);
          if(it != groups.end()){
            for(unsigned j = 0; j < it->second.size(); j++){
              double d = it->second[j]->tag();
              List_Add((yyval.l), &d);
            }
          }
        }
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 496:
#line 5464 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
        double num;
        List_Read((yyvsp[(4) - (5)].l), i, &num);
        PhysicalGroup *p = FindPhysicalGroup((int)num, MSH_PHYSICAL_LINE);
        if(p){
          for(int j = 0; j < List_Nbr(p->Entities); j++){
            int nume;
            List_Read(p->Entities, j, &nume);
            double d = nume;
            List_Add((yyval.l), &d);
          }
        }
        else{
          std::map<int, std::vector<GEntity*> > groups;
          GModel::current()->getPhysicalGroups(1, groups);
          std::map<int, std::vector<GEntity*> >::iterator it = groups.find((int)num);
          if(it != groups.end()){
            for(unsigned j = 0; j < it->second.size(); j++){
              double d = it->second[j]->tag();
              List_Add((yyval.l), &d);
            }
          }
        }
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 497:
#line 5493 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
        double num;
        List_Read((yyvsp[(4) - (5)].l), i, &num);
        PhysicalGroup *p = FindPhysicalGroup((int)num, MSH_PHYSICAL_SURFACE);
        if(p){
          for(int j = 0; j < List_Nbr(p->Entities); j++){
            int nume;
            List_Read(p->Entities, j, &nume);
            double d = nume;
            List_Add((yyval.l), &d);
          }
        }
        else{
          std::map<int, std::vector<GEntity*> > groups;
          GModel::current()->getPhysicalGroups(2, groups);
          std::map<int, std::vector<GEntity*> >::iterator it = groups.find((int)num);
          if(it != groups.end()){
            for(unsigned j = 0; j < it->second.size(); j++){
              double d = it->second[j]->tag();
              List_Add((yyval.l), &d);
            }
          }
        }
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 498:
#line 5522 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++){
        double num;
        List_Read((yyvsp[(4) - (5)].l), i, &num);
        PhysicalGroup *p = FindPhysicalGroup((int)num, MSH_PHYSICAL_VOLUME);
        if(p){
          for(int j = 0; j < List_Nbr(p->Entities); j++){
            int nume;
            List_Read(p->Entities, j, &nume);
            double d = nume;
            List_Add((yyval.l), &d);
          }
        }
        else{
          std::map<int, std::vector<GEntity*> > groups;
          GModel::current()->getPhysicalGroups(3, groups);
          std::map<int, std::vector<GEntity*> >::iterator it = groups.find((int)num);
          if(it != groups.end()){
            for(unsigned j = 0; j < it->second.size(); j++){
              double d = it->second[j]->tag();
              List_Add((yyval.l), &d);
            }
          }
        }
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 499:
#line 5552 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      (yyval.l) = List_Create(10, 1, sizeof(double));
      SBoundingBox3d box((yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d));
      std::vector<GEntity*> entities;
      GModel::current()->getEntitiesInBox(entities, box, 0);
      for(unsigned int i = 0; i < entities.size(); i++){
        double d = entities[i]->tag();
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 500:
#line 5569 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      (yyval.l) = List_Create(10, 1, sizeof(double));
      SBoundingBox3d box((yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d));
      std::vector<GEntity*> entities;
      GModel::current()->getEntitiesInBox(entities, box, 1);
      for(unsigned int i = 0; i < entities.size(); i++){
        double d = entities[i]->tag();
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 501:
#line 5586 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      (yyval.l) = List_Create(10, 1, sizeof(double));
      SBoundingBox3d box((yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d));
      std::vector<GEntity*> entities;
      GModel::current()->getEntitiesInBox(entities, box, 2);
      for(unsigned int i = 0; i < entities.size(); i++){
        double d = entities[i]->tag();
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 502:
#line 5603 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      (yyval.l) = List_Create(10, 1, sizeof(double));
      SBoundingBox3d box((yyvsp[(5) - (16)].d), (yyvsp[(7) - (16)].d), (yyvsp[(9) - (16)].d), (yyvsp[(11) - (16)].d), (yyvsp[(13) - (16)].d), (yyvsp[(15) - (16)].d));
      std::vector<GEntity*> entities;
      GModel::current()->getEntitiesInBox(entities, box, 3);
      for(unsigned int i = 0; i < entities.size(); i++){
        double d = entities[i]->tag();
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 503:
#line 5619 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 504:
#line 5629 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 505:
#line 5639 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 506:
#line 5649 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (3)].c)]);
	for(unsigned int i = 0; i < s.value.size(); i++)
	  List_Add((yyval.l), &s.value[i]);
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 507:
#line 5661 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (3)].c)]);
	for(unsigned int i = 0; i < s.value.size(); i++)
	  List_Add((yyval.l), &s.value[i]);
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 508:
#line 5674 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(3) - (4)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(3) - (4)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(3) - (4)].c)]);
	for(unsigned int i = 0; i < s.value.size(); i++)
	  List_Add((yyval.l), &s.value[i]);
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 509:
#line 5686 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 510:
#line 5690 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 511:
#line 5694 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (6)].l);
    ;}
    break;

  case 512:
#line 5698 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (6)].l);
    ;}
    break;

  case 513:
#line 5702 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(1) - (6)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (6)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
	for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	  int index = (int)(*(double*)List_Pointer_Fast((yyvsp[(4) - (6)].l), i));
	  if((int)s.value.size() < index + 1)
	    yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (6)].c), index);
	  else
	    List_Add((yyval.l), &s.value[index]);
	}
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 514:
#line 5720 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(1) - (6)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (6)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
	for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	  int index = (int)(*(double*)List_Pointer_Fast((yyvsp[(4) - (6)].l), i));
	  if((int)s.value.size() < index + 1)
	    yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (6)].c), index);
	  else
	    List_Add((yyval.l), &s.value[index]);
	}
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 515:
#line 5738 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)(yyvsp[(7) - (8)].d); i++) {
	double d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1);
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 516:
#line 5746 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)(yyvsp[(7) - (8)].d); i++) {
	double d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1));
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 517:
#line 5754 "Gmsh.y"
    {
      Msg::Barrier();
      FILE *File;
      (yyval.l) = List_Create(100, 100, sizeof(double));
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      if(!(File = Fopen(tmp.c_str(), "rb"))){
        yymsg(0, "Could not open file '%s'", (yyvsp[(3) - (4)].c));
      }
      else{
	double d;
	while(!feof(File)){
          int ret = fscanf(File, "%lf", &d);
	  if(ret == 1){
	    List_Add((yyval.l), &d);
          }
          else if(ret == EOF){
            break;
          }
          else{
            char dummy[1024];
            fscanf(File, "%s", dummy);
            yymsg(0, "Ignoring '%s' in file '%s'", dummy, (yyvsp[(3) - (4)].c));
          }
        }
	fclose(File);
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 518:
#line 5783 "Gmsh.y"
    {
      double x0 = (yyvsp[(3) - (14)].d), x1 = (yyvsp[(5) - (14)].d), y0 = (yyvsp[(7) - (14)].d), y1 = (yyvsp[(9) - (14)].d), ys = (yyvsp[(11) - (14)].d);
      int N = (int)(yyvsp[(13) - (14)].d);
      std::vector<double> y(N);
      if(!catenary(x0, x1, y0, y1, ys, N, &y[0]))
        Msg::Warning("Catenary did not converge, using linear interpolation");
      (yyval.l) = List_Create(N,10,sizeof(double));
      for(int i = 0; i < N; i++) List_Add((yyval.l), &y[i]);
    ;}
    break;

  case 519:
#line 5793 "Gmsh.y"
    {
      std::vector<double> tmp;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        double d; List_Read((yyvsp[(3) - (4)].l), i, &d);
        tmp.push_back(d);
      }
      std::sort(tmp.begin(), tmp.end());
      std::vector<double>::iterator last = std::unique(tmp.begin(), tmp.end());
      tmp.erase(last, tmp.end());
      (yyval.l) = (yyvsp[(3) - (4)].l);
      List_Reset((yyval.l));
      for(unsigned int i = 0; i < tmp.size(); i++){
        List_Add((yyval.l), &tmp[i]);
      }
    ;}
    break;

  case 520:
#line 5812 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d)));
    ;}
    break;

  case 521:
#line 5817 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 522:
#line 5821 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].d)));
    ;}
    break;

  case 523:
#line 5825 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (3)].l)); i++){
	double d;
	List_Read((yyvsp[(3) - (3)].l), i, &d);
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 524:
#line 5837 "Gmsh.y"
    {
      (yyval.u) = CTX::instance()->packColor((int)(yyvsp[(2) - (9)].d), (int)(yyvsp[(4) - (9)].d), (int)(yyvsp[(6) - (9)].d), (int)(yyvsp[(8) - (9)].d));
    ;}
    break;

  case 525:
#line 5841 "Gmsh.y"
    {
      (yyval.u) = CTX::instance()->packColor((int)(yyvsp[(2) - (7)].d), (int)(yyvsp[(4) - (7)].d), (int)(yyvsp[(6) - (7)].d), 255);
    ;}
    break;

  case 526:
#line 5853 "Gmsh.y"
    {
      int flag = 0;
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (1)].c))){
        if(gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)].size()){
          (yyval.u) = GetColorForString(-1, gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)][0].c_str(), &flag);
        }
        else{
          yymsg(0, "Unknown color '%s'", (yyvsp[(1) - (1)].c));
          (yyval.u) = 0;
        }
      }
      else
        (yyval.u) = GetColorForString(-1, (yyvsp[(1) - (1)].c), &flag);
      if(flag) yymsg(0, "Unknown color '%s'", (yyvsp[(1) - (1)].c));
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 527:
#line 5870 "Gmsh.y"
    {
      unsigned int val = 0;
      ColorOption(GMSH_GET, (yyvsp[(1) - (5)].c), 0, (yyvsp[(5) - (5)].c), val);
      (yyval.u) = val;
      Free((yyvsp[(1) - (5)].c)); Free((yyvsp[(5) - (5)].c));
    ;}
    break;

  case 528:
#line 5880 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 529:
#line 5884 "Gmsh.y"
    {
      (yyval.l) = List_Create(256, 10, sizeof(unsigned int));
      GmshColorTable *ct = GetColorTable((int)(yyvsp[(3) - (6)].d));
      if(!ct)
	yymsg(0, "View[%d] does not exist", (int)(yyvsp[(3) - (6)].d));
      else{
	for(int i = 0; i < ct->size; i++)
	  List_Add((yyval.l), &ct->table[i]);
      }
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 530:
#line 5899 "Gmsh.y"
    {
      (yyval.l) = List_Create(256, 10, sizeof(unsigned int));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].u)));
    ;}
    break;

  case 531:
#line 5904 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].u)));
    ;}
    break;

  case 532:
#line 5911 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c);
    ;}
    break;

  case 533:
#line 5915 "Gmsh.y"
    {
      std::string val;
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (1)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (1)].c));
      else if(gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)].size() == 1)
        val = gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)][0];
      else
        yymsg(0, "Expected single valued string variable '%s'", (yyvsp[(1) - (1)].c));
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 534:
#line 5928 "Gmsh.y"
    {
      std::string val;
      int j = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (4)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (4)].c));
      else if(j >= 0 && j < (int)gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)].size())
        val = gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)][j];
      else
        yymsg(0, "Index %d out of range", j);
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 535:
#line 5942 "Gmsh.y"
    {
      std::string val;
      int j = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (4)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (4)].c));
      else if(j >= 0 && j < (int)gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)].size())
        val = gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)][j];
      else
        yymsg(0, "Index %d out of range", j);
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 536:
#line 5956 "Gmsh.y"
    {
      std::string val;
      int j = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (4)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (4)].c));
      else if(j >= 0 && j < (int)gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)].size())
        val = gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)][j];
      else
        yymsg(0, "Index %d out of range", j);
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 537:
#line 5970 "Gmsh.y"
    {
      std::string val;
      int j = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (4)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (4)].c));
      else if(j >= 0 && j < (int)gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)].size())
        val = gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)][j];
      else
        yymsg(0, "Index %d out of range", j);
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 538:
#line 5985 "Gmsh.y"
    {
      std::string out;
      std::string key((yyvsp[(1) - (3)].c));
      if(StructTable_M.count(key)) {
        std::string key2((yyvsp[(3) - (3)].c));
        if(StructTable_M[key]._copt.count(key2)) {
          out = StructTable_M[key]._copt[key2][0];
        }
        else {
	  yymsg(0, "Unknown member '%s' of Struct %s", (yyvsp[(3) - (3)].c), (yyvsp[(1) - (3)].c));
	}
      }
      else  {
        StringOption(GMSH_GET, (yyvsp[(1) - (3)].c), 0, (yyvsp[(3) - (3)].c), out);
      }
      (yyval.c) = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(1) - (3)].c));
      if (flag_tSTRING_alloc) Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 539:
#line 6007 "Gmsh.y"
    {
      std::string out;
      StringOption(GMSH_GET, (yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(6) - (6)].c), out);
      (yyval.c) = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(6) - (6)].c));
    ;}
    break;

  case 540:
#line 6018 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c);
    ;}
    break;

  case 541:
#line 6022 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 542:
#line 6026 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc(32 * sizeof(char));
      time_t now;
      time(&now);
      strcpy((yyval.c), ctime(&now));
      (yyval.c)[strlen((yyval.c)) - 1] = '\0';
    ;}
    break;

  case 543:
#line 6034 "Gmsh.y"
    {
      std::string exe = Msg::GetExecutableName();
      (yyval.c) = (char *)Malloc(exe.size() + 1);
      strcpy((yyval.c), exe.c_str());
    ;}
    break;

  case 544:
#line 6040 "Gmsh.y"
    {
      std::string action = Msg::GetOnelabAction();
      (yyval.c) = (char *)Malloc(action.size() + 1);
      strcpy((yyval.c), action.c_str());
    ;}
    break;

  case 545:
#line 6046 "Gmsh.y"
    {
      const char *env = GetEnvironmentVar((yyvsp[(3) - (4)].c));
      if(!env) env = "";
      (yyval.c) = (char *)Malloc((sizeof(env) + 1) * sizeof(char));
      strcpy((yyval.c), env);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 546:
#line 6054 "Gmsh.y"
    {
      std::string s = Msg::GetString((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (6)].c));
      Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 547:
#line 6062 "Gmsh.y"
    {
      std::string s = Msg::GetOnelabString((yyvsp[(3) - (4)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 548:
#line 6069 "Gmsh.y"
    {
      std::string s = Msg::GetOnelabString((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (6)].c));
      Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 549:
#line 6077 "Gmsh.y"
    {
      int size = 1;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        size += strlen(*(char**)List_Pointer((yyvsp[(3) - (4)].l), i)) + 1;
      (yyval.c) = (char*)Malloc(size * sizeof(char));
      (yyval.c)[0] = '\0';
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        char *s;
        List_Read((yyvsp[(3) - (4)].l), i, &s);
        strcat((yyval.c), s);
        Free(s);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 550:
#line 6092 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (4)].c)) + 1) * sizeof(char));
      int i;
      for(i = strlen((yyvsp[(3) - (4)].c)) - 1; i >= 0; i--){
	if((yyvsp[(3) - (4)].c)[i] == '.'){
	  strncpy((yyval.c), (yyvsp[(3) - (4)].c), i);
	  (yyval.c)[i]='\0';
	  break;
	}
      }
      if(i <= 0) strcpy((yyval.c), (yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 551:
#line 6106 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (4)].c)) + 1) * sizeof(char));
      int i;
      for(i = strlen((yyvsp[(3) - (4)].c)) - 1; i >= 0; i--){
	if((yyvsp[(3) - (4)].c)[i] == '/' || (yyvsp[(3) - (4)].c)[i] == '\\')
	  break;
      }
      if(i <= 0)
	strcpy((yyval.c), (yyvsp[(3) - (4)].c));
      else
	strcpy((yyval.c), &(yyvsp[(3) - (4)].c)[i+1]);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 552:
#line 6120 "Gmsh.y"
    {
      std::string input = (yyvsp[(3) - (8)].c);
      std::string substr_old = (yyvsp[(5) - (8)].c);
      std::string substr_new = (yyvsp[(7) - (8)].c);
      std::string ret = ReplaceSubString(substr_old, substr_new, input);
      (yyval.c) = (char *)Malloc((ret.size() + 1) * sizeof(char));
      strcpy((yyval.c), ret.c_str());
      Free((yyvsp[(3) - (8)].c));
      Free((yyvsp[(5) - (8)].c));
      Free((yyvsp[(7) - (8)].c));
    ;}
    break;

  case 553:
#line 6132 "Gmsh.y"
    {
      int size = 1;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        size += strlen(*(char**)List_Pointer((yyvsp[(3) - (4)].l), i)) + 1;
      (yyval.c) = (char*)Malloc(size * sizeof(char));
      (yyval.c)[0] = '\0';
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        char *s;
        List_Read((yyvsp[(3) - (4)].l), i, &s);
        strcat((yyval.c), s);
        Free(s);
        if(i != List_Nbr((yyvsp[(3) - (4)].l)) - 1) strcat((yyval.c), "\n");
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 554:
#line 6148 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        (yyvsp[(3) - (4)].c)[i] = toupper((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 555:
#line 6157 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        (yyvsp[(3) - (4)].c)[i] = tolower((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 556:
#line 6166 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        if (i > 0 && (yyvsp[(3) - (4)].c)[i-1] != '_')
          (yyvsp[(3) - (4)].c)[i] = tolower((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 557:
#line 6176 "Gmsh.y"
    {
      if((yyvsp[(3) - (8)].d)){
        (yyval.c) = (yyvsp[(5) - (8)].c);
        Free((yyvsp[(7) - (8)].c));
      }
      else{
        (yyval.c) = (yyvsp[(7) - (8)].c);
        Free((yyvsp[(5) - (8)].c));
      }
    ;}
    break;

  case 558:
#line 6187 "Gmsh.y"
    {
      std::string in = (yyvsp[(3) - (8)].c);
      std::string out = in.substr((int)(yyvsp[(5) - (8)].d), (int)(yyvsp[(7) - (8)].d));
      (yyval.c) = (char *)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(3) - (8)].c));
    ;}
    break;

  case 559:
#line 6195 "Gmsh.y"
    {
      std::string in = (yyvsp[(3) - (6)].c);
      std::string out = in.substr((int)(yyvsp[(5) - (6)].d), std::string::npos);
      (yyval.c) = (char *)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 560:
#line 6203 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 561:
#line 6207 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = PrintListOfDouble((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].l), tmpstring);
      if(i < 0){
	yymsg(0, "Too few arguments in Sprintf");
	(yyval.c) = (yyvsp[(3) - (6)].c);
      }
      else if(i > 0){
	yymsg(0, "%d extra argument%s in Sprintf", i, (i > 1) ? "s" : "");
	(yyval.c) = (yyvsp[(3) - (6)].c);
      }
      else{
	(yyval.c) = (char*)Malloc((strlen(tmpstring) + 1) * sizeof(char));
	strcpy((yyval.c), tmpstring);
	Free((yyvsp[(3) - (6)].c));
      }
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 562:
#line 6226 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 563:
#line 6233 "Gmsh.y"
    {
      std::string tmp = SplitFileName(GetAbsolutePath(gmsh_yyname))[0];
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
    ;}
    break;

  case 564:
#line 6239 "Gmsh.y"
    {
      std::string tmp = SplitFileName((yyvsp[(3) - (4)].c))[0];
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 565:
#line 6246 "Gmsh.y"
    {
      std::string tmp = GetAbsolutePath((yyvsp[(3) - (4)].c));
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 566:
#line 6253 "Gmsh.y"
    { floatOptions.clear(); charOptions.clear(); ;}
    break;

  case 567:
#line 6255 "Gmsh.y"
    {
      std::string val((yyvsp[(3) - (6)].c));
      Msg::ExchangeOnelabParameter("", val, floatOptions, charOptions);
      (yyval.c) = (char*)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 568:
#line 6264 "Gmsh.y"
    {
      std::string out;
      int val = (int)(yyvsp[(3) - (4)].d);
      std::map<std::string, Struct>::iterator it;
      for (it = StructTable_M.begin(); it != StructTable_M.end(); ++it )
        if (it->second._value == val) out = it->first;
      (yyval.c) = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
    ;}
    break;

  case 569:
#line 6278 "Gmsh.y"
    { Struct_NameSpace = NULL; (yyval.d) = (yyvsp[(2) - (2)].d); ;}
    break;

  case 570:
#line 6280 "Gmsh.y"
    { Struct_NameSpace = (yyvsp[(1) - (5)].c); (yyval.d) = (yyvsp[(5) - (5)].d); ;}
    break;

  case 571:
#line 6286 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(char*));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].c)));
    ;}
    break;

  case 572:
#line 6291 "Gmsh.y"
    { List_Add((yyval.l), &((yyvsp[(3) - (3)].c))); ;}
    break;

  case 573:
#line 6297 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char));
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)); strcat((yyval.c), tmpstr);
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 574:
#line 6306 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 575:
#line 6319 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 576:
#line 6322 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 577:
#line 6326 "Gmsh.y"
    { (yyval.c) = (yyvsp[(3) - (4)].c); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 13576 "Gmsh.tab.cpp"
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


#line 6329 "Gmsh.y"


void assignVariable(const std::string &name, int index, int assignType,
                    double value)
{
  if(!gmsh_yysymbols.count(name)){
    if(!assignType){
      gmsh_yysymbol &s(gmsh_yysymbols[name]);
      s.list = true;
      s.value.resize(index + 1, 0.);
      s.value[index] = value;
    }
    else
      yymsg(0, "Unknown variable '%s'", name.c_str());
  }
  else{
    gmsh_yysymbol &s(gmsh_yysymbols[name]);
    if(s.list){
      if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
      switch(assignType){
      case 0 : s.value[index] = value; break;
      case 1 : s.value[index] += value; break;
      case 2 : s.value[index] -= value; break;
      case 3 : s.value[index] *= value; break;
      case 4 :
        if(value) s.value[index] /= value;
        else yymsg(0, "Division by zero in '%s[%d] /= %g'",
                   name.c_str(), index, value);
        break;
      }
    }
    else
      yymsg(0, "Variable '%s' is not a list", name.c_str());
  }
}

void assignVariables(const std::string &name, List_T *indices, int assignType,
                     List_T *values)
{
  if(List_Nbr(indices) != List_Nbr(values)){
    yymsg(0, "Incompatible array dimensions in affectation");
  }
  else{
    if(!gmsh_yysymbols.count(name)){
      if(!assignType){
        gmsh_yysymbol &s(gmsh_yysymbols[name]);
        s.list = true;
        for(int i = 0; i < List_Nbr(indices); i++){
          int index = (int)(*(double*)List_Pointer(indices, i));
          s.value.resize(index + 1, 0.);
          s.value[index] = *(double*)List_Pointer(values, i);
        }
      }
      else
        yymsg(0, "Unknown variable '%s'", name.c_str());
    }
    else{
      gmsh_yysymbol &s(gmsh_yysymbols[name]);
      if(s.list){
        for(int i = 0; i < List_Nbr(indices); i++){
          int index = (int)(*(double*)List_Pointer(indices, i));
          double d = *(double*)List_Pointer(values, i);
          if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
          switch(assignType){
          case 0 : s.value[index] = d; break;
          case 1 : s.value[index] += d; break;
          case 2 : s.value[index] -= d; break;
          case 3 : s.value[index] *= d; break;
          case 4 :
            if(d) s.value[index] /= d;
            else yymsg(0, "Division by zero in '%s[%d] /= %g'", name.c_str(), index, d);
            break;
          }
        }
      }
      else
        yymsg(0, "Variable '%s' is not a list", name.c_str());
    }
  }
}

void incrementVariable(const std::string &name, int index, double value)
{
  if(!gmsh_yysymbols.count(name))
    yymsg(0, "Unknown variable '%s'", name.c_str());
  else{
    gmsh_yysymbol &s(gmsh_yysymbols[name]);
    if(s.list){
      if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
      s.value[index] += value;
    }
    else
      yymsg(0, "Variable '%s' is not a list", name.c_str());
  }
}

int PrintListOfDouble(char *format, List_T *list, char *buffer)
{
  // if format does not contain formatting characters, dump the list (useful for
  // quick debugging of lists)
  int numFormats = 0;
  for(unsigned int i = 0; i < strlen(format); i++)
    if(format[i] == '%') numFormats++;
  if(!numFormats){
    strcpy(buffer, format);
    for(int i = 0; i < List_Nbr(list); i++){
      double d;
      List_Read(list, i, &d);
      char tmp[256];
      sprintf(tmp, " [%d]%g", i, d);
      strcat(buffer, tmp);
    }
    return 0;
  }

  char tmp1[256], tmp2[256];
  int j = 0, k = 0;
  buffer[j] = '\0';

  while(j < (int)strlen(format) && format[j] != '%') j++;
  strncpy(buffer, format, j);
  buffer[j] = '\0';
  for(int i = 0; i < List_Nbr(list); i++){
    k = j;
    j++;
    if(j < (int)strlen(format)){
      if(format[j] == '%'){
	strcat(buffer, "%");
	j++;
      }
      while(j < (int)strlen(format) && format[j] != '%') j++;
      if(k != j){
	strncpy(tmp1, &(format[k]), j-k);
	tmp1[j-k] = '\0';
	sprintf(tmp2, tmp1, *(double*)List_Pointer(list, i));
	strcat(buffer, tmp2);
      }
    }
    else
      return List_Nbr(list) - i;
  }
  if(j != (int)strlen(format))
    return -1;
  return 0;
}

void PrintParserSymbols(bool help, std::vector<std::string> &vec)
{
  if(help){
    vec.push_back("//");
    vec.push_back("// Numbers");
    vec.push_back("//");
  }
  for(std::map<std::string, gmsh_yysymbol>::iterator it = gmsh_yysymbols.begin();
      it != gmsh_yysymbols.end(); it++){
    gmsh_yysymbol s(it->second);
    std::ostringstream sstream;
    sstream.precision(12);
    sstream << it->first;
    if(s.list){
      sstream << "[] = {";
      for(unsigned int i = 0; i < s.value.size(); i++){
        if(i) sstream << ", ";
        sstream << s.value[i];
      }
      sstream << "}";
    }
    else
      sstream << " = " << s.value[0];
    sstream << ";";
    vec.push_back(sstream.str());
  }
  if(help){
    vec.push_back("//");
    vec.push_back("// Strings");
    vec.push_back("//");
  }
  for(std::map<std::string, std::vector<std::string> >::iterator it =
        gmsh_yystringsymbols.begin(); it != gmsh_yystringsymbols.end(); it++){
    if(it->second.size() == 1)
      vec.push_back(it->first + " = \"" + it->second[0] + "\";");
    else{
      std::string s = it->first + "[] = Str(";
      for(unsigned int i = 0; i < it->second.size(); i++){
        if(i) s += ", ";
        s += std::string("\"") + it->second[i] + "\"";
      }
      s += ");";
      vec.push_back(s);
    }
  }
}

fullMatrix<double> ListOfListOfDouble2Matrix(List_T *list)
{
  // Warning: this returns a fullMatrix copy, and deletes the input list
  int M = List_Nbr(list);
  int N = 0;
  for(int i = 0; i < M; i++){
    List_T *line = *(List_T**)List_Pointer_Fast(list, i);
    N = std::max(N, List_Nbr(line));
  }
  fullMatrix<double> mat(M, N);
  for(int i = 0; i < M; i++){
    List_T *line = *(List_T**)List_Pointer_Fast(list, i);
    for(int j = 0; j < List_Nbr(line); j++){
      double val;
      List_Read(line, j, &val);
      mat(i, j) = val;
    }
  }
  for(int i = 0; i < List_Nbr(list); i++)
    List_Delete(*(List_T**)List_Pointer(list, i));
  List_Delete(list);
  return mat;
}

void ListOfDouble2Vector(List_T *list, std::vector<int> &v)
{
  v.clear();
  if(!list) return;
  v.reserve(List_Nbr(list));
  for(int i = 0; i < List_Nbr(list); i++){
    double d;
    List_Read(list, i, &d);
    v.push_back((int)d);
  }
}

void ListOfDouble2Vector(List_T *list, std::vector<double> &v)
{
  v.clear();
  if(!list) return;
  v.reserve(List_Nbr(list));
  for(int i = 0; i < List_Nbr(list); i++){
    double d;
    List_Read(list, i, &d);
    v.push_back(d);
  }
}

void ListOfShapes2Vectors(List_T *list, std::vector<int> v[4])
{
  Shape s;
  for(int i = 0; i < List_Nbr(list); i++){
    List_Read(list, i, &s);
    int dim = s.Type / 100 - 1;
    if(dim >= 0 && dim <= 3) v[dim].push_back(s.Num);
  }
}

void Vectors2ListOfShapes(std::vector<int> tags[4], List_T *list)
{
  for(int dim = 0; dim < 4; dim++){
    Shape s;
    s.Type =
      (dim == 3) ? MSH_VOLUME_FROM_GMODEL :
      (dim == 2) ? MSH_SURF_FROM_GMODEL :
      (dim == 1) ? MSH_SEGM_FROM_GMODEL :
      MSH_POINT_FROM_GMODEL;
    for(unsigned int i = 0; i < tags[dim].size(); i++){
      s.Num = tags[dim][i];
      List_Add(list, &s);
    }
  }
}

void yyerror(const char *s)
{
  Msg::Error("'%s', line %d : %s (%s)", gmsh_yyname.c_str(), gmsh_yylineno - 1,
             s, gmsh_yytext);
  gmsh_yyerrorstate++;
}

void yymsg(int level, const char *fmt, ...)
{
  va_list args;
  char tmp[1024];

  va_start(args, fmt);
  vsprintf(tmp, fmt, args);
  va_end(args);

  if(level == 0){
    Msg::Error("'%s', line %d : %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
    gmsh_yyerrorstate++;
  }
  else{
    Msg::Warning("'%s', line %d : %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
  }
}

void addPeriodicFace(int iTarget, int iSource,
                     const std::vector<double>& affineTransform)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  GFace *target = GModel::current()->getFaceByTag(abs(iTarget));
  GFace *source = GModel::current()->getFaceByTag(abs(iSource));
  if (!target || !source) {
    Msg::Error("Could not find edge slave %d or master %d for periodic copy",
               iTarget, iSource);
  }
  else target->setMeshMaster(source, affineTransform);
}

void addPeriodicFace(int iTarget, int iSource,
                     const std::map<int,int>& edgeCounterparts)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  Msg::Info("Encoding periodic connection between %d and %d", iTarget, iSource);
  std::map<int,int>::const_iterator sIter = edgeCounterparts.begin();
  for (; sIter != edgeCounterparts.end(); ++sIter) {
    Msg::Info("%d - %d", sIter->first, sIter->second);
  }

  GFace *target = GModel::current()->getFaceByTag(abs(iTarget));
  GFace *source = GModel::current()->getFaceByTag(abs(iSource));
  if (!target || !source) {
    Msg::Error("Could not find surface slave %d or master %d for periodic copy",
               iTarget,iSource);
  }
  else target->setMeshMaster(source, edgeCounterparts);
}

void addPeriodicEdge(int iTarget,int iSource,
                     const std::vector<double>& affineTransform)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  GEdge *target = GModel::current()->getEdgeByTag(abs(iTarget));
  GEdge *source = GModel::current()->getEdgeByTag(abs(iSource));
  if (!target || !source)
    Msg::Error("Could not find surface %d or %d for periodic copy",
               iTarget,iSource);
  if (affineTransform.size() >= 12) {
    target->setMeshMaster(source, affineTransform);
  }
  else {
    target->setMeshMaster(source, iSource * iTarget < 0 ? -1 : 1);
  }
}

void computeAffineTransformation(SPoint3& origin, SPoint3& axis,
                                 double angle, SPoint3& translation,
                                 std::vector<double>& tfo)
{
  tfo.resize(16,0.0);

  double ca = cos(angle);
  double sa = sin(angle);

  double ux = axis.x();
  double uy = axis.y();
  double uz = axis.z();

  tfo.resize(16);

  tfo[0*4+0] = ca + ux*ux*(1.-ca);
  tfo[0*4+1] = ux*uy*(1.-ca) - uz * sa;
  tfo[0*4+2] = ux*uz*(1.-ca) + uy * sa;

  tfo[1*4+0] = ux*uy*(1.-ca) + uz * sa;
  tfo[1*4+1] = ca + uy*uy*(1.-ca);
  tfo[1*4+2] = uy*uz*(1.-ca) - ux * sa;

  tfo[2*4+0] = ux*uz*(1.-ca) - uy * sa;
  tfo[2*4+1] = uy*uz*(1.-ca) + ux * sa;
  tfo[2*4+2] = ca + uz*uz*(1.-ca);

  int idx = 0;
  for (size_t i = 0; i < 3; i++,idx++) {
    int tIdx = i*4+3;
    tfo[tIdx] = origin[i] + translation[i];
    for (int j = 0; j < 3; j++,idx++) tfo[tIdx] -= tfo[idx] * origin[j];
  }

  for (int i = 0; i < 4; i++) tfo[12+i] = 0;
  tfo[15] = 1;
}

void addEmbedded(int dim, std::vector<int> tags, int dim2, int tag2)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  if(dim2 == 2){
    GFace *gf = GModel::current()->getFaceByTag(tag2);
    if(!gf){
      yymsg(0, "Unknown model face with tag %d", tag2);
      return;
    }
    for(unsigned int i = 0; i < tags.size(); i++){
      if(dim == 0){
        GVertex *gv = GModel::current()->getVertexByTag(tags[i]);
        if(gv)
          gf->addEmbeddedVertex(gv);
        else
          yymsg(0, "Unknown model vertex %d", tags[i]);
      }
      else if(dim == 1){
        GEdge *ge = GModel::current()->getEdgeByTag(tags[i]);
        if(ge)
          gf->addEmbeddedEdge(ge);
        else
          yymsg(0, "Unknown model edge %d", tags[i]);
      }
    }
  }
  else if(dim2 == 3){
    GRegion *gr = GModel::current()->getRegionByTag(tag2);
    if(!gr){
      yymsg(0, "Unknown model region with tag %d", tag2);
      return;
    }
    for(unsigned int i = 0; i < tags.size(); i++){
      if(dim == 0){
        GVertex *gv = GModel::current()->getVertexByTag(tags[i]);
        if(gv)
          gr->addEmbeddedVertex(gv);
        else
          yymsg(0, "Unknown model vertex with tag %d", tags[i]);
      }
      else if(dim == 1){
        GEdge *ge = GModel::current()->getEdgeByTag(tags[i]);
        if(ge)
          gr->addEmbeddedEdge(ge);
        else
          yymsg(0, "Unknown model edge with tag %d", tags[i]);
      }
      else if(dim == 2){
        GFace *gf = GModel::current()->getFaceByTag(tags[i]);
        if(gf)
          gr->addEmbeddedFace(gf);
        else
          yymsg(0, "Unknown model face with tag %d", tags[i]);
      }
    }
  }
}

int NEWPOINT()
{
  int tag = GModel::current()->getGEOInternals()->getMaxTag(0) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(0) + 1);
  return tag;
}

int NEWLINE()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(1) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(1) + 1);
  return tag;
}

int NEWLINELOOP()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(-1) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(-1) + 1);
  return tag;
}

int NEWSURFACE()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(2) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(2) + 1);
  return tag;
}

int NEWSURFACELOOP()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->getMaxTag(-2) + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(-2) + 1);
  return tag;
}

int NEWVOLUME()
{
  int tag = 0;
  if(CTX::instance()->geom.oldNewreg)
    tag = NEWREG();
  else
    tag = GModel::current()->getGEOInternals()->MaxVolumeNum + 1;
  if(GModel::current()->getOCCInternals())
    tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(3) + 1);
  return tag;
}

int NEWREG()
{
  int tag = 0;
  tag = GModel::current()->getGEOInternals()->MaxLineNum;
  tag = std::max(tag, GModel::current()->getGEOInternals()->MaxLineLoopNum);
  tag = std::max(tag, GModel::current()->getGEOInternals()->MaxSurfaceNum);
  tag = std::max(tag, GModel::current()->getGEOInternals()->MaxSurfaceLoopNum);
  tag = std::max(tag, GModel::current()->getGEOInternals()->MaxVolumeNum);
  tag = std::max(tag, GModel::current()->getGEOInternals()->MaxPhysicalNum);
  tag += 1;
  if(GModel::current()->getOCCInternals()){
    for(int i = -2; i < 4; i++)
      tag = std::max(tag, GModel::current()->getOCCInternals()->getMaxTag(i) + 1);
  }
  return tag;
}

int NEWFIELD()
{
#if defined(HAVE_MESH)
  return (GModel::current()->getFields()->maxId() + 1);
#else
  return 0;
#endif
}

int NEWPHYSICAL()
{
  if(CTX::instance()->geom.oldNewreg)
    return NEWREG();
  else
    return (GModel::current()->getGEOInternals()->MaxPhysicalNum + 1);
}

