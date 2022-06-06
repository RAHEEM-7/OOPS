//Md.Abdul Raheem | BT19CSE067 | Problem_3| Assignment_2

#include<iostream>
#include"Q3.h"

using namespace std;

int main()
{
	Matrix m(2,2);
	complex c1(1,1);
	complex c2(2,2);
	complex c3(3,3);
	complex c4(4,4);
	m.setValueAt(c1,0,0);
	m.setValueAt(c2,0,1);
	m.setValueAt(c3,1,0);
	m.setValueAt(c4,1,1);
	display(m);
	
	m = m + 1;
	display(m);
	
	bool t;
	t = search(m,c1);
	cout << t << endl;
	
	m = m + c1;
	display(m);
	
	m = m - c1;
	display(m);
	
	m = m - 1;
	display(m);
	
	m = m * 1;
	display(m);
	
	m = m * c1;
	display(m);
	
	Matrix m1(2,2);
	complex c5(5,5);
	complex c6(6,6);
	complex c7(7,7);
	complex c8(8,8);
	m1.setValueAt(c5,0,0);
	m1.setValueAt(c6,0,1);
	m1.setValueAt(c7,1,0);
	m1.setValueAt(c8,1,1);
	display(m1);
	
	Matrix m2(2,2);
	m2 = m + m1;
	display(m2);
	
	m2 = m - m1;
	display(m2);
	
	m2 = m * m1;
	display(m2);
	
	m = m^2;
	display(m);
	
	/*Matrix m3(2,2);
	complex A[2][2];
	A[0][0] = c1;
	A[0][1] = c2;
	A[1][0] = c3;
	A[1][1] = c4;
	m3 = A;
	display(m3);*/
	return 0;
}
	