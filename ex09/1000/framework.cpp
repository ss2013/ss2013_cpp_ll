/*
 * =====================================================================================
 *
 *       Filename:  framework.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  05/14/2013 01:21:17 PM
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

int main(int argc, char const* argv[])
{
    Base_N base_default;
    cout << base_default(456) << endl;
    cout << endl;

    Base_N base_n(2);
    cout << base_n(456) << endl;
    cout << base_n(100) << endl;
    cout << endl;

    int cases;
    int n, num;
    cin >> cases;
    while (cases--)
    {
        cin >> n >> num;
        base_n.setBase(n);
        cout << base_n(num) << endl;
    }

    return 0;
}
