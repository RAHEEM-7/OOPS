//Md.Abdul Raheem | BT19CSE067 | Problem_2| Assignment_2

#include<iostream>
#include"Q2.h"

using namespace std;

int main()
{
	int a,b;
	cout << "Enter the complex no 1 real part and then imaginary : " << endl;
	cin >> a >> b ;
	complex c1;
	c1.setcomplex(a,b);
	
	int c,d;
	cout << "Enter the complex no 1 real part and then imaginary : " << endl;
	cin >> c >> d;
	complex c2(c,d);
	
	complex c3;
	c3 = c1 + c2;
	display(c3);

	complex c4;
	c4 = c1 - c2;
	display(c4);
	
	complex c5;
	c5 = c1 * c2;
	display(c5);
	
	complex c6;
	c6 = c2 / c1;
	display(c6);
	
	complex c7;	
	c7.setcomplex(a,-b);
	c1 = c1^c7;
	c2 = ~c2;
	
	display(c1);
	display(c2);
	
	complex c8;
	c8 = 5;
	display(c8);
	
	return 0;
}
	