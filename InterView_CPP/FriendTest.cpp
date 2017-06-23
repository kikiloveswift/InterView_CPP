//
//  FriendTest.cpp
//  InterView_CPP
//
//  Created by kong on 17/6/9.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "FriendTest.hpp"
#include <iostream>

int FTest::getDate()
{
    return a;
}
FTest::FTest(int a)
{
    this->a = a;
}
FTest::~FTest()
{
    std::cout << "dead" << std::endl;
}
