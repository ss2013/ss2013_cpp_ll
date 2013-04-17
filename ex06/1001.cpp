/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/10/2013 01:03:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */

class Stack
{
public:
    Stack();    //创建一个空栈

    bool empty();   //判断栈是否为空

    unsigned int size();    //返回当前栈的大小

    int top();  //返回栈顶元素，若栈为空，返回-1

    bool push(const int& tmp);    //往栈里面添加一个元素，若栈已满，则不做任何操作
                                  //返回值表示是否添加成功
    
    bool pop();     //把栈顶元素移除，若栈为空，则不做任何操作。
                    //返回值表示是否移除成功

private:
    static const int MAX_SIZE = 100;
    int array[MAX_SIZE];
    int curIdx;
};

Stack::Stack() {
    curIdx = -1;
}

bool Stack::empty() {
    return (curIdx == -1);
}

unsigned int Stack::size() {
    return curIdx + 1;
}

int Stack::top() {
    if(curIdx == -1)
        return -1;

    return array[curIdx];
}

bool Stack::push(const int& tmp) {
    if(curIdx == MAX_SIZE - 1)
        return false;

    array[++curIdx] = tmp;
    return true;
}

bool Stack::pop()  {
    if(curIdx == -1)
        return false;

    curIdx--;
    return true;
}
