/*
 * =====================================================================================
 *
 *       Filename:  framework.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2013 12:15:15 PM
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

#ifdef _GLIBCXX_COMPLEX
#error "都说了不要用库中的complex类了..."
#endif

int main(int argc, const char *argv[]) {
    Complex a(4, 6), b(1, 1);
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;

    Complex c(2, 2);
    cout << (a + b + c) << endl;
    cout << (a + b - c) << endl;
    cout << ((a + b) * c) << endl;
    cout << ((a + c) * b) << endl;

    return 0;
}

