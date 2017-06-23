//
//  TArray.cpp
//  InterView_CPP
//
//  Created by kong on 17/6/8.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "TArray.hpp"

void Array::setData(int a, int index)
{
    m_data[index] = a;
    
}

int Array::getData(int index)
{
    return m_data[index];
}

int Array::length()
{
    return m_length;
}

Array::Array(int length)
{
    if (length < 0)
    {
        length = 0;
    }
    m_length = length;
    m_data = new int[m_length];
    
}

Array::~Array()
{
    if (m_data != NULL)
    {
        delete [] m_data;
    }
}

//拷贝构造函数
Array:: Array (const Array&p)
{
    //取长度
    this->m_length = p.m_length;
    //开辟空间
    this->m_data = new int[this->m_length];
    //赋值过去
    for (int i = 0; i < p.m_length; i ++)
    {
        this->m_data[i] = p.m_data[i];
    }
}





