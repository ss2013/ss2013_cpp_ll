/*
 * =====================================================================================
 *
 *       Filename:  4_soj4629.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2013 08:59:22 AM
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

int find_gcd(int a, int b) {
    if(b == 0)
        return a;
    return find_gcd(b, a % b);
}

int main() {
    int a, b, c, d;
    int tmp_numerator, tmp_denominator;
    int ans_numerator, ans_denominator;
    int gcd;
    int t;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c >> d;
        tmp_numerator = a * d + c * b;
        tmp_denominator = b * d;
        gcd = find_gcd(tmp_denominator, tmp_numerator);
        ans_denominator = tmp_denominator / gcd;
        ans_numerator = tmp_numerator / gcd;
        cout << ans_numerator;
        if(ans_denominator != 1)
            cout << "/" << ans_denominator;
        cout << endl;
    }
    return 0;
}                                 
