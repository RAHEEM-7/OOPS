//Md.Abdul Raheem | BT19CSE067 | Problem_1| Assignment_2

#include<iostream>

#include "Q1.h"

using namespace std;

typedef struct stack_tag
{
	int top;
	complex  A[20];
}Stack;

void InitializeStack(Stack* stck)
{
	stck->top  = -1;
}

void push(complex c,Stack* stck)
{
	if(stck->top < 19)
	{
		stck->top = stck->top + 1;
		stck->A[stck->top] = c;
	}
}

complex pop(Stack* stck)
{
	complex temp;
	if(stck->top != -1)
	{
		 temp = stck->A[stck->top];
		 stck->top = stck->top -1;
	}
	return temp;
}
int main()
{
	Stack stck;
	InitializeStack(&stck);
	char B[50];
	cout << "Enter the string :" ;
	cin >> B;
	int i = 0;
	
	/*complex a;
	cin << a;    // using >> as overloaded 
	a.display();*/
	
	
	while(B[i] != '\0')
	{
		if(B[i] == '(')
		{
			int a = B[i+1] - 48;
			int b = B[i+2] -48;
			
			complex c;
			c.setcomplex(a,b);
			
			push(c,&stck);
			i = i+4;
		}
		else if(B[i] == '+')
		{
			complex c1,c2,c;
			c1 = pop(&stck);
			c2 = pop(&stck);
			c = c1 + c2;
			push(c,&stck);
			i = i+1;
		}
		else if(B[i] == '-')
		{
			complex c1,c2,c;
			c1 = pop(&stck);
			c2 = pop(&stck);
			c = c1 - c2;
			push(c,&stck);
			i = i+1;
		}
		else if(B[i] == '*')
		{
			complex c1,c2,c;
			c1 = pop(&stck);
			c2 = pop(&stck);
			c = c1 * c2;
			push(c,&stck);
			i = i+1;
		}
		else if(B[i] == '/')
		{
			complex c1,c2,c;
			c1 = pop(&stck);
			c2 = pop(&stck);
			c = c1 / c2;
			push(c,&stck);
			i = i+1;	
		}
		
	}
	complex c;
	c = pop(&stck);
	//cout << c;	// using overloaded <<
	complex w;
	w.setcomplex(5,4);
	c.disp(w);
	return 0;
}	
		
		
		
		
		
		
		
		
