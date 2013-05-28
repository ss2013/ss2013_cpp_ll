/*
 * =====================================================================================
 *
 *       Filename:  framework.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/15/2013 11:12:45 PM
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

//#define SOJ_FRAMEWORK

int main(int argc, const char *argv[])
{
    int cases = 1;
    cin >> cases;

    string s1, s2;
    while (cases--)
    {
        cin >> s1 >> s2;
        Integer i1(s1);
        Integer i2(s2);

        // 测试构造函数 {
        cout << i1 << endl;
        cout << i2 << endl;
        // }

        // 测试关系操作符 {
        cout << i1 << " == " << i2 << " = " << (i1 == i2) << endl;
        cout << i1 << " != " << i2 << " = " << (i1 != i2) << endl;
        cout << i1 << " <  " << i2 << " = " << (i1 <  i2) << endl;
        cout << i1 << " <= " << i2 << " = " << (i1 <= i2) << endl;
        cout << i1 << " >  " << i2 << " = " << (i1 >  i2) << endl;
        cout << i1 << " >= " << i2 << " = " << (i1 >= i2) << endl;
        // }

        // 测试算术运算符 {
        cout << i1 << " + " << i2 << " = " << (i1 + i2) << endl;
        cout << i1 << " - " << i2 << " = " << (i1 - i2) << endl;
        cout << i1 << " * " << i2 << " = " << (i1 * i2) << endl;
        if (i1 >= 0 && i2 >= 0)
        {
            cout << i1 << " / " << i2 << " = " << (i1 / i2) << endl;
            cout << i1 << " % " << i2 << " = " << (i1 % i2) << endl;
        }
        // }

        // 测试负号 {
        cout << "-" << i1 << " = " << (-i1) << endl;
        // }

        // 测试赋值操作符 {
        Integer tmp = i1;
        i1 += i2;
        cout << tmp << " += " << i2 << " : " << i1 << endl;
        i1 = tmp;

        tmp = i1;
        i1 -= i2;
        cout << tmp << " -= " << i2 << " : " << i1 << endl;
        i1 = tmp;

        tmp = i1;
        i1 *= i2;
        cout << tmp << " *= " << i2 << " : " << i1 << endl;
        i1 = tmp;

        if (i1 >= 0 && i2 >= 0)
        {
            tmp = i1;
            i1 /= i2;
            cout << tmp << " /= " << i2 << " : " << i1 << endl;
            i1 = tmp;

            tmp = i1;
            i1 %= i2;
            cout << tmp << " %= " << i2 << " : " << i1 << endl;
            i1 = tmp;
        }
        // }

        // 测试自增/自减 {
        tmp = i1;
        cout << i1 << "++" << endl;
        i2 = i1++;
        cout << i1 << endl;
        cout << i2 << endl;
        i1 = tmp;

        tmp = i1;
        cout << "++" << i1 << endl;
        i2 = ++i1;
        cout << i1 << endl;
        cout << i2 << endl;
        i1 = tmp;

        tmp = i1;
        cout << i1 << "--" << endl;
        i2 = i1--;
        cout << i1 << endl;
        cout << i2 << endl;
        i1 = tmp;

        tmp = i1;
        cout << "--" << i1 << endl;
        i2 = --i1;
        cout << i1 << endl;
        cout << i2 << endl;

        // }
    }

#ifdef SOJ_FRAMEWORK
    // 测试混合类型表达式 {
    Integer i1(1111111);
    Integer i2(-1111111);

    cout << (i1  + 123) << endl;
    cout << (123 + i1)  << endl;
    cout << (i2  + 123) << endl;
    cout << (123 + i2)  << endl;

    cout << (i1  - 123) << endl;
    cout << (123 - i1)  << endl;
    cout << (i2  - 123) << endl;
    cout << (123 - i2)  << endl;

    cout << (i1  * 123) << endl;
    cout << (123 * i1)  << endl;
    cout << (i2  * 123) << endl;
    cout << (123 * i2)  << endl;

    cout << (i1  / 123) << endl;
    cout << (123 / i1)  << endl;

    cout << (i1  % 123) << endl;
    cout << (123 % i1)  << endl;
    //}
#else
    //测试混合类型表达式 {
    Integer i1(1111111);
    cout << (i1  + 123) << endl;
    cout << (123 + i1)  << endl;
    //}
#endif
    return 0;
}
