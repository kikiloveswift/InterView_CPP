//
//  FriendTest.hpp
//  InterView_CPP
//
//  Created by kong on 17/6/9.
//  Copyright © 2017年 konglee. All rights reserved.
//

#ifndef FriendTest_hpp
#define FriendTest_hpp

#include <stdio.h>

class FTest
{
public:
    friend void changea(FTest *fp, int a);
    int getDate();
    FTest(int a);
    ~FTest();
private:
    int a;
};

class A;

class B {
private:
    int a;
    int b;
public:
    B(int a, int b)
    {
        this -> a = a;
        this -> b = b;
    }
    
    ~B()
    {
        
    }
    friend class A;
};


class A {
private:
    int a;
    int b;
public:
    A(int a, int b)
    {
        this -> a = a;
        this -> b = b;
    }
    
    ~A()
    {
        
    }
    void getB(B bp)
    {
        this -> a = bp.a;
        this -> b = bp.b;
    }
    
    int getA(int num)
    {
        switch (num)
        {
            case 0:
                return a;
                break;
                
            default:
            {
                return b;
            }
                break;
        }
    }
};




#endif /* FriendTest_hpp */
