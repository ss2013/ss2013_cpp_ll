/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/16/2013 10:06:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A::A()" << endl;
    }

    A(int a)
    {
        cout << "A::A(" << a << ")" << endl;
    }

    ~A()
    {
        cout << "A::~A()" << endl;
    }

};

class B : public A
{
public:
    B()
    {
        cout << "B::B()" << endl;
    }

    B(int a, int b) : A(a)
    {
        cout << "B::B(" << b << ")" << endl;
    }

    ~B()
    {
        cout << "B::~B()" << endl;
    }

};

class C : public B
{
public:
    C()
    {
        cout << "C::C()" << endl;
    }

    C(int a, int b, int c) : B(a, b)
    {
        cout << "C::C(" << c << ")" << endl;
    }

    ~C()
    {
        cout << "C::~C()" << endl;
    }

};
