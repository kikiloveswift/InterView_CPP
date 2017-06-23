//
//  main.cpp
//  InterView_CPP
//
//  Created by kong on 17/6/2.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include <iostream>
#include <string>
#include "TArray.hpp"
#include "FriendTest.hpp"
#include "ComplexTest.hpp"

using namespace std;

void test1();
void test2();
void test3();
void test4();

void changea(FTest *fp, int a)
{
    fp ->a = a;
}

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

void test5()
{
    A a1(3,4);
    B b1(4,2);
    a1.getB(b1);
    cout << "a1.a = " << a1.getA(0) << " a1.b = "<< a1.getA(1) << endl;
}

Complex operator+(Complex &c1, Complex &c2)
{
    Complex tmp;
    tmp.a = c1.a + c2.a;
    tmp.b = c1.b + c2.b;
    return tmp;
}

void test6()
{
    Complex *c1 = new Complex(1,3);
    Complex *c2 = new Complex(2,4);
//    Complex c3;
//    c3 = c3.addComplex(c1, c2);
//    cout << " c3.a = " << c3.a << " c3.b = " << c3.b << endl;
    
    //运算符重载尝试
    Complex c3 = *c1 + *c2;
    
}


int main(int argc, const char * argv[]) {
    
    test6();
    return 0;
}



void test4()
{
    FTest t1(5);
    cout <<"a = "<<t1.getDate() << endl;
    changea(&t1, 10);
    cout <<"a = "<<t1.getDate() << endl;
}

void test1()
{
    //调用teacher的构造函数
    Teacher t1("teacher1",24);
    //调用t1对象的printT func
    t1.printT();
    //此处不是赋值 而是调用Teacher的拷贝构造方法
    Teacher t2 = t1;
    //析构函数 释放顺序是 先释放T2 在释放T1 后入先出的原则
}

class Test2 {
 
public:
    Test2(int a)
    {
        this -> a = a;
        
    }
    ~Test2()
    {
        cout << "dead" << endl;
    }
    
    const void funcTest()
    {
        (a)++;
    }
    
private:
    int a;
};

void test2()
{
    Test2 t1(5);
    t1.funcTest();
    
    Test2 *t2 = new Test2(4);
    t2 -> funcTest();
    
}

void test3()
{
    Array a1(10);
    for (int i = 0; i < 10; i ++)
    {
        a1.setData(i, i);
    }
    
    for (int i = 0; i < 10; i ++)
    {
        cout << a1.getData(i) << " ";
    }
    
    cout << "" << endl;
    
    Array a2 = a1;
    for (int i = 0; i < 10; i ++)
    {
        cout << a2.getData(i) << " ";
    }
    
}

