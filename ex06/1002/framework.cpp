/*
 * =====================================================================================
 *
 *       Filename:  framework->cpp
 *
 *    Description:  
 *
 *        Version:  1->0
 *        Created:  04/10/2013 10:06:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail->com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include "source.cpp"
using namespace std;

int main(int argc, const char *argv[]) {
    Singleton* singleton1 = Singleton::getInstance();
    Singleton* singleton2 = Singleton::getInstance();

    cout << singleton1->getVar() << endl;
    cout << singleton2->getVar() << endl;
    singleton1->setVar(20); 
    cout << singleton1->getVar() << endl;
    cout << singleton2->getVar() << endl;

    return 0;
}
