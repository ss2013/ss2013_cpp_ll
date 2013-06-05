/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  05/29/2013 10:19:20 AM
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

class X
{
public:
    X(int _a = 0): a(_a) {}
    
    friend ostream& operator <<(ostream& out, const X& x)
    {
        out << x.a;
        return out;
    }

    bool operator <(const X& x)
    {
        return a < x.a;
    }
    
private:
    int a;
};

const int MAX_LEN = 5;

template<class T>
class Stack
{
public:
    explicit Stack(): stack_size(0) {}
    bool empty() const
    {
        return stack_size == 0;
    }
    int size() const
    {
        return stack_size;
    }
    T& top();
    const T& top() const;
    void push(const T& x);
    void pop();

    operator bool() const {return !empty();}
private:
    T data[MAX_LEN];
    int stack_size;
};

template<class T>
T& Stack<T>::top()
{
    if (empty())
        throw 1;
    return data[stack_size - 1];
}

template<class T>
const T& Stack<T>::top() const
{
    if (empty())
        throw 1;
    return data[stack_size - 1];
}

template<class T>
void Stack<T>::pop()
{
    if (empty())
        throw 1.0;
    stack_size--;
}

template<class T>
void Stack<T>::push(const T& x)
{
    if (stack_size == MAX_LEN)
    {
        if (!(top() < x))
            return;
        stack_size--;
    }
    data[stack_size++] = x;
}