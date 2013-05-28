/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/16/2013 10:43:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */

#include<iostream>
using namespace std;
class Stack
{
public:
    Stack()
    {
        for (curIdx = 0; curIdx <= 99; curIdx++)
        {
            array[curIdx] = 0;
        }
        count = 0;
    }

    bool empty()
    {
        for (curIdx = 0; curIdx <= 99; curIdx++)
        {
            if (array[curIdx] > 0) continue;
            else break;
        }
        if (curIdx == 0) return 1;
        else return 0;
    }


    int top()
    {
        for (curIdx = 0; curIdx <= 99; curIdx++)
        {
            if (array[curIdx] > 0) continue;
            else break;
        }
        if (curIdx == 0) return -1;
        else return array[curIdx - 1];
    }

    bool push(const int &tmp)
    {
        for (curIdx = 0; curIdx <= 99; curIdx++)
        {
            if (array[curIdx] > 0) continue;
            else break;
        }
        if (curIdx == 99) return 0;
        else
        {
            array[curIdx] = tmp;
            return 1;
        }
    }

    unsigned int size()
    {
        for (curIdx = 0; curIdx <= 99; curIdx++)
        {
            if (array[curIdx] > 0) count = count + 1;
        }
        return count;
    }

    bool pop()
    {
        for (curIdx = 0; curIdx <= 99; curIdx++)
        {
            if (array[curIdx] > 0) continue;
            else break;
        }
        if (curIdx != 0)
        {
            array[curIdx - 1] = -1;
            return 1;
        }
    }


private:
    static const int MAX_SIZE = 100;
    int array[MAX_SIZE];
    int curIdx;
    int count;
};

int main(int argc, const char *argv[])
{

    Stack stack;

    if (stack.empty())
    {

        cout << "stack is empty." << endl;

    }



    if (stack.push(1))
    {

        cout << "success to add element" << endl;

    }



    cout << "the size of stack is " << stack.size() << endl;


    return 0;

}
