//Md.Abdul Raheem | BT19CSE067 | Problem_1| Assignment_1
#ifndef _ONE_H
#define _ONE_H

using namespace std;
class One
{
    private:
               int a;
	           int b;		
    protected:
               int c;
    public:
               One();
               One(int a);
               void set1(int A);
	           void set2(int B);
               int getsum();
               int getprod();
};

#endif
