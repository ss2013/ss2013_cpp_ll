#include<iostream>
#include<cmath>
using namespace std;

#include "source.cpp"
 

int main()
{
    int arr1[100], arr2[200], i;
    for (i = 0; i < 100; i++) arr1[i] = i;
    for (i = 0; i < 200; i++) arr2[i] = 2 * i - i / 2 + 2;
    Point a(arr1, 100);
    Point b(arr2, 200);
    Point c(10);
    Point d(150);
    (a + b).print();
    (b + a).print();
    (a - b).print();
    (b - a).print();
    c.print();
    c = a;
    c.print();
    d = a;
    d.print();
    return 0;
}
