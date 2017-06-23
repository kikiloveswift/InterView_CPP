//
//  TArray.hpp
//  InterView_CPP
//
//  Created by kong on 17/6/8.
//  Copyright © 2017年 konglee. All rights reserved.
//

#ifndef TArray_hpp
#define TArray_hpp

#include <stdio.h>

class Array
{
    
public:
    Array(int length);                  //构造函数
    Array (const Array&p);    //拷贝构造函数
    ~Array();                 //析构函数
    void setData(int a, int index);
    int getData(int index);
    int length();
private:
    int m_length;
    int *m_data;
};

#endif /* TArray_hpp */
