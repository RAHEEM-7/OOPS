//Md.Abdul Raheem | BT19CSE067 | Problem_9| Assignment_1
#include "NINE.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
    real=0.0;
    img=0.0;
}
Complex::Complex(float same)
{
    real=same;
    img=same;
}
Complex::Complex(float Real,float Img)
{
    real=Real;
    img=Img;
}
void Complex::setreal(float r)
{
    real=r;
}
void Complex::setimg(float i)
{
    img=i;
}
void Complex::getreal()
{
    return real;
}
void Complex::getimg()
{
    return img;
}
void Complex::sum(Complex a,Complex b)
{
    float p=a.getreal()+b.getreal();
    float q=a.getimg()+b.getimg();
    setreal(p);
    setimg(q);
}   
void Complex::show()
{
    cout<<real <<  (img>=0 ? " + " : "-") << "i" << fabs(img) << endl;
}
