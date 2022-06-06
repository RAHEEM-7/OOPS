//Md.Abdul Raheem | BT19CSE067 | Problem_1| Assignment_2

#ifndef ONE_H
#define ONE_H

class complex 
{
	private:
		 
		  int real;
		  int imag;
	public:
		  complex();
		  void setcomplex(int a,int b);
		  void display();
		  int get_real() const;
		  int get_imag() const;
		  void disp(complex c);
		  friend complex operator+(complex c1,complex c2);
		  friend complex operator-(complex c1,complex c2);
		  friend complex operator*(complex c1,complex c2);
		  friend complex operator/(complex c1,complex c2);
		  /*friend ostream& operator<<(ostream& out,const complex& c);
		  friend istream& operator>>(istream& in,complex& c);*/
};

#endif