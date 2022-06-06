//Md.Abdul Raheem | BT19CSE067 | Problem_5| Assignment_1
#ifndef _FIVE_H
#define _FIVE_H

#include<string>

using namespace std;

class Message
{
    private:
            string str;
    public:
            Message();
            Message(string s);
            string getstring();
            void print();
            void print(string st);
    
};

#endif