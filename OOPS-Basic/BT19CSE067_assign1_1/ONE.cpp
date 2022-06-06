//Md.Abdul Raheem | BT19CSE067 | Problem_1| Assignment_1
#include <iostream>
#include"ONE.h"
using namespace std;
One::One()
{
    cout<<"object created";
}
One::One(int p)
{
    a=p;
}
void One::set1(int A)
{
    b=A;
}
void One::set2(int B)
{
    c=B;
}
int One::getsum()
{
    return a+b+c;
}
int One::getprod()
{
    return a*b*c;
}
