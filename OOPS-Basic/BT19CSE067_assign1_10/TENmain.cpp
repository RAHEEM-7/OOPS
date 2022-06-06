//Md.Abdul Raheem | BT19CSE067 | Problem_10| Assignment_1
#include<iostream>
#include<string>
#include"TEN.h"

using namespace std;

int main()
{
    int n; 
    Student stu[n];
    for(int i=0;i++;i<n)
    {
        string rollno,name;
        cout<<"Enter rollno :" << endl;
        cin>>rollno;
        cout<<"Enter name :" << endl;
        cin>>name;
        stu[i]=Student(rollno,name);
        cout<<"Enter mark1 :" << endl;
        stu[i].getmark1();
        cout<<"Enter mark2 :" << endl;
        stu[i].getmark2();
        cout<<"Enter mark3 :" << endl;
        stu[i].getmark3();
        stu[i].gettotal();
        stu[i].getaverage();
        stu[i].displaydata();
    }
}