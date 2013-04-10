/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/01/2013 12:28:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <cstdio>
using namespace std;

class Date {
    public:
        friend void showDate(const Date& date);
    public:
        Date(int year, int month, int day);
        ~Date();
    private:
        int year, month, day;
};

void showDate(const Date& date) {
    printf("%04d:%02d:%02d\n", date.year, date.month, date.day);
}

Date::Date(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

Date::~Date() {
    printf("%04d年%02d月%02d日\n", year, month, day);
}
