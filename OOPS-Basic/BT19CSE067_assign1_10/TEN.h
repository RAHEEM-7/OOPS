//Md.Abdul Raheem | BT19CSE067 | Problem_10| Assignment_1
#ifndef _TEN_H
#define _TEN_H
#include<string>

using namespace std;
class Student
{
    private:
                string rollno;
                string name;
                float mark1;
                float mark2;
                float mark3;
                float total;
                float average;
    public:
                Student();
                Student(string rollno,string name);
                void getmark1();
                void getmark2();
                void getmark3();
                void gettotal();
                void getaverage();
                void displaydata();
                
};

#endif




