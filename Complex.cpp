#include "Complex.h"

Complex::Complex()
{
	real = 0;
	imaginary = 0;
}

Complex::Complex(int real, int imaginary)
{
	this->real = real;
	this->imaginary = imaginary;
}

Complex Complex::add(Complex complex)
{
	int r = real + complex.real;
	int i = imaginary + complex.imaginary;
	Complex addComplex(r,i);
	return addComplex;
}

Complex Complex::subtract(Complex complex)
{
	int r = real - complex.real;
	int i = imaginary - complex.imaginary;
	Complex subComplex(r, i);
	return subComplex;
}

Complex Complex::multiply(Complex complex)
{
	int r = real * complex.real - imaginary * complex.imaginary;
	int i = real * complex.imaginary + imaginary * complex.real;
	Complex mulComplex(r,i);
	return mulComplex;
}

string Complex::toString()
{
	stringstream ss1,ss2;
	ss1 << real;
	ss2 << imaginary;
	return  ss1.str() + ss2.str()+"i";
}

Complex Complex::operator+(const Complex & complex)
{
	Complex _complex; 
	_complex.real = this->real + complex.real;
	_complex.imaginary = this->imaginary + complex.imaginary;
	return _complex;
}

Complex Complex::operator-(const Complex &complex)
{
	Complex _complex;
	_complex.real = this->real - complex.real;
	_complex.imaginary = this->imaginary - complex.imaginary;
	return _complex;
}

int Complex::operator[](int index)
{
	if (index == 0)
		return real;
	else if (index == 1)
		return imaginary;
}

Complex Complex::operator+=(const Complex & complex)
{
	*this = add(complex);
	return *this;
}

Complex Complex::operator-=(const Complex &complex)
{
	*this = subtract(complex);
	return *this;
}

Complex Complex::operator*=(const Complex &complex)
{
	*this = multiply(complex);
	return *this;
}

Complex & Complex::operator++()
{
	real++;
	return *this;
}

Complex & Complex::operator--()
{
	real--;
	return *this;
}

Complex Complex::operator+()
{
	return *this;
}

Complex Complex::operator-()
{
	return Complex(-real,-imaginary);
}

Complex Complex::operator*(const Complex & complex)
{
	*this = multiply(complex);
	return *this;
}

ostream & operator<<(ostream & out, const Complex & complex)
{
	out << complex.real;
	if(complex.imaginary>0)
		out << "+"<< complex.imaginary<<"i";
	else
		out << complex.imaginary << "i";
	return out;
}

istream & operator>>(istream & in, Complex & complex)
{
	in >> complex.real >> complex.imaginary;
	return in;
}
