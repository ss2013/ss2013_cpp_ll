/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/28/2013 07:01:39 PM
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

class seriesComp{
private:
       int n;       // n>=1

public:

       seriesComp(int n);

       int sum();

       int fib();

};

seriesComp::seriesComp(int n) {
    this->n = n;
}

int seriesComp::sum() {
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += i;
    return ans;
}

int seriesComp::fib() {
    int ans = 0;
    int a = 0, b = 1, c = 1;
    for (int i = 0; i < n; i++) {
        ans += b;
        c = a;
        a = b;
        b = b + c;
    }
    return ans;
}

