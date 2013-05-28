/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/28/2013 07:09:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
using namespace std;

bool dfs (vector<int>& arr) {
    if (arr.size() == 1) {
        return arr[0] == 24;
    }
    
    vector<int> tmp(arr.size() - 1, 0);
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            if (i == j) continue;

            int idx = 0;
            for (int k = 0; k < arr.size(); k++) {
                if (k != i && k != j) tmp[idx++] = arr[k];
            }

            // 加法
            tmp[idx] = arr[i] + arr[j];
            if (dfs(tmp)) return true;

            // 减法
            tmp[idx] = arr[i] - arr[j];
            if (dfs(tmp)) return true;

            // 乘法
            tmp[idx] = arr[i] * arr[j];
            if (dfs(tmp)) return true;

            // 除法
            if (arr[j] != 0 && (arr[i] % arr[j] ==0)) {
                tmp[idx] = arr[i] / arr[j];
                if (dfs(tmp)) return true;
            }
        }
    }

    return false;
}

int main () {
//  freopen("data.in", "r", stdin);
//  freopen("data.out", "w", stdout);
    int num;
    while (cin >> num) {
        vector<int> nums(4, 0);
        nums[0] = num;
        for (int i = 1; i < 4; i++) {
            cin >> num;
            nums[i] = num;
        }
        cout << (dfs(nums) ? "YES" : "NO") << endl;
    }
    return 0;
}                                 
