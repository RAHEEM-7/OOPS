//Md.Abdul Raheem | BT19CSE067 | Problem_8| Assignment_1
#ifndef _EIGHT_H
#define _EIGHT_H

using namespace std;

class time
{
	
	public:
	    	time();
	    	void set_time(int hr,int m,int s);
	        void print_sum(class time* t1,class time* t2);
	
	private:
		    int hr;
		    int min;
	        int sec;
		    int days;
	     class time* r;
};

#endif
