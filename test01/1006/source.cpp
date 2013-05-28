/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/28/2013 07:07:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    Person(){ cout << "Construct Person" << endl;}
    ~Person(){ cout << "Destruct Person" << endl;}
public:
    string name;      //person’s name
    int sex;           //1--male, 0—female
};

class Student: virtual public Person {
public:
    Student(){ cout << "Construct Student" << endl;}
    ~Student(){ cout << "Destruct Student" << endl;}
public:
    string sno;
};

class Worker: virtual public Person {
public:
    Worker(){ cout << "Construct Worker" << endl;}
    ~Worker(){ cout << "Destruct Worker" << endl;}
public:
    string wno;
};

class InService: public Student, public Worker{
public:
    InService(){ cout << "Construct InService" << endl;}
    ~InService(){ cout << "Destruct InService" << endl;}
};                                 
