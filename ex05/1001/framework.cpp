/*
 * =====================================================================================
 *
 *       Filename:  framework.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/01/2013 12:27:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "source.cpp"

int main(int argc, const char *argv[]) {
    {
        Date date1(2006, 1, 2);
    }
    Date date2(2007, 1, 3);
    Date date3(2008, 1, 3);
    showDate(date3);
    showDate(date2);

    return 0;
}

