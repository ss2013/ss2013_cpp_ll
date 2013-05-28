/*
 * =====================================================================================
 *
 *       Filename:  framework.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/07/2013 12:37:34 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "source.cpp"

int main(int argc, const char *argv[])
{
    A* a = new A(1);
    delete a;
    cout << endl << endl;

    a = new C(100, 200);
    delete a;
    cout << endl << endl;

    a = new D(6, 7, 80, 9);
    delete a;
    cout << endl << endl;

    a = new B(2, 3);
    delete a;

    return 0;
}
