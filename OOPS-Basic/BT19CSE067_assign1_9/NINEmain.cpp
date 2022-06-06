//Md.Abdul Raheem | BT19CSE067 | Problem_9| Assignment_1
#include "NINE.h"
#include <iostream>
using namespace std;
int main()
{
    float real=0.0,img=0.0;
    cout<< "Enter real and imaginary values of 1st number :"<< endl;
    cin >> real >> img;
    Complex c1(real,img);

    cout<< "Enter real and imaginary values of 2nd number :"<< endl;
    cin >> real >> img;
    Complex c2(real,img);

    Complex c3;
    c3.sum(c1,c2);
    cout << "Sum = ";
    c3.show();

}