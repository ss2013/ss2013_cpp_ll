/*
 * =====================================================================================
 *
 *       Filename:  4_Josephus.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2013 05:53:59 PM
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

class Josephu {
    public:
        Josephu(int num) {
            this->num = num;
            left = NULL;
            right = NULL;
        }

        int getNum() {return num;}
        Josephu* getLeft() {return left;}
        Josephu* getRight() {return right;}

        void setLeft(Josephu* left) {this->left = left;}
        void setRight(Josephu* right) {this->right = right;}

    private:
        int num;
        Josephu* left;
        Josephu* right;
};

class CycleLink {
    public:
        CycleLink(int n);
        int solveJosephus(const int& , const int& );     //solve the josephus problem
        void createLink(int n);                          //create the cycle link which has n node

    private:
        void clearLink();                                //clear all the link
        Josephu* deleteNode(Josephu* tmp);               //delete the specified node, return its right node

        Josephu* firstNode;
        int size;
};

int main() {

    int n, beg, interval;
    int t ;
    cin >> t;
    for(int k = 0; k < t; k++) {
        cin >> n >> beg >> interval;
        CycleLink test(n);
        test.solveJosephus(beg, interval);
    }

    return 0;
}

CycleLink::CycleLink(int n) {
    firstNode = NULL;
    createLink(n);
}

void CycleLink::clearLink() {
    while(firstNode != NULL)
        deleteNode(firstNode);
    firstNode = NULL;
}

Josephu* CycleLink::deleteNode(Josephu* tmp) {
    if(tmp == NULL) return NULL;

    Josephu* left = tmp->getLeft();
    Josephu* right = tmp->getRight();

    if(right != NULL)
        right->setLeft(left);
    if(left != NULL)
        left->setRight(right);
    delete tmp;

    size--;
    if(size == 0) {
        firstNode = NULL;
        return NULL;
    } 

    if(tmp == firstNode) firstNode = right;

    return right;
}

void CycleLink::createLink(int n) {
    clearLink();
    size = n;
    firstNode = new Josephu(1);
    Josephu* cur = firstNode;
    Josephu* next = NULL;
    for(int i = 2; i <= n; i++) {
        next = new Josephu(i);
        next->setLeft(cur);
        cur->setRight(next);
        cur = next;
        next = NULL;
    }
    firstNode->setLeft(cur);
    cur->setRight(firstNode);
}

int CycleLink::solveJosephus(const int& beg, const int& interval) {
    if(interval < 0) {
        cout << "the interval should be positive" << endl;
        return -1;
    }

    Josephu* cur = firstNode;

    //get the begin node to count
    for(int i = 2; i <= beg; i++) {
        cur = cur->getRight(); 
    }

    //play the game
    int last = -1;
    while(cur != NULL) {
        for(int i = 1; i < interval; i++) {
            cur = cur->getRight();
        }
        last = cur->getNum();
        cout << last;
        cur = deleteNode(cur);

        if(cur != NULL)
            cout << " ";
    }
    cout << endl;
    return last;
}
