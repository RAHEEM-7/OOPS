//Md.Abdul Raheem | BT19CSE067 | Problem_3| Assignment_2

#ifndef THREE_H
#define THREE_H

class complex
{
	private:
		 int real;
		 int imag;
	public:
		complex();
		complex(int a,int b);
		complex(const complex& c);
		~complex();
		void setcomplex(int a,int b);
		void set_real(int a);
		void set_imag(int b);
		int get_real() const;
		int get_imag() const;
		void print();
};

class Matrix 
{
	private:
		int ROWS;
		int COLS;
		complex **M;
	public:
		Matrix(int r,int c);
		Matrix(const Matrix& m);
		~Matrix();
		complex getValueAt(int r, int c) const;
		int get_rows() const;
		int get_cols() const;
		void set_rows(int r) ;
		void set_cols(int c) ;
		void setValueAt(complex c1,int r,int c);
		friend void display(const Matrix& m); 
		friend bool search(const Matrix& m , complex c);
		
		friend Matrix& operator+(Matrix& m,int a);
		friend Matrix& operator+(Matrix& m,complex c);
		friend Matrix& operator+(Matrix& m1,Matrix& m2);
		friend Matrix& operator-(Matrix& m,int a);
		friend Matrix& operator-(Matrix& m,complex c);
		friend Matrix& operator-(Matrix& m1,Matrix& m2);
		friend Matrix& operator^(Matrix& m, int a);
		//void operator=(complex **c);
		friend Matrix& operator*(Matrix& m,int a);
		friend Matrix& operator*(Matrix& m,complex c);
		friend Matrix& operator*(Matrix& m1,Matrix& m2);
};
	
#endif		