//Md.Abdul Raheem | BT19CSE067 | Problem_8| Assignment_1
#include<iostream>
#include"EIGHT.h"

using namespace std;

int main()
{
	class time t1,t2,result;
	int hour,min,sec;
	cout<<"enter time in 24'o' clock only numbers no characters"<<endl;
	cin>>hour>>min>>sec;
	t1.set_time(hour,min,sec);
	cout<<"enter 2nd time in the same way"<<endl;
	cin>>hour>>min>>sec;
	t2.set_time(hour,min,sec);
	result.print_sum(&t1,&t2);
	return 0;
}
