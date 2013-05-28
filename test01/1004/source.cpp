/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/28/2013 07:05:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;


class Number {
public:
    Number(int _n): n(_n){};

    Number& add (int a) {
        n += a;
        return (*this);
    }

    Number& sub (int a) {
        n -= a;
        return (*this);
    }

    void print() {
        cout << n << endl;
    }

private:
    int n;
};
