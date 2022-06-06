//Md.Abdul Raheem | BT19CSE067 | Problem_5| Assignment_1
#include <iostream>
#include <string>
#include "FIVE.h"

using namespace std;

int main()
{
    string s;
    cout << "Enter a string : ";
    cin>>s;
    Message m(s);
    m.print();
    cout<<endl;

    cout<<"Enter an extra string :"
    cin>>s;
    m.print(s);
    return 0;
}