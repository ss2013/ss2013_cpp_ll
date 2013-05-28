/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2013 11:39:49 PM
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

class Y {
    public:
        Y() {
            cout << "Y's default constructor" << endl;
        }
        Y(int a) {
            cout << "Y's constructor with argument:" << a << endl;
        }
};

class X {
    public:
        X() {
          cout << "X's default constructor" << endl;  
        }
        X(int a):y(a) {
          cout << "X's constructor with argument:" << a << endl;  
        }

    private:
        Y y;
};


