/*
                 __________                                      
    _____   __ __\______   \_____  _______  ______  ____ _______ 
   /     \ |  |  \|     ___/\__  \ \_  __ \/  ___/_/ __ \\_  __ \
  |  Y Y  \|  |  /|    |     / __ \_|  | \/\___ \ \  ___/ |  | \/
  |__|_|  /|____/ |____|    (____  /|__|  /____  > \___  >|__|   
        \/                       \/            \/      \/        
  Copyright (C) 2004-2013 Ingo Berg

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
  
  
#ifndef MU_PARSER_INT_H
#define MU_PARSER_INT_H
  
#include "muParserBase.h"
#include <vector>
  
/** \file
    \brief Definition of a parser using integer value.
*/ 
  
{
  
/** \brief Mathematical expressions parser.
  
  This version of the parser handles only integer numbers. It disables the built in operators thus it is 
  slower than muParser. Integer values are stored in the double value_type and converted if needed.
*/ 
class ParserInt:public ParserBase 
  {
  
    {
      return (int) (v + ((v >= 0) ? 0.5 : -0.5));
    };
    
    
    
    
      // !! The unary Minus is a MUST, otherwise you cant use negative signs !!
    static value_type UnaryMinus (value_type);
    
      // Functions with variable number of arguments
    static value_type Sum (const value_type * a_afArg, int a_iArgc);    // sum
    static value_type Min (const value_type * a_afArg, int a_iArgc);    // minimum
    static value_type Max (const value_type * a_afArg, int a_iArgc);    // maximum
    // binary operator callbacks
    static value_type Add (value_type v1, value_type v2);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
                            value_type * a_iVal);
    
                          value_type * a_iVal);
    
                       value_type * a_iVal);
    
    /** \brief A facet class used to change decimal and thousands separator. */ 
  template < class TChar > 
      
    {
    
        m_cThousandsSep (cThousandsSep) 
        m_nGroup (nGroup) 
      {
    } 
      {
        
      
       
      {
        
      
       
      {
        
          // fix for issue 4: https://code.google.com/p/muparser/issues/detail?id=4
          // courtesy of Jens Bartsch
          // original code:
          //        return std::string(1, (char)m_nGroup); 
          // new code:
        return std::string (1,
                            (char) (m_cThousandsSep >
                                    0 ? m_nGroup : CHAR_MAX));
    
      
      
    
  
    
    
    
    
  



#endif  /* 
  