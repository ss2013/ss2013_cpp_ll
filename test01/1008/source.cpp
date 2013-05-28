/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/28/2013 07:09:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstring>
using namespace std;

template<class T>
bool gt(T a, T b) {
    return a > b;
}

template<class T> 
bool gt(T* a, T* b) {
    return (*a) > (*b);
}

bool gt(char* a, char* b) {
    return strcmp(a, b) == 1;
}                                 

