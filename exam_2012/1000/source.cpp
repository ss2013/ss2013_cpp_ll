/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年06月04日 19时45分27秒
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

//抽象类，文件系统的项
class FileSymItem{
    protected:
        //文件系统项的名字
        string name;
    public:
        FileSymItem(const string& _name): name(_name) {}

        //重命名
        void rename(const string& _name) {
            name = _name;
        }

        /**
         * 返回项占用的磁盘空间
         */
        virtual int getSize() = 0;

        // 题目没说清楚FileSymItem何时会相等
        // 我这里只是简单的判断name是否相等
        // 如果我出题，会说明必须满足下面两个条件：
        // 1.两个FileSymItem的类型相等。
        // 2.它们的所有成员全部相等。
        bool operator ==(const FileSymItem& tmp) {
            return name == tmp.name;
        }
};

/**
 * 文件是一个文件系统里边的项继承FileSymItem
 */
class File: public FileSymItem{
    public:
        File(const string& _name, const int& s = 0): FileSymItem(_name), size(s) {}

        virtual int getSize() {
            return size;
        }

        //修改文件的大小
        void setSize(const int& _size) {
           size = _size; 
        }

        ~File(){
            cout << "Del File : " << name << endl;
        };
    private:
        //文件占用的磁盘空间
        int size;
};

/**
 * 文件夹是一个文件系统里边的项继承FileSymItem
 */
class Dir: public FileSymItem{
    private:
        //假设文件夹里边最多只会有个20项
        static const int MAX_ITEM_COUNT = 20;
        FileSymItem* children[MAX_ITEM_COUNT];
        int count;

    public:
        Dir(const string& _name): FileSymItem(_name), count(0){}

        /**
         * 往文件夹添加FileSymItem （即是说可以添加文件夹/文件）
         * @param newItem 新增项
         * @return 无
         */
        void addFileSymItem(FileSymItem* newItem) {
            children[count++] = newItem;
        }

        /**
         * 往文件夹删除FileSymItem （即是说可以删除文件夹/文件）
         * @param delItem 删除项
         * @return 无
         */
        void delFileSymItem(FileSymItem* delItem) {
            for (int i = 0; i < count; i++) {
                if (*delItem == *children[i]) {
                    for (; i < count - 1; i++) {
                        children[i] = children[i + 1];
                    }
                    count--;
                    break;
                }
            }
        }

        virtual int getSize() {
            int totalSize = 0;
            for (int i = 0; i < count; i++) {
                totalSize += children[i]->getSize();
            }
            return totalSize;
        }

        ~Dir(){
            cout << "Del Dir : " << name << endl;
        }
};
