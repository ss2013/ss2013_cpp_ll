/*
 * =====================================================================================
 *
 *       Filename:  framework.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/07/2013 12:09:26 AM
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

#include "source.cpp"

int main(int argc, const char *argv[])
{
    Dog* dog = new YellowDog();
    dog->bark();
    delete dog;

    dog = new WhiteDog();
    dog->bark();
    delete dog;

    dog = new BlackDog();
    dog->bark();
    delete dog;

    return 0;
}
