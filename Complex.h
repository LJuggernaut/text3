#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Complex
{
public:	
	Complex();
	Complex(int,int);
	Complex add(Complex);
	Complex subtract(Complex);
	Complex multiply(Complex);
	string toString();
	Complex operator+(const Complex&);
	Complex operator-(const Complex&);
	Complex operator*(const Complex&);
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, const Complex&);
	int operator[](int);
	Complex operator+=(const Complex&);
	Complex operator-=(const Complex&);
	Complex operator*=(const Complex&);
	Complex& operator++();
	Complex& operator--();
	Complex operator+();
	Complex operator-();
	int real;
	int imaginary;
};

#endif