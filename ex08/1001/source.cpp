/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  05/07/2013 12:37:53 AM
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
    A(int _a): a(_a) {}
    virtual ~A()
    {
        cout << "A::a = " << a << endl;
    }

    int a;
};

class B: virtual public A
{
public:
    B(int _a, int _b): A(_a), b(_b) {}
    ~B()
    {
        cout << "A::a = " << a << endl;
        cout << "B::b = " << b << endl;
    }

    int b;
};

class C: virtual public A
{
public:
    C(int _a, int _c): A(_a), c(_c) {}
    ~C()
    {
        cout << "A::a = " << a << endl;
        cout << "C::c = " << c << endl;
    }

    int c;
};

class D: public B, public C
{
public:
    D(int _a, int _b, int _c, int _d): A(_a), B(_a, _b), C(_a, _c), d(_d) {}
    ~D()
    {
        cout << "A::a = " << a << endl;
        cout << "B::b = " << b << endl;
        cout << "C::c = " << c << endl;
        cout << "D::d = " << d << endl;
    }

    int d;
};

