/*
 * =====================================================================================
 *
 *       Filename:  framework.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/16/2013 11:11:33 PM
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

int main(int argc, const char *argv[])
{
    SmallInt s_i(1);
    cout << (s_i + 7  ) << endl;
    cout << (8   + s_i) << endl;
    cout << (s_i + s_i) << endl;

    return 0;
}

