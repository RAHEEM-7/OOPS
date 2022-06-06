//Md.Abdul Raheem | BT19CSE067 | Problem_1| Assignment_1
#include <iostream>
#include"ONE.h"

using namespace std;
int main()
{
    int b;
    One A();
    One B(5);
    cin>>b;
    B.set1(b);
    int c;
    cin>>c;
    B.set2(c);
    B.getsum();
    B.getprod();
}    

    
