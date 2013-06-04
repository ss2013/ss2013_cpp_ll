/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年06月04日 20时44分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using std::cout;
using std::endl;

class Base {
    public:
        virtual ~Base() {
            cout << "Base destruct" << endl;
        }

        virtual void print() {
            cout << "Base" << endl;
        }
};


class Derived: public Base {
    public:
        virtual ~Derived() {
            cout << "Derived destruct" << endl;
        }

        virtual void print() {
            cout << "Derived" << endl;
        }
};

