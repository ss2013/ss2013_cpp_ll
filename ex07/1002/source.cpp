/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/16/2013 11:09:35 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */

#include <iostream>
#include <fstream>
using namespace std;

class SmallInt
{
public:
    SmallInt(int i = 0): val(i)
    {
        val = i;
        if (i < 0) val = 0;
        else if(i > 255) val = 255;
    }

    operator int() const
    {
        return val;
    }

    friend ostream& operator <<(ostream& os, const SmallInt& s_i)
    {
        os << s_i.val;
        return os;
    }

private:
    int val;
};
