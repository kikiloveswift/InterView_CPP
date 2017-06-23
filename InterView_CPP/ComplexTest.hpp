//
//  ComplexTest.hpp
//  InterView_CPP
//
//  Created by kong on 17/6/12.
//  Copyright © 2017年 konglee. All rights reserved.
//

#ifndef ComplexTest_hpp
#define ComplexTest_hpp

#include <stdio.h>

class Complex
{
    
public:
    int a;
    int b;
    Complex(int a = 0, int b = 0);
    ~Complex();
    Complex addComplex(Complex *c1, Complex *c2);
};
#endif /* ComplexTest_hpp */
