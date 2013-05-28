/*
 * =====================================================================================
 *
 *       Filename:  framework.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/10/2013 01:09:14 AM
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

#ifdef _STL_DEQUE_H
#error "都说了不要用STL提供的容器了。。"
#elif _STL_VECTOR_H
#error "都说了不要用STL提供的容器了。。"
#endif

int main(int argc, const char *argv[])
{
    Stack stack;
    if (stack.empty())
        cout << "empty1" << endl;
    else
        cout << "empty0" << endl;

    if (stack.push(1))
        cout << "push1" << endl;
    else
        cout << "push0" << endl;

    cout << "size" << stack.size() << endl;

    if (stack.pop())
        cout << "pop1" << endl;
    else
        cout << "pop0" << endl;

    if (stack.pop())
        cout << "pop1" << endl;
    else
        cout << "pop0" << endl;

    for (int i = 0; i < 110; i++)
    {
        if (stack.push(i))
            cout << "push1" << endl;
        else
            cout << "push0" << endl;
        cout << "top" << stack.top() << endl;
        cout << "size" << stack.size() << endl;
    }

    cout << "size" << stack.size() << endl;

    for (int i = 0; i < 110; i++)
    {
        if (stack.pop())
            cout << "pop1" << endl;
        else
            cout << "pop0" << endl;
        cout << "top" << stack.top() << endl;
        cout << "size" << stack.size() << endl;
    }

    return 0;
}
