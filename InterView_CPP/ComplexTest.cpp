//
//  ComplexTest.cpp
//  InterView_CPP
//
//  Created by kong on 17/6/12.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "ComplexTest.hpp"

Complex::Complex(int a, int b)
{
    this -> a = a;
    this -> b = b;
}

Complex::~Complex()
{
    
}
Complex Complex::addComplex(Complex *c1, Complex *c2)
{
    Complex tmp;
    tmp.a = c1 -> a + c2 -> a;
    tmp.b = c1 -> b + c2 -> b;
    return tmp;
}

