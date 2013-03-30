/*
 * =====================================================================================
 *
 *       Filename:  2_seriesComp.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2013 05:29:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdio>
using namespace std;

class seriesComp {
    public:
        int n;//n大于或等于1
        seriesComp(int n);
        int sum();
        int fib();
        double taylor(double x);
};

int main() {
    int n;
    double x;
    while(cin >> n >> x) {
        seriesComp sc(n);
        printf("%d %d %.4lf\n", sc.sum(), sc.fib(), sc.taylor(x));
    }

    return 0;
}


seriesComp::seriesComp(int n) {
    this->n = n;
}


int seriesComp::sum() {
    int ans = 0;
    for(int i = 1; i <= n; i++)
        ans += i;
    return ans;
}

int seriesComp::fib() {
    int tmp[3] = {1, 1, 1};
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += tmp[i % 3];
        tmp[(i + 2) % 3] = tmp[i % 3] + tmp[(i + 1) % 3];
    }
    return ans;
}

double seriesComp::taylor(double x) {
    double numerator = 1, denominator = 1;
    double ans = 1;
    for(int i = 1; i <= n; i++) {
        numerator *= x;
        denominator *= i;
        if(i % 2 == 0)
            ans = ans + numerator / denominator;
        else
            ans = ans - numerator / denominator;
    }
    return ans;
}
