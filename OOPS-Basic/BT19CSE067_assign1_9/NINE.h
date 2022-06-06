//Md.Abdul Raheem | BT19CSE067 | Problem_9| Assignment_1
#ifndef _NINE_H
#define _NINE_H

using namespace std;

class Complex
{
    private:
                float real;
                float img;
    public:
                Complex();
                Complex(float same);
                Complex(float real,float img);

                float getreal();
                void setreal(float real);
                float getimg();
                void setimg(float img);

                void show();
                void sum(Complex c1,Complex c2);

};

#endif