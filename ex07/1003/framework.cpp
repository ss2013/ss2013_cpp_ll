/*
 * =====================================================================================
 *
 *       Filename:  framework.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/17/2013 06:48:33 AM
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

#include "source.cpp"

int main(int argc, const char *argv[])
{
    int cases;
    cin >> cases;

    Complex c;
    while (cases--)
    {
        cin >> c;
        cout << c << endl;
        cout << (c++) << endl;
        cout << (++c) << endl;
        cout << (c--) << endl;
        cout << (--c) << endl;
    }

    return 0;
}
