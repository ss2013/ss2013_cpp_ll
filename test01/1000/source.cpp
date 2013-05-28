/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/28/2013 06:59:47 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <cmath>
using std::max;

int getMaxScore(int a, int b, int c, int d = -1)
{
    int ans = -1;
    ans = max(ans, a);
    ans = max(ans, b);
    ans = max(ans, c);
    return max(ans, d);
}
