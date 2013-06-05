/*
 * =====================================================================================
 *
 *       Filename:  framework.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  05/29/2013 10:56:51 AM
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
    Stack<int> s;
    cout << s.size() << endl;
    for (int i = 10; i < 15; i++)
    {
        s.push(i);
        cout << s.size() << endl;
    }
    cout << s.size() << endl;
    s.push(12);
    cout << s.top() << endl;
    cout << s.size() << endl;
    s.push(16);
    cout << s.top() << endl;
    cout << s.size() << endl;

    for (int i = 5; i >= 0; i--)
    {
        try
        {
            cout << s.top() << endl;
        }
        catch (int)
        {
            cout << "get top failed" << endl;
        }

        try
        {
            s.pop();
        }
        catch (double)
        {
            cout << "pop failed" << endl;
        }
        
        cout << s.size() << endl;
    }

    for (int i = 10; i < 15; i++)
    {
        s.push(i);
        cout << s.size() << endl;
        cout << s.top() << endl;
    }
    return 0;
}

