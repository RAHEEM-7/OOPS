//Md.Abdul Raheem | BT19CSE067 | Problem_3| Assignment_2

#include<iostream>
#include"Q3.h"

using namespace std;

Matrix::Matrix(int r,int c) : ROWS(r),COLS(c)
{
	M = new complex*[ROWS];
	for(int i=0;i<ROWS;i++)
	{
		M[i] = new complex[COLS];
	}
}

Matrix::~Matrix()
{
	for(int i=0;i<ROWS;i++)
	{
		delete[] M[i];
	}
	delete[] M;
}

Matrix::Matrix(const Matrix& m)
{
	ROWS = m.ROWS;
	COLS = m.COLS;
	for(int i=0; i < ROWS ; i++)
	{
	   for(int j=0; j < COLS ; j++)
	   {
		M[i][j] = m.M[i][j];
	   }
	}
}

complex Matrix::getValueAt(int r,int c) const
{
	return M[r][c];
}

void Matrix::setValueAt(complex c1,int r,int c)
{
	M[r][c] = c1;
}

int Matrix::get_rows() const
{
	return ROWS;
}

int Matrix::get_cols() const
{
	return COLS;
}

void Matrix::set_rows(int r) 
{
	ROWS = r;
}

void Matrix::set_cols(int c) 
{
	COLS = c;
}

void display(const Matrix& m)
{
	complex c;
	for(int i=0;i<m.get_rows();i++)
	{
	    for(int j=0;j<m.get_cols();j++)
	    {
	    	c = m.getValueAt(i,j);
	    	c.print();
	    }
	    cout << endl;
	} 
	cout << "\n" ;
}

bool search(const Matrix& m, complex c)
{
	complex a;
	for(int i=0; i < m.get_rows(); i++)
	{
	    for(int j=0; j < m.get_cols(); j++)
	    {
		a = m.getValueAt(i,j);
		if ( (a.get_real() == c.get_real()) && (a.get_imag() == c.get_imag()))
		{
			return true;
		}
	    }
	}
	return false;
}

Matrix& operator+(Matrix& m, int a)
{
	complex c;
	int x;
	for(int i=0; i < m.ROWS; i++)
	{
	    for(int j=0; j < m.COLS; j++)
	    {
		c = m.getValueAt(i,j);
		x = c.get_real() + a;
		c.set_real(x);
		m.setValueAt(c,i,j);
	    }
	}
	return m;
}

Matrix& operator+(Matrix& m,complex c)
{
	int a,b;
	complex x;
	for(int i=0; i < m.get_rows(); i++)
	{
	    for(int j=0; j < m.get_cols(); j++)
	    {
		x = m.getValueAt(i,j);
		a = x.get_real() + c.get_real();
		x.set_real(a);
		b = x.get_imag() + c.get_imag();
		x.set_imag(b);
		m.setValueAt(x,i,j);
	    }
	}
	return m;
}
	
Matrix& operator+(Matrix& m1,Matrix& m2)
{
	int p,q;
	p = m1.ROWS;
	q = m1.COLS;
	static Matrix m(p,q);

	complex c1,c2,c;
	int a,b;
	for(int i=0; i < m.ROWS; i++)
	{
		for(int j=0; j < m.COLS; j++)
		{
			c1 = m1.getValueAt(i,j);
			c2 = m2.getValueAt(i,j);
			a = c1.get_real() + c2.get_real();
			b = c1.get_imag() + c2.get_imag();
			c.setcomplex(a,b);
			m.setValueAt(c,i,j);
		}
	}
	return m;
}

Matrix& operator-(Matrix& m, int a)
{
	complex c;
	int x;
	for(int i=0; i < m.get_rows(); i++)
	{
	    for(int j=0; j < m.get_cols(); j++)
	    {
		c = m.getValueAt(i,j);
		x = c.get_real() - a;
		c.set_real(x);
		m.setValueAt(c,i,j);
	    }
	}
	return m;
}

Matrix& operator-(Matrix& m,complex c)
{
	int a,b;
	complex x;
	for(int i=0; i < m.get_rows(); i++)
	{
	    for(int j=0; j < m.get_cols(); j++)
	    {
		x = m.getValueAt(i,j);
		a = x.get_real() - c.get_real();
		x.set_real(a);
		b = x.get_imag() - c.get_imag();
		x.set_imag(b);
		m.setValueAt(x,i,j);
	    }
	}
	return m;
}	 
	 
Matrix& operator-(Matrix& m1,Matrix& m2)
{
	int p,q;
	p = m1.get_rows();
	q = m1.get_cols();
	static Matrix m(p,q);
	complex c1,c2,c;
	int a,b;
	for(int i=0; i < (m.get_rows()); i++)
	{
		for(int j=0; j < (m.get_cols()); j++)
		{
			c1 = m1.getValueAt(i,j);
			c2 = m2.getValueAt(i,j);
			a = c1.get_real() - c2.get_real();
			b = c1.get_imag() - c2.get_imag();
			c.setcomplex(a,b);
			m.setValueAt(c,i,j);
		}
	}
	return m;
}

Matrix& operator^(Matrix& m, int a)
{
	int count = 0;
	for(int i=0; i < (m.get_rows()); i++)
	{
	    for(int j=0; j < (m.get_cols()); j++)
	    {
		count = count + 1;
		if(count == a)
		{
			complex c;
			int a=0,b=0;
			c.setcomplex(a,b);
			m.setValueAt(c,i,j);
		}
	    }
	}
	return m;
}

/*void Matrix::operator=(complex** c)
{
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			M[i][j] = c[i][j];
		}
	}
}*/

Matrix& operator*(Matrix& m, int a)
{
	complex c;
	int x;
	for(int i=0; i < m.get_rows(); i++)
	{
	    for(int j=0; j < m.get_cols(); j++)
	    {
		c = m.getValueAt(i,j);
		x = c.get_real() * a;
		c.set_real(x);
		m.setValueAt(c,i,j);
	    }
	}
	return m;
}

Matrix& operator*(Matrix& m,complex c)
{
	int a=0,b=0;
	complex x;
	for(int i=0; i < m.ROWS; i++)
	{
	    for(int j=0; j < m.COLS; j++)
	    {
		x = m.getValueAt(i,j);
		a = (x.get_real() * c.get_real()) - (x.get_imag() * c.get_imag());
		b = (x.get_real() * c.get_imag()) + (x.get_imag() * c.get_real());
		x.setcomplex(a,b);
		m.setValueAt(x,i,j);
	    }
	}
	return m;
}	 

Matrix& operator*(Matrix& m1,Matrix& m2)
{
	int p,q;
	p = m1.ROWS;
	q = m2.COLS;
	static Matrix m(p,q);
	int a=0,b=0,sum_a=0,sum_b=0;
	complex c1,c2,c;
	for(int i=0; i < m1.ROWS; i++)
	{
	    for(int j=0; j < m2.COLS; j++)
	    {
	    	for(int k=0; k < m1.COLS; k++)
	  	{
	  	     c1 = m1.getValueAt(i,k);
	  	     c2 = m2.getValueAt(k,j);
	  	     a = (c1.get_real() * c2.get_real()) - (c1.get_imag() * c2.get_imag());
		     b = (c1.get_real() * c2.get_imag()) + (c1.get_imag() * c2.get_real());
	    	     sum_a = sum_a + a;
	    	     sum_b = sum_b + b;
	    	}
	    	c.setcomplex(sum_a,sum_b);
	    	m.setValueAt(c,i,j);
	    }
	 }
	 return m;
}	    
	    






    
