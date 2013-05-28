/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/10/2013 10:07:03 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */
class Singleton
{
public:
    static Singleton* getInstance();    //用于获得该类对象

    int getVar() const; //用于返回成员变量var的值
    void setVar(int);   //用于设置成员变量var的值

private:
    Singleton();

    static Singleton* instance;

    int var;    //类的一个成员变量，在初始化类对象的时候，var应该设为0
};

Singleton* Singleton::instance = NULL;

Singleton* Singleton::getInstance()
{
    if (instance == NULL)
        instance = new Singleton();
    return instance;
}

int Singleton::getVar() const
{
    return this->var;
}

void Singleton::setVar(int var)
{
    this->var = var;
}

Singleton::Singleton()
{
    this->var = 0;
}
