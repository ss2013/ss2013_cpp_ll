/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2013年06月04日 21时37分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
using std::cout;
using std::endl;

class Exception
{
public:
    Exception(){}
    virtual ~Exception(){}
    virtual void PrintError() = 0;
};

class OutOfMemory : public Exception
{
public:
    OutOfMemory(){}
    ~OutOfMemory(){}
    virtual void PrintError() {
        cout << "Out of Memory!!" << endl;
    }
};

class RangeError : public Exception
{
public:
    RangeError(unsigned long number): BadNum(number) {}
    ~RangeError() {}
    virtual void PrintError() {
        cout << "Number out of range. You used " << BadNum << " !" << endl;
    }
    virtual unsigned long GetNumber() {
        return BadNum;
    }
    virtual void SetNumber(unsigned long number) {
        BadNum = number;
    }
private:
    unsigned long BadNum;
};


