/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/28/2013 07:07:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <stdio.h>

using namespace std;

 

class Complex{

private:

    double real, imag;

public:

    Complex(const double& real = 0.0, const double& imag = 0.0) {
        this->real = real;
        this->imag = imag;
    }

    Complex(const Complex& otherComplex) {
        this->real = otherComplex.real;
        this->imag = otherComplex.imag;
    }

 

    Complex operator + (const Complex& otherComplex) {
        Complex ans;
        ans.real = real + otherComplex.real;
        ans.imag = imag + otherComplex.imag;
        return ans;
    }

    Complex operator - (const Complex& otherComplex) {
        Complex ans;
        ans.real = real - otherComplex.real;
        ans.imag = imag - otherComplex.imag;
        return ans;
    }

    Complex operator * (const Complex& otherComplex) {
        Complex ans;
        ans.real = (real * otherComplex.real - imag * otherComplex.imag);
        ans.imag = (imag * otherComplex.real + real * otherComplex.imag);
        //(a+bi)(c+di)=(ac-bd)+(bc+ad)i.
        return ans;
    }

    Complex operator / (const Complex& otherComplex) {
        //除法不考虑分母为0的情况
        //(a+bi)/(c+di)=(ac+bd)/(c^2+d^2) +(bc-ad)/(c^2+d^2)i
        double tmp = otherComplex.real * otherComplex.real 
            + otherComplex.imag * otherComplex.imag;
        Complex ans;
        ans.real = (real * otherComplex.real + imag * otherComplex.imag)
            / tmp;
        ans.imag = (imag * otherComplex.real - real * otherComplex.imag)
            / tmp;
        return ans;
    }

    Complex& operator = (const Complex& otherComplex) {
        real = otherComplex.real;
        imag = otherComplex.imag;
        return (*this);
    }

    Complex& operator += (const Complex& otherComplex) {
        (*this) = (*this) + otherComplex;
        return (*this);
    }

    Complex& operator -= (const Complex& otherComplex) {
        (*this) = (*this) - otherComplex;
        return (*this);
    }

    Complex& operator *= (const Complex& otherComplex) {
        (*this) = (*this) * otherComplex;
        return (*this);
    }

    Complex& operator /= (const Complex& otherComplex) {
        //除法不考虑分母为0的情况
        (*this) = (*this) / otherComplex;
        return (*this);
    }

    //实部虚部各自加1
    Complex& operator++() {
        this->real++;
        this->imag++;
        return (*this);
    }

    Complex operator++(int n) {
        //后置++
        Complex ans = (*this);
        ++(*this);
        return ans;
    }


    //实部虚部各自减1
    Complex& operator--() {
        this->real--;
        this->imag--;
        return (*this);
    }

    Complex operator--(int n) {
        //后置--
        Complex ans = (*this);
        --(*this);
        return ans;
    }
    bool operator == (const Complex& otherComplex) {
        return (real == otherComplex.real && imag == otherComplex.imag);
    }
    bool operator != (const Complex& otherComplex) {
        return !((*this) == otherComplex);
    }
 
/*  当real = 0, image = -1的时候按照习惯理应输出： -j，还有负数等等问题

   为了简化问题，我们这里不考虑输出格式问题，直接打印0.0000 + j-1.0000即可（小数一定保留4位！注意加号旁边有空格！）  */

    void print() {
        printf("%.4lf + j%.4lf\n", real, imag);
    }
};
