/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/28/2013 07:02:37 PM
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
using std::sort;
using std::cout;
using std::endl;

template<class T>
void frequency(T arr[], int len) {
    int count = 1;
    sort(arr, arr + len);
    T tmp = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] != tmp) {
            cout << tmp << " " << count << endl;
            count = 0;
            tmp = arr[i];
        }
        count++;
    }
    cout << tmp << " " << count << endl;
}                                 

