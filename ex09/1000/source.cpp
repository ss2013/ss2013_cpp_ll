/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/14/2013 01:21:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <string>
using std::string;

class Base_N
{
public:
    Base_N(int _n = 2): n(_n) {}

    string operator ()(int num)
    {
        string ans;
        while (num != 0)
        {
            ans += (num % n + '0');
            num /= n;
        }
        ans.assign(ans.rbegin(), ans.rend());
        return ans;
    }

    void setBase(int _n)
    {
        n = _n;
    }

private:
    int n;
};
