/*
                 __________
                 _____   __ __\______   \_____  _______  ______  ____ _______
                 /     \ |  |  \|     ___/\__  \ \_  __ \/  ___/_/ __ \\_  __ \
                 |  Y Y  \|  |  /|    |     / __ \_|  | \/\___ \ \  ___/ |  | \/
                 |__|_|  /|____/ |____|    (____  /|__|  /____  > \___  >|__|
                 \/                       \/            \/      \/
                 Copyright (C) 2004-2011 Ingo Berg

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
#if defined(MUPARSER_DLL) 
  
#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif  /* 
  
#include "muParserDLL.h"
#include "muParser.h"
#include "muParserInt.h"
#include "muParserError.h"
  
#define MU_TRY  \
  try \ 
{
  
#define MU_CATCH                                                 \
}

\
{
  \
  \
  \
  \
    \
\

\
{
  \
  \
  \
  \
    \
\


/** \file
    \brief This file contains the implementation of the DLL interface of muparser.
    */ 
  
//---------------------------------------------------------------------------
// private types
  typedef
  mu::ParserBase::exception_type
  muError_t;

  mu::ParserBase
  muParser_t;


//---------------------------------------------------------------------------
  class ParserTag 
{

                                    ? (mu::ParserBase *) new mu::
                                    Parser () : 
                                                  muBASETYPE_INT) ? (mu::
                                                                     ParserBase
                                                                     *) new
                                    mu::ParserInt () : NULL) 
    errHandler (NULL) 
  {
  } 
  {
    
  
  
  
  

  
  




//---------------------------------------------------------------------------
//
//
//  unexported functions
//
//
//---------------------------------------------------------------------------
  
//---------------------------------------------------------------------------
  muParser_t * AsParser (muParserHandle_t a_hParser) 
{
  



//---------------------------------------------------------------------------
  ParserTag * AsParserTag (muParserHandle_t a_hParser) 
{
  



//---------------------------------------------------------------------------
#if defined(_WIN32)
#define _CRT_SECURE_NO_DEPRECATE
  
                          DWORD ul_reason_for_call,
                          
{
  
    
  {
  
    
  
  
  
    
  
  



#endif  /* 
  
//---------------------------------------------------------------------------
//
//
//  exported functions
//
//
//---------------------------------------------------------------------------
  
                                       muFacFun_t a_pFactory,
                                       void *pUserData) 
{
  
  


//---------------------------------------------------------------------------
/** \brief Create a new Parser instance and return its handle.
*/ 
  API_EXPORT (muParserHandle_t) mupCreate (int nBaseType) 
{
  
    
  {
  
    return (void *) (new ParserTag (muBASETYPE_FLOAT));
  
    return (void *) (new ParserTag (muBASETYPE_INT));
  
    return NULL;
  



//---------------------------------------------------------------------------
/** \brief Release the parser instance related with a parser handle.
*/ 
  API_EXPORT (void) mupRelease (muParserHandle_t a_hParser) 
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (const muChar_t *)
mupGetVersion (muParserHandle_t a_hParser) 
{
  
  
#ifndef _UNICODE
    sprintf (s_tmpOutBuf, "%s", p->GetVersion ().c_str ());
  
#else   /* 
    wsprintf (s_tmpOutBuf, _T ("%s"), p->GetVersion ().c_str ());
  
#endif  /* 
    
  



//---------------------------------------------------------------------------
/** \brief Evaluate the expression.
*/ 
  API_EXPORT (muFloat_t) mupEval (muParserHandle_t a_hParser) 
{
  
  
  



//---------------------------------------------------------------------------
  API_EXPORT (muFloat_t *) mupEvalMulti (muParserHandle_t a_hParser,
                                         int *nNum) 
{
  
  
  
  



//---------------------------------------------------------------------------
  API_EXPORT (void) mupEvalBulk (muParserHandle_t a_hParser,
                                 muFloat_t * a_res, int nSize) 
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupSetExpr (muParserHandle_t a_hParser, const muChar_t * a_szExpr) 
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupRemoveVar (muParserHandle_t a_hParser, const muChar_t * a_szName) 
{
  
  


//---------------------------------------------------------------------------
/** \brief Release all parser variables.
    \param a_hParser Handle to the parser instance.
    */ 
  API_EXPORT (void)
mupClearVar (muParserHandle_t a_hParser) 
{
  
  


//---------------------------------------------------------------------------
/** \brief Release all parser variables.
    \param a_hParser Handle to the parser instance.
    */ 
  API_EXPORT (void)
mupClearConst (muParserHandle_t a_hParser) 
{
  
  


//---------------------------------------------------------------------------
/** \brief Clear all user defined operators.
    \param a_hParser Handle to the parser instance.
    */ 
  API_EXPORT (void)
mupClearOprt (muParserHandle_t a_hParser) 
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupClearFun (muParserHandle_t a_hParser) 
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineFun0 (muParserHandle_t a_hParser, 
               
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineFun1 (muParserHandle_t a_hParser, 
               
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineFun2 (muParserHandle_t a_hParser, 
               
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineFun3 (muParserHandle_t a_hParser, 
               
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineFun4 (muParserHandle_t a_hParser, 
               
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineFun5 (muParserHandle_t a_hParser, 
               
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineFun6 (muParserHandle_t a_hParser, 
               
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineFun7 (muParserHandle_t a_hParser, 
               
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineFun8 (muParserHandle_t a_hParser, 
               
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineFun9 (muParserHandle_t a_hParser, 
               
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineFun10 (muParserHandle_t a_hParser, 
                
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineBulkFun0 (muParserHandle_t a_hParser, 
                   
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineBulkFun1 (muParserHandle_t a_hParser, 
                   
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineBulkFun2 (muParserHandle_t a_hParser, 
                   
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineBulkFun3 (muParserHandle_t a_hParser, 
                   
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineBulkFun4 (muParserHandle_t a_hParser, 
                   
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineBulkFun5 (muParserHandle_t a_hParser, 
                   
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineBulkFun6 (muParserHandle_t a_hParser, 
                   
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineBulkFun7 (muParserHandle_t a_hParser, 
                   
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineBulkFun8 (muParserHandle_t a_hParser, 
                   
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineBulkFun9 (muParserHandle_t a_hParser, 
                   
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineBulkFun10 (muParserHandle_t a_hParser, 
                    
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineStrFun1 (muParserHandle_t a_hParser, 
                  
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineStrFun2 (muParserHandle_t a_hParser, 
                  
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineStrFun3 (muParserHandle_t a_hParser, 
                  
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineMultFun (muParserHandle_t a_hParser, 
                  
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineOprt (muParserHandle_t a_hParser, 
               
               
{
  
  
                  (mu::EOprtAssociativity) a_nOprtAsct, 


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineVar (muParserHandle_t a_hParser, 
              
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineBulkVar (muParserHandle_t a_hParser, 
                  
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineConst (muParserHandle_t a_hParser, 
                
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineStrConst (muParserHandle_t a_hParser, 
                   
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (const muChar_t *)
mupGetExpr (muParserHandle_t a_hParser) 
{
  
  
    // C# explodes when pMsg is returned directly. For some reason it can't access
    // the memory where the message lies directly.
#ifndef _UNICODE
    sprintf (s_tmpOutBuf, "%s", p->GetExpr ().c_str ());
  
#else   /* 
    wsprintf (s_tmpOutBuf, _T ("%s"), p->GetExpr ().c_str ());
  
#endif  /* 
    
  



//---------------------------------------------------------------------------
  API_EXPORT (void) mupDefinePostfixOprt (muParserHandle_t a_hParser,
                                          
                                          
                                          
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineInfixOprt (muParserHandle_t a_hParser, 
                    
{
  
  


// Define character sets for identifiers
//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineNameChars (muParserHandle_t a_hParser,
                    
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineOprtChars (muParserHandle_t a_hParser,
                    
{
  
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupDefineInfixOprtChars (muParserHandle_t a_hParser,
                         
{
  
  


//---------------------------------------------------------------------------
/** \brief Get the number of variables defined in the parser.
    \param a_hParser [in] Must be a valid parser handle.
    \return The number of used variables.
    \sa mupGetExprVar
    */ 
  API_EXPORT (int)
mupGetVarNum (muParserHandle_t a_hParser) 
{
  
  
  
  
}


//---------------------------------------------------------------------------
/** \brief Return a variable that is used in an expression.
    \param a_hParser [in] A valid parser handle.
    \param a_iVar [in] The index of the variable to return.
    \param a_szName [out] Pointer to the variable name.
    \param a_pVar [out] Pointer to the variable.
    \throw nothrow

    Prior to calling this function call mupGetExprVarNum in order to get the
    number of variables in the expression. If the parameter a_iVar is greater
    than the number of variables both a_szName and a_pVar will be set to zero.
    As a side effect this function will trigger an internal calculation of the
    expression undefined variables will be set to zero during this calculation.
    During the calculation user defined callback functions present in the expression
    will be called, this is unavoidable.
    */ 
  API_EXPORT (void) mupGetVar (muParserHandle_t a_hParser, 
                               
                               
{
  
    // A static buffer is needed for the name since i cant return the
    // pointer from the map.
  static muChar_t szName[1024];
  
  
  
    
  {
    
    
    
  
  
  
  
    
+item;
  
#ifndef _UNICODE
    strncpy (szName, item->first.c_str (), sizeof (szName));
  
#else   /* 
    wcsncpy (szName, item->first.c_str (), sizeof (szName));
  
#endif  /* 
    
  
  
  
  
  



//---------------------------------------------------------------------------
/** \brief Get the number of variables used in the expression currently set in the parser.
    \param a_hParser [in] Must be a valid parser handle.
    \return The number of used variables.
    \sa mupGetExprVar
    */ 
  API_EXPORT (int) mupGetExprVarNum (muParserHandle_t a_hParser) 
{
  
  
  
  
}


//---------------------------------------------------------------------------
/** \brief Return a variable that is used in an expression.

    Prior to calling this function call mupGetExprVarNum in order to get the
    number of variables in the expression. If the parameter a_iVar is greater
    than the number of variables both a_szName and a_pVar will be set to zero.
    As a side effect this function will trigger an internal calculation of the
    expression undefined variables will be set to zero during this calculation.
    During the calculation user defined callback functions present in the expression
    will be called, this is unavoidable.

    \param a_hParser [in] A valid parser handle.
    \param a_iVar [in] The index of the variable to return.
    \param a_szName [out] Pointer to the variable name.
    \param a_pVar [out] Pointer to the variable.
    \throw nothrow
    */ 
  API_EXPORT (void) mupGetExprVar (muParserHandle_t a_hParser,
                                   
                                   
                                   
{
  
    // A static buffer is needed for the name since i cant return the
    // pointer from the map.
  static muChar_t szName[1024];
  
  
  
    
  {
    
    
    
  
  
  
  
    
+item;
  
#ifndef _UNICODE
    strncpy (szName, item->first.c_str (), sizeof (szName));
  
#else   /* 
    wcsncpy (szName, item->first.c_str (), sizeof (szName));
  
#endif  /* 
    
  
  
  
  
  



//---------------------------------------------------------------------------
/** \brief Return the number of constants defined in a parser. */ 
  API_EXPORT (int) mupGetConstNum (muParserHandle_t a_hParser) 
{
  
  
  
  
}


//-----------------------------------------------------------------------------------------------------
  API_EXPORT (void) mupSetArgSep (muParserHandle_t a_hParser,
                                  const muChar_t cArgSep) 
{
  
  


//-----------------------------------------------------------------------------------------------------
  API_EXPORT (void)
mupResetLocale (muParserHandle_t a_hParser) 
{
  
  


//-----------------------------------------------------------------------------------------------------
  API_EXPORT (void)
mupSetDecSep (muParserHandle_t a_hParser, const muChar_t cDecSep) 
{
  
  


//-----------------------------------------------------------------------------------------------------
  API_EXPORT (void)
mupSetThousandsSep (muParserHandle_t a_hParser,
                    const muChar_t cThousandsSep) 
{
  
  


//---------------------------------------------------------------------------
/** \brief Retrieve name and value of a single parser constant.
    \param a_hParser [in] a valid parser handle
    \param a_iVar [in] Index of the constant to query
    \param a_pszName [out] pointer to a null terminated string with the constant name
    \param [out] The constant value
    */ 
  API_EXPORT (void)
mupGetConst (muParserHandle_t a_hParser, 
             
{
  
    // A static buffer is needed for the name since i cant return the
    // pointer from the map.
  static muChar_t szName[1024];
  
  
  
    
  {
    
    
    
  
  
  
  
    
+item;
  
#ifndef _UNICODE
    strncpy (szName, item->first.c_str (), sizeof (szName));
  
#else   /* 
    wcsncpy (szName, item->first.c_str (), sizeof (szName));
  
#endif  /* 
    
  
  
  
  
  



//---------------------------------------------------------------------------
/** \brief Add a custom value recognition function.
*/ 
  API_EXPORT (void) mupAddValIdent (muParserHandle_t a_hParser,
                                    
{
  
  


//---------------------------------------------------------------------------
/** \brief Query if an error occurred.

    After querying the internal error bit will be reset. So a consecutive call
    will return false.
    */ 
  API_EXPORT (muBool_t) mupError (muParserHandle_t a_hParser) 
{
  
  
  



//---------------------------------------------------------------------------
/** \brief Reset the internal error flag.
*/ 
  API_EXPORT (void) mupErrorReset (muParserHandle_t a_hParser) 
{
  


//---------------------------------------------------------------------------
  API_EXPORT (void)
mupSetErrorHandler (muParserHandle_t a_hParser, muErrorHandler_t a_pHandler) 
{
  


//---------------------------------------------------------------------------
/** \brief Return the message associated with the last error.
*/ 
  API_EXPORT (const muChar_t *)
mupGetErrorMsg (muParserHandle_t a_hParser) 
{
  
  
  
    // C# explodes when pMsg is returned directly. For some reason it can't access
    // the memory where the message lies directly.
#ifndef _UNICODE
    sprintf (s_tmpOutBuf, "%s", pMsg);
  
#else   /* 
    wsprintf (s_tmpOutBuf, _T ("%s"), pMsg);
  
#endif  /* 
    



//---------------------------------------------------------------------------
/** \brief Return the message associated with the last error.
*/ 
  API_EXPORT (const muChar_t *) mupGetErrorToken (muParserHandle_t a_hParser)
  
{
  
  
  
    // C# explodes when pMsg is returned directly. For some reason it can't access
    // the memory where the message lies directly.
#ifndef _UNICODE
    sprintf (s_tmpOutBuf, "%s", pToken);
  
#else   /* 
    wsprintf (s_tmpOutBuf, _T ("%s"), pToken);
  
#endif  /* 
    



//---------------------------------------------------------------------------
/** \brief Return the code associated with the last error.
*/ 
  API_EXPORT (int) mupGetErrorCode (muParserHandle_t a_hParser) 
{
  



//---------------------------------------------------------------------------
/** \brief Return the position associated with the last error. */ 
  API_EXPORT (int) mupGetErrorPos (muParserHandle_t a_hParser) 
{
  


////-----------------------------------------------------------------------------------------------------
//API_EXPORT(const muChar_t*) mupGetErrorExpr(muParserHandle_t a_hParser)
//{
//  return AsParserTag(a_hParser)->exc.GetExpr().c_str();
//}
  
//-----------------------------------------------------------------------------------------------------
  API_EXPORT (muFloat_t *) mupCreateVar () 
{
  



//-----------------------------------------------------------------------------------------------------
  API_EXPORT (void) mupReleaseVar (muFloat_t * ptr) 
{
  

#endif // MUPARSER_DLL