/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2013年06月04日 20时59分20秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class Point
{
private:
    int *data;
    int dimension;

public:
    Point(int);
    Point(int*, int);
    Point operator+(const Point&);
    Point operator-(const Point&);
    Point& operator=(const Point&);
    void print();

    ~Point();
};

Point::Point(int d): dimension(d)
{
    data = new int[dimension];
    memset(data, 0, sizeof(int) * dimension);
}

Point::Point(int* _data, int d) {
    dimension = d;
    data = new int[dimension];
    memcpy(data, _data, sizeof(int) * dimension);
}

Point Point::operator+(const Point& tmp)
{
    int tmp_d = max(dimension, tmp.dimension);
    int* ans = new int[tmp_d];
    memset(ans, 0, sizeof(int) * tmp_d);

    for (int i = 0; i < dimension; i++)
    {
        ans[i] += data[i];
    }

    for (int i = 0; i < tmp.dimension; i++)
    {
        ans[i] += tmp.data[i];
    }

    return Point(ans, tmp_d);
}

Point Point::operator-(const Point& tmp)
{
    int tmp_d = max(dimension, tmp.dimension);
    int* ans = new int[tmp_d];
    memset(ans, 0, sizeof(int) * tmp_d);

    for (int i = 0; i < dimension; i++)
    {
        ans[i] += data[i];
    }

    for (int i = 0; i < tmp.dimension; i++)
    {
        ans[i] -= tmp.data[i];
    }

    return Point(ans, tmp_d);
}

Point& Point::operator=(const Point& tmp)
{
    if (dimension != tmp.dimension)
    {
        delete [] data;
        dimension = tmp.dimension;
        data = new int[dimension];
    }
    memcpy(data, tmp.data, sizeof(int) * dimension);

    return *this;
}

void Point::print()
{
    cout << "(";
    for (int i = 0; i < dimension; i++)
    {
        if (i != 0) cout << ",";
        cout << data[i];
    }
    cout << ")" << endl;
}

Point::~Point()
{
    dimension = 0;
    delete [] data;
    data = NULL;
}
