//Md.Abdul Raheem | BT19CSE067 | Problem_1| Assignment_2

#include<iostream>

#include "Q1.h"

using namespace std;

complex::complex()
{
	real = 0;
	imag = 0;
}

void complex::setcomplex(int a,int b)
{
	real = a;
	imag = b;
}

void complex::display()
{
	cout << real << " + " << imag << "i" << endl;
}

int complex::get_real() const
{
	return real;
}

int complex::get_imag() const
{
	return imag;
}
complex operator+(complex c1,complex c2)
{
	complex temp;
	int a,b;
	a = c1.real + c2.real;
	b = c1.imag + c2.imag;
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

/*ostream& operator<<(ostream& out,const complex& c)
{
	
	out << c.get_real() << "+" << c.get_imag() << "i"<< endl;
	return out;
}

istream& operator>>(istream& in,complex& c)
{
	int a,b;
	in >> a >> b;
	c.setcomplex(a,b);
	return in;
}*/
	
void complex::disp(complex c){
	cout << c.real << " + " << c.imag << "i" << endl;
}
	
	
	
