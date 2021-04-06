/*
                 __________                                      
    _____   __ __\______   \_____  _______  ______  ____ _______ 
   /     \ |  |  \|     ___/\__  \ \_  __ \/  ___/_/ __ \\_  __ \
  |  Y Y  \|  |  /|    |     / __ \_|  | \/\___ \ \  ___/ |  | \/
  |__|_|  /|____/ |____|    (____  /|__|  /____  > \___  >|__|   
        \/                       \/            \/      \/        
  Copyright (C) 2011 Ingo Berg

  Permission is hereby granted, free of charge, to any person obtaining a copy of this 
  software and associated documentation files (the "Software"), to deal in the Software
  without restriction, including without limitation the rights to use, copy, modify, 
  merge, publish, distribute, sublicense, and/or sell copies of the Software, and to 
  permit persons to whom the Software is furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all copies or 
  substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
  NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
  DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 
*/ 
  
#ifndef MU_PARSER_DLL_H
#define MU_PARSER_DLL_H
  
#if defined(WIN32) || defined(_WIN32)
#ifdef MUPARSERLIB_EXPORTS
#define API_EXPORT(TYPE) __declspec(dllexport) TYPE __cdecl
#else   /* 
#define API_EXPORT(TYPE) __declspec(dllimport) TYPE __cdecl
#endif  /* 
#else   /* 
#define API_EXPORT(TYPE) TYPE
#endif  /* 
  
#ifdef __cplusplus
extern "C" 
{
  
#endif  /* 
  
/** \file 
    \brief This file contains the DLL interface of muparser.
*/ 
  
// Basic types
  typedef void *muParserHandle_t;       // parser handle
   
#ifndef _UNICODE
  typedef char muChar_t;        // character type
#else   /* 
  typedef wchar_t muChar_t;     // character type
#endif  /* 
   
  typedef int muInt_t;          // integer type 
  typedef double muFloat_t;     // floating point type
   
// function types for calculation
  typedef muFloat_t (*muFun0_t) ();
   
   
   
   
                                   muFloat_t);
   
                                   muFloat_t);
   
                                   muFloat_t, muFloat_t);
   
                                   muFloat_t, muFloat_t, muFloat_t);
   
                                   muFloat_t, muFloat_t, muFloat_t,
                                   muFloat_t);
   
                                   muFloat_t, muFloat_t, muFloat_t, muFloat_t,
                                   muFloat_t);
   
                                    muFloat_t, muFloat_t, muFloat_t,
                                    muFloat_t, muFloat_t, muFloat_t,
                                    muFloat_t);
   
// Function prototypes for bulkmode functions
  typedef muFloat_t (*muBulkFun0_t) (int, int);
   
   
   
                                       muFloat_t);
   
                                       muFloat_t, muFloat_t);
   
                                       muFloat_t, muFloat_t, muFloat_t);
   
                                       muFloat_t, muFloat_t, muFloat_t,
                                       muFloat_t);
   
                                       muFloat_t, muFloat_t, muFloat_t,
                                       muFloat_t, muFloat_t);
   
                                       muFloat_t, muFloat_t, muFloat_t,
                                       muFloat_t, muFloat_t, muFloat_t);
   
                                       muFloat_t, muFloat_t, muFloat_t,
                                       muFloat_t, muFloat_t, muFloat_t,
                                       muFloat_t);
   
                                        muFloat_t, muFloat_t, muFloat_t,
                                        muFloat_t, muFloat_t, muFloat_t,
                                        muFloat_t, muFloat_t);
   
   
   
   
   
// Functions for parser management
  typedef void (*muErrorHandler_t) (muParserHandle_t a_hParser);        // [optional] callback to an error handler
  typedef muFloat_t *(*muFacFun_t) (const muChar_t *, void *);  // [optional] callback for creating new variables
  typedef muInt_t (*muIdentFun_t) (const muChar_t *, muInt_t *, muFloat_t *);   // [optional] value identification callbacks
   
//-----------------------------------------------------------------------------------------------------
// Constants
  static const int muOPRT_ASCT_LEFT = 0;
   
   
   
   
//-----------------------------------------------------------------------------------------------------
//
//
// muParser C compatible bindings
//
//
//-----------------------------------------------------------------------------------------------------
   
// Basic operations / initialization  
    API_EXPORT (muParserHandle_t) mupCreate (int nBaseType);
   
   
   
                                  const muChar_t * a_szExpr);
   
                                        muFacFun_t a_pFactory,
                                        void *pUserData);
   
   
   
                                           int *nNum);
   
                                   muFloat_t * a_fResult, int nSize);
   
