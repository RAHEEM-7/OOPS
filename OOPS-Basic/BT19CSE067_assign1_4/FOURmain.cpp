//Md.Abdul Raheem | BT19CSE067 | Problem_4| Assignment_1
#include<iostream>
#include "FOUR.h"

using namespace std;

int main()
{
    House h();
    House::Wall hw();
    House::Wall::Clock hwc();

    h.display();    // display in house
    hw.display();   // dispaly in wall
    hwc.display();  // display in clock
    return 0;
}