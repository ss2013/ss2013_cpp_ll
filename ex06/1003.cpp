/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/10/2013 11:44:56 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */
#include <fstream>
using namespace std;

class Complex
{
public:
    Complex(int = 0, int = 0);

    friend ostream& operator <<(ostream&, const Complex&);

    Complex operator +(const Complex&);
    Complex operator -(const Complex&);
    Complex operator *(const Complex&);
    Complex operator /(const Complex&);

private:
    int real; //实部
    int imag; //虚部
};

Complex::Complex(int real, int imag)
{
    this->real = real;
    this->imag = imag;
}

ostream& operator <<(ostream& out, const Complex& c) {
    out << c.real << "+" << c.imag << "i";
    return out;
}

Complex Complex::operator +(const Complex& c)
{
    Complex tmp;
    tmp.real = this->real + c.real;
    tmp.imag = this->imag + c.imag;
    return tmp;
}

Complex Complex::operator -(const Complex& c)
{
    Complex tmp;
    tmp.real = this->real - c.real;
    tmp.imag = this->imag - c.imag;
    return tmp;
}

Complex Complex::operator *(const Complex& c)
{
    Complex tmp;
    tmp.real = (real * c.real) - (imag * c.imag);
    tmp.imag = (real * c.imag) + (imag * c.real);
    return tmp;
}

Complex Complex::operator /(const Complex& c)
{
    int div = (c.real * c.real) + (c.imag * c.imag);
    Complex tmp;
    tmp.real = (real * c.real) + (imag * c.imag);
    tmp.real /= div;
    tmp.imag = (imag * c.real) - (real * c.imag);
    tmp.imag /= div;
    return tmp;
}
