/*
 * =====================================================================================
 *
 *       Filename:  framework.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/10/2013 12:34:13 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */
#include "source.cpp"
#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    Item item1;
    cout << Item::getCounts() << endl;

    {
        Item item2;
        cout << Item::getCounts() << endl;
    }
    cout << Item::getCounts() << endl;

    Item* iteme_ptr = new Item();
    cout << Item::getCounts() << endl;

    Item item4;
    cout << Item::getCounts() << endl;

    delete iteme_ptr;
    cout << Item::getCounts() << endl;

    return 0;
}

