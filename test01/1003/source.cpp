/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/28/2013 07:03:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    
    while (cin >> s) {
        int left = 0;
        int i = 0;
        for (; i < s.length(); i++) {
            if (s[i] == '(') {
                left++;
            } else if (s[i] == ')') {
                if (left == 0) break;
                left--;
            }
        }
        if (left != 0 || i != s.length())
            cout << "No";
        else cout << "Yes";
        cout << endl;
    }

    return 0;
}

