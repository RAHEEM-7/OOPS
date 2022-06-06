//Md.Abdul Raheem | BT19CSE067 | Problem_8| Assignment_1
#include<iostream>
#include"EIGHT.h"

using namespace std;

time::time()
{
	hr=0;
	min=0;
	sec=0;
	days=0;
	r->hr=0;
	r->min=0;
	r->sec=0;
}
void time::set_time(int h,int m,int s)
{
    hr=(h>=0 && h<=24)? h:-1;
    min=(m>=0 && m<=60)? m:-1;
    sec=(s>=0 && s<=60)? s:-1;
	if((hr==-1)||(min==-1)||(sec==-1))
	{
		cout<<"invalid time give proper input"<<endl;
	}
}
void time::print_sum(class time* t1,class time* t2)
{
    r->sec=t1->sec+t2->sec;   
    if(r->sec>=60)
    {
    	r->min++;
    	r->sec=(r->sec)%60;
	}
	r->min+=t1->min;
	r->min+=t2->min;
	if(r->min>=60)
	{
		r->hr++;
		r->min=(r->min)%60;
	}
	r->hr+=t1->hr;
	r->hr+=t2->hr;
	if(r->hr>24){
		days=(r->hr)/24;
		r->hr=(r->hr-(24*days))%24;
	}
	cout<<days<<" days "<<r->hr<<" hours "<<r->min<<" minutes "<<r->sec<<" seconds "<<endl;
}
