/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  05/07/2013 12:10:28 AM
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

class Dog
{
public:
    virtual void bark() = 0;
};

class YellowDog: public Dog
{
public:
    void bark()
    {
        cout << "YYYYellow" << endl;
    }
};

class WhiteDog: public Dog
{
public:
    void bark()
    {
        cout << "WWWWhite" << endl;
    }
};

class BlackDog: public Dog
{
public:
    void bark()
    {
        cout << "BBBBlack" << endl;
    }
};

