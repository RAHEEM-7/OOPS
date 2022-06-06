//Md.Abdul Raheem | BT19CSE067 | Problem_10| Assignment_1
#include "TEN.h"
#include<iostream>
#include<string>
using namespace std
Student::Student()
{
    rollno="unknown";
    name="unknown";
    mark1=0.0;
    mark2=0.0;
    mark3=0.0;
    total=0.0;
    average=0.0;
}
Student::Student(string Rolno,string Name)
{
        rollno=Rolno;
        name=Name;
}
void Student::getmark1()
{
    cin>>mark1;
} 
void Student::getmark2()
{
    cin>>mark2;
}
void Student::getmark3()
{
    cin>>mark3;
}
void Student::gettotal()
{
    total=mark1+mark2+mark3;
}
void Student::getaverage()
{
    average=1.0*total/3;
} 
void Student::displaydata()
{
    cout<<"RollNo : " << rollno << endl;
    cout<<"Name : " << name << endl;
    cout<<"Marks : " << endl;
    cout<<"mark1 : " << mark1 ;
    cout<<"mark2 : " << mark2 ;
    cout<<"mark3 : " << mark3 << endl;
    cout<<"Total : " << total << endl;
    cout<<"Average : " << average << endl;
}