// Defining callbacks / variables / constants
   
    API_EXPORT (void) mupDefineFun0 (muParserHandle_t a_hParser,
                                     const muChar_t * a_szName,
                                     muFun0_t a_pFun, muBool_t a_bOptimize);
   
                                     const muChar_t * a_szName,
                                     muFun1_t a_pFun, muBool_t a_bOptimize);
   
                                     const muChar_t * a_szName,
                                     muFun2_t a_pFun, muBool_t a_bOptimize);
   
                                     const muChar_t * a_szName,
                                     muFun3_t a_pFun, muBool_t a_bOptimize);
   
                                     const muChar_t * a_szName,
                                     muFun4_t a_pFun, muBool_t a_bOptimize);
   
                                     const muChar_t * a_szName,
                                     muFun5_t a_pFun, muBool_t a_bOptimize);
   
                                     const muChar_t * a_szName,
                                     muFun6_t a_pFun, muBool_t a_bOptimize);
   
                                     const muChar_t * a_szName,
                                     muFun7_t a_pFun, muBool_t a_bOptimize);
   
                                     const muChar_t * a_szName,
                                     muFun8_t a_pFun, muBool_t a_bOptimize);
   
                                     const muChar_t * a_szName,
                                     muFun9_t a_pFun, muBool_t a_bOptimize);
   
                                      const muChar_t * a_szName,
                                      muFun10_t a_pFun, muBool_t a_bOptimize);
   
// Defining bulkmode functions
   
    API_EXPORT (void) mupDefineBulkFun0 (muParserHandle_t a_hParser,
                                         const muChar_t * a_szName,
                                         muBulkFun0_t a_pFun);
   
                                         const muChar_t * a_szName,
                                         muBulkFun1_t a_pFun);
   
                                         const muChar_t * a_szName,
                                         muBulkFun2_t a_pFun);
   
                                         const muChar_t * a_szName,
                                         muBulkFun3_t a_pFun);
   
                                         const muChar_t * a_szName,
                                         muBulkFun4_t a_pFun);
   
                                         const muChar_t * a_szName,
                                         muBulkFun5_t a_pFun);
   
                                         const muChar_t * a_szName,
                                         muBulkFun6_t a_pFun);
   
                                         const muChar_t * a_szName,
                                         muBulkFun7_t a_pFun);
   
                                         const muChar_t * a_szName,
                                         muBulkFun8_t a_pFun);
   
                                         const muChar_t * a_szName,
                                         muBulkFun9_t a_pFun);
   
                                          const muChar_t * a_szName,
                                          muBulkFun10_t a_pFun);
   
// string functions
   
    API_EXPORT (void) mupDefineStrFun1 (muParserHandle_t a_hParser,
                                        const muChar_t * a_szName,
                                        muStrFun1_t a_pFun);
   
                                        const muChar_t * a_szName,
                                        muStrFun2_t a_pFun);
   
                                        const muChar_t * a_szName,
                                        muStrFun3_t a_pFun);
   
                                         
                                         
                                         
   
                                      
                                      
                                      
                                      
   
                                       
                                       
   
                                          
                                          
   
                                     
                                     
   
                                         
                                         
   
                                             
                                             
                                             
   
                                            
                                            
                                            
   
// Define character sets for identifiers
   
    API_EXPORT (void) mupDefineNameChars (muParserHandle_t a_hParser,
                                          const muChar_t * a_szCharset);
   
                                          const muChar_t * a_szCharset);
   
                                               const muChar_t * a_szCharset);
   
// Remove all / single variables
   
    API_EXPORT (void) mupRemoveVar (muParserHandle_t a_hParser,
                                    const muChar_t * a_szName);
   
   
   
   
   
// Querying variables / expression variables / constants
    API_EXPORT (int) mupGetExprVarNum (muParserHandle_t a_hParser);
   
   
   
                                     unsigned a_iVar,
                                     const muChar_t ** a_pszName,
                                     muFloat_t ** a_pVar);
   
                                 const muChar_t ** a_pszName,
                                 muFloat_t ** a_pVar);
   
                                   unsigned a_iVar,
                                   const muChar_t ** a_pszName,
                                   muFloat_t * a_pVar);
   
                                    const muChar_t cArgSep);
   
                                    const muChar_t cArgSep);
   
                                          const muChar_t cArgSep);
   
   
// Add value recognition callbacks
   
    API_EXPORT (void) mupAddValIdent (muParserHandle_t a_hParser,
                                      muIdentFun_t);
   
// Error handling
    API_EXPORT (muBool_t) mupError (muParserHandle_t a_hParser);
   
   
                                          muErrorHandler_t a_pErrHandler);
   
   
   
   
                                                    a_hParser);
   
//API_EXPORT(const muChar_t*) mupGetErrorExpr(muParserHandle_t a_hParser);
   
// This is used for .NET only. It creates a new variable allowing the dll to
// manage the variable rather than the .NET garbage collector.
    API_EXPORT (muFloat_t *) mupCreateVar ();
   
   
#ifdef __cplusplus
} 
#endif  /* 
 
#endif                          // include guard