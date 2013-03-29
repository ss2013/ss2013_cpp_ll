/*
 * =====================================================================================
 *
 *       Filename:  1_inline_function.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2013 08:49:49 AM
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

inline int add(int a, int b = 0) {
    return a + b;
}

int main() {
    cout << add(1) << endl;
    cout << add(1, 2) << endl;
    return 0;
}
