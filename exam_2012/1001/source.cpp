/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2013年06月04日 20时32分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */
#include <map>
#include <string>
using namespace std;

class student
{
private:
    map<int, string> stu;

public:
    void reg(int no, string name) {
        stu[no] = name;
    }

    bool graduate(int no, string name) {
        map<int, string>::iterator iter = stu.find(no);
        if (iter == stu.end() || iter->second != name) return false;

        stu.erase(iter);
        return true;
    }

    string findName(int no) {
        map<int, string>::iterator iter = stu.find(no);
        if (iter == stu.end()) return "";

        return iter->second;
    }
};
