/*
 * =====================================================================================
 *
 *       Filename:  1_namespace.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2013 04:55:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <algorithm>
using namespace std;

namespace mynspace {
    const int SIZE = 100;
    int A[SIZE];
    int mode(int [], int);
}

int mynspace::mode(int arr[], int len) {
    //先对原数组进行排序
    sort(arr, arr + len);
    int* counts = new int[len];
    int idx = 0, maxCount = -1;
    counts[0] = 1;

    //统计各数字出现的次数，次数存在counts[i]中，i为最先出现的数字的下标
    for(int i = 1; i < len; i++) {
        counts[i] = 0;
        if(arr[i] != arr[idx]) {
            if(maxCount < counts[idx])
                maxCount = counts[idx];
            idx = i;
        }
        counts[idx]++;
    }
    if(maxCount < counts[idx])
        maxCount = counts[idx];

    return maxCount;
}
