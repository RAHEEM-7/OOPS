//Md.Abdul Raheem | BT19CSE067 | Problem_2| Assignment_2

#include<iostream>
#include"Q2.h"

using namespace std;

complex::complex()
{
	real = 0;
	imag = 0;
}

complex::complex(int a,int b)
{
	real = a;
	imag = b;
}

complex::complex(const complex& c) 
{
	real = c.real;
	imag = c.imag;
}

complex::~complex()
{
}
void complex::setcomplex(int a,int b)
{
	real = a;
	imag = b;
}

void complex::set_real(int a)
{
	real = a;
}

void complex::set_imag(int b)
{
	imag = b;
}

int complex::get_real() const
{
	return real;
}

int complex::get_imag() const
{
	return imag;
}

void display(complex c)
{
	cout << c.get_real() << "+" << c.get_imag() << "i" << endl;
}

complex operator+(complex c1,complex c2)
{
	complex temp;
	int a,b;
	a = c1.get_real() + c2.get_real();
	b = c1.get_imag() + c2.get_imag();
	temp.setcomplex(a,b);
	return temp;
}

complex operator-(complex c1,complex c2)
{
	complex temp;
	int a,b;
	a = c1.get_real() - c2.get_real();
	b = c1.get_imag() - c2.get_imag();
	temp.setcomplex(a,b);
	return temp;
}

complex operator*(complex c1,complex c2)
{
	complex temp;
	int a,b;
	a = (c1.get_real() * c2.get_real()) - (c1.get_imag() * c2.get_imag());
	b = (c1.get_real() * c2.get_imag()) + (c1.get_imag() * c2.get_real());
	temp.setcomplex(a,b);
	return temp;
}

complex operator/(complex c1,complex c2)
{
	int a,b,c;
	c = (c2.get_real() * c2.get_real()) + (c2.get_imag() * c2.get_imag());
	a = ((c1.get_real() * c2.get_real()) + (c1.get_imag() * c2.get_imag()))/c;
	b = (-(c1.get_real() * c2.get_imag()) + (c1.get_imag() * c2.get_real()))/c;
	complex temp;
	temp.setcomplex(a,b);
	return temp;
}

void complex::operator=(int a)
{
	real = a;
	imag = 0;
}
	
complex complex::operator~()
{
	int c;
	c = real;
	real = imag;
	imag = c;
	return *this;
}

complex operator^(complex c1,complex c2)
{
	int a,b=0;
	a = (c1.get_real() * c2.get_real()) - (c1.get_imag() * c2.get_imag());
	complex c;
	c.setcomplex(a,b);
	return c;
}







	
	
	
	