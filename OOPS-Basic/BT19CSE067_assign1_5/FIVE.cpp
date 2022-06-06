//Md.Abdul Raheem | BT19CSE067 | Problem_5| Assignment_1
#include <iostream>
#include <string>
#include "FIVE.h"

using namespace std;

Message::Message()
{
    str="unknown";
}
Message::Message(string s)
{
    str=s;
}
string getstring()
{
    return str;
}
void Message::print()
{
    cout << "Enter string is : " << getstring() << endl;
}
void Message::print(string st)
{
    cout << Combimimg both strings << getstring() << st << endl;
}
