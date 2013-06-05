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
	Stack<X> s;
	if (s)
		cout << "stack is not empty" << endl;
	else
		cout << "stack is empty" << endl;

	for (int i = 0; i < 5; i++)
	{
		X x(i);
		s.push(x);
	}

	X x1(3);
	s.push(x1);
	cout << s.top() << endl;

	X x2(6);
	s.push(x2);
	cout << s.top() << endl;

	if (s)
		cout << "stack is not empty" << endl;
	else
		cout << "stack is empty" << endl;

    return 0;
}

