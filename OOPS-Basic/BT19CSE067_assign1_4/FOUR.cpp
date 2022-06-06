//Md.Abdul Raheem | BT19CSE067 | Problem_4| Assignment_1
#include<iostream>
#include "FOUR.h"

using namespace std;

House::House()
{
    cout << "object of house is created" << endl;
}
void House::display()
{
    cout << "You are in House " << endl;
}
House::Wall::Wall()
{
    cout << "object of wall is created" << endl;
}
void House::Wall::display()
{
    cout << "You are on Wall " << endl;
}
House::Wall::Clock::Clock()
{
    cout << "object of clock is created" << endl;
}
void House::Wall::Clock::display()
{
    cout << "You are in Clock " << endl;
}