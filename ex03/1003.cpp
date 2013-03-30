/*
 * =====================================================================================
 *
 *       Filename:  5_Date.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2013 09:17:57 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <string>
#include <cstdio>
#include <cctype>
using namespace std;

class Date {
    public:
        static const int mdays[13];

        Date(): year(2006), month(1), day(1){validate();}
        Date(const Date&);
        Date(const string&);
        Date(int, int = 2, int = 29);

        void setDate(const string&);

        void printDate() const;

        int getYear() const {return year;}
        int getMonth() const {return month;}
        int getDay() const {return day;}
    private:
        bool checkFormat(const string& ) const;
        bool validate();

        int year, month, day;
        bool pass;
};

const int Date::mdays[13] = {0, 31, 30, 29, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date(const Date& tmp) {
    year = tmp.getYear();
    month = tmp.getMonth();
    day = tmp.getDay();
    validate();
}

Date::Date(const string& s) {
    sscanf(s.c_str(), "%d:%d:%d", &year, &month, &day);
    validate();
}

Date::Date(int _year, int _month, int _day) {
    year = _year;
    month = _month;
    day = _day;
    validate();
}

void Date::setDate(const string& s) {
    if(checkFormat(s)) {
        sscanf(s.c_str(), "%d:%d:%d", &year, &month, &day);
        validate();
    } else {
        pass = false;
    }
}

void Date::printDate() const {
    if(pass) {
        printf("%04d年%02d月%02d日\n", year, month, day);
    } else {
        printf("Invalid Date\n");
    }
}

bool Date::checkFormat(const string& s) const {
    // min length is 5 which is like 1:1:1
    if(s.size() <= 5)
        return false;

    if(!isdigit(s[0]))
        return false;

    bool isNum = true;
    int counts = 0;
    for(int i = 1; i < s.size(); i++) {
        // no more than three numbers
        if(counts >= 3)
            return false;

        if(s[i] != ':' && !isdigit(s[i])) {
            return false;
        } else if(s[i] == ':') {
            // the character before ':' should be digit
            if(isNum)
                counts++;
            else return false;
        }

        isNum = isdigit(s[i]);
    }

    if(counts == 2 && isNum)
        return true;

    return false;
}

bool Date::validate() {
    if(year <= 0 
            || month <= 0 || month > 12
            || day <= 0 || day > mdays[month]) {
        pass = false;
        return false;
    }

    // ordinary year
    if(!(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
        if(month == 2 && day > 28) {
            pass = false;
            return false;
        }
    }

    pass = true;
    return pass;
}

//int main() {
//    Date date1("2001:01:07");
//    date1.printDate();
//
//    Date date2("2001:01:07");
//    date2.printDate();
//
//    Date date3("2001:02:29");
//    date3.printDate();
//
//    Date date4("2000:02:29");
//    date4.printDate();
//
//    date1.setDate("2001:01:31");
//    date1.printDate();
//
//    date1.setDate("2001");
//    date1.printDate();
//
//    date1.setDate("2001:");
//    date1.printDate();
//
//    date1.setDate("2001::02:01");
//    date1.printDate();
//
//    date1.setDate("2001::02:01");
//    date1.printDate();
//
//    date1.setDate("2000:00:01");
//    date1.printDate();
//
//    date1.setDate("2001:02:00");
//    date1.printDate();
//
//    date1.setDate("2001:-2:00");
//    date1.printDate();
//
//    date1.setDate(":2001:02:01");
//    date1.printDate();
//
//    date1.setDate("2001:02:01:01");
//    date1.printDate();
//
//    date1.setDate("2001:0002:01");
//    date1.printDate();
//
//    Date date5;
//    date5.printDate();
//
//    Date date6(date5);
//    date6.printDate();
//
//    Date date7(2000);
//    date7.printDate();
//
//    Date date8(2000, 1);
//    date8.printDate();
//
//    Date date9(2000, 1, 1);
//    date9.printDate();
//
//    Date date0(2001);
//    date0.printDate();
//
//    return 0;
//}
