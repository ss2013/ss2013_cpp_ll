/*
 * =====================================================================================
 *
 *       Filename:  framework.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/16/2013 09:03:59 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */
#include "source.cpp"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    String s1("1ef");
    String s2 = s1;
    String s3(s1);
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    cout << endl;

    s2[0] = '2';
    s3[0] = '3';
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    {
        String s4("789");
        s3 = s4;
        cout << s3 << endl;
        cout << s4 << endl;
    }

    cout << s3 << endl;

    return 0;
}

