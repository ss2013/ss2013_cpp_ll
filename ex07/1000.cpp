/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/15/2013 08:48:37 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class String
{
public:
    String(char*);
    String(const String&);

    ~String();

    String& operator =(const String&);

    inline char& operator[](int);

    friend ostream& operator <<(ostream&, const String&);

private:
    void init(char*);

    char* data;
    int len;
};

String::String(char* s)
{
    init(s);
}

String::String(const String& s)
{
    init(s.data);
}

String::~String()
{
    delete data;
}

String& String::operator =(const String& s)
{
    init(s.data);
    return (*this);
}

char& String::operator[](int i)
{
    return data[i];
}

ostream& operator <<(ostream& os, const String& s)
{
    for (int i = 0; i < s.len; i++)
    {
        os << s.data[i];
    }
    return os;
}

void String::init(char* s)
{
    len = strlen(s);
    data = new char[len + 1];
    memcpy(data, s, sizeof(char) * len);
}
