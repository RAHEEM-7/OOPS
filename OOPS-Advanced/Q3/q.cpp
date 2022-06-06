//Md.Abdul Raheem | BT19CSE067 | Problem_3| Assignment_2

#include<iostream>
#include"Q3.h"

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

void complex::print()
{
	cout << real << "+" << imag << "i" << "  ";
}