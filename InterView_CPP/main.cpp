//
//  main.cpp
//  InterView_CPP
//
//  Created by kong on 17/6/2.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include <iostream>
#include "Human.hpp"
#include <string>

using namespace std;


class Teacher
{
public:
    
    void printT()
    {
        cout << "name is " << m_name << "age is " << m_age << endl;
    }
    //有参数的构造函数
    Teacher(string name,int age)
    {
        m_name = name;
        m_age = age;
    }
    
    //拷贝构造函数
    Teacher (const Teacher &t)
    {
        cout << "copy func is loading" << endl;
        m_name = t.m_name;
        m_age = t.m_age + 1;
    }
    ~Teacher()
    {
        cout << "Object free age"<< m_age << endl;
    }
private:
    string m_name;
    int m_age;
};

int main(int argc, const char * argv[]) {
    
    //调用teacher的构造函数
    Teacher t1("teacher1",24);
    //调用t1对象的printT func
    t1.printT();
    //此处不是赋值 而是调用Teacher的拷贝构造方法
    Teacher t2 = t1;
    //析构函数 释放顺序是 先释放T2 在释放T1 后入先出的原则
    return 0;
}
