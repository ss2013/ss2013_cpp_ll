/*
 * =====================================================================================
 *
 *       Filename:  2_template_swap.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2013 08:51:43 AM
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

template<class T>
void myswap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int int_a = 1, int_b = 2;
    cout << "before swap(int): a = " << int_a << ", b = " << int_b << endl;
    myswap(int_a, int_b);
    cout << "before swap(int): a = " << int_a << ", b = " << int_b << endl;
    cout << endl << endl;

    float float_a = 1, float_b = 2;
    cout << "before swap(float): a = " << float_a << ", b = " << float_b << endl;
    myswap(float_a, float_b);
    cout << "before swap(float): a = " << float_a << ", b = " << float_b << endl;
    cout << endl << endl;

    string string_a = "abc", string_b = "efg";
    cout << "before swap(string): a = " << string_a << ", b = " << string_b << endl;
    myswap(string_a, string_b);
    cout << "before swap(string): a = " << string_a << ", b = " << string_b << endl;
    cout << endl << endl;

    return 0;
}
