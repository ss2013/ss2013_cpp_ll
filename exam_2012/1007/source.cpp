/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2013年06月04日 22时23分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */
#include <map>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;

int isp(char c)
{
    switch (c)
    {
    case '+':
    case '-':
        return 2;
    case '*':
        //case '/':
        return 4;
    case '^':
        return 6;
    case '(':
        return 0;
    }
}

int osp(char c)
{
    switch (c)
    {
    case '+':
    case '-':
        return 1;
    case '*':
        //case '/':
        return 3;
    case '^':
        return 5;
    case '(':
        return 8;
    case ')':
        return -1;
    }
}

class Calculator
{
public:
    void cal()
    {
        char c = _operator.top();
        _operator.pop();
        long long x = _operand.top();
        _operand.pop();
        long long y = _operand.top();
        _operand.pop();
        switch (c)
        {
        case '+':
            _operand.push(y + x);
            break;
        case '-':
            _operand.push(y - x);
            break;
        case '*':
            _operand.push(y * x);
            break;
        case '/':
            _operand.push(y / x);
            break;
        case '^':
            long long s = 1;        //注意0次方的情况
            for (int i = 1; i <= x; i++) s *= y;
            _operand.push(s);
            break;
        }
    }

    long long getResult(const string &s)
    {
        string num;
        while (!_operator.empty())
        {
            _operator.pop();
        }
        while (!_operand.empty())
        {
            _operand.pop();
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ') continue;
            if (s[i] >= '0' && s[i] <= '9')
            {
                num += s[i];
            }
            else
            {
                if (!num.empty())
                {
                    _operand.push(atoi(num.c_str()));
                    num.clear();
                }
                while (!_operator.empty() && isp(_operator.top()) > osp(s[i]))
                {
                    if (_operator.top() == '(')
                    {
                        _operator.pop();
                        break;
                    }
                    cal();
                }
                if (s[i] != ')') _operator.push(s[i]);
            }
        }
        if (!num.empty())
        {
            _operand.push(atoi(num.c_str()));
            num.clear();
        }
        while (!_operator.empty())
        {
            cal();
        }
        return _operand.top();
    }

private:
    stack<long long> _operand;
    stack<char> _operator;
    map<char, string> sv;
};
