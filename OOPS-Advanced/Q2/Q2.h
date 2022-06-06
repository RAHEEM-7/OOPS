//Md.Abdul Raheem | BT19CSE067 | Problem_2| Assignment_2

#ifndef TWO_H
#define TWO_H
 
class complex 
{
	private:
		 int real;
		 int imag;
	public:
		complex();
		complex(int a,int b);
		void setcomplex(int a,int b);
		void set_real(int a);
		void set_imag(int b);
		int get_real() const;
		int get_imag() const;
		complex(const complex& c);
		~complex();
		friend void display(complex c);
		friend complex operator+(complex c1,complex c2);
		friend complex operator-(complex c1,complex c2);
		friend complex operator*(complex c1,complex c2);
		friend complex operator/(complex c1,complex c2);
		void operator=(int a);
		complex operator~();
		friend complex operator^(complex c1,complex c2);
};

#endif