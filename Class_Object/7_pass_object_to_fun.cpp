// Write a Program to print sum of two complex number
#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
        void setData(int a, int b)
        {
            real = a;
            img = b;
        }
        void getData()
        {
            cout<<"Complex Number is: "<<real<<" + "<<img<<"i"<<endl;
        }
        // member function that sum two number and assign real and img part after sum
        void sumComplexNum(Complex c1, Complex c2)
        {
            real = c1.real + c2.real;
            img = c1.img + c2.img;
        }
};

int main()
{
    // c3 - object to access sum of two number
    Complex c1,c2,c3;
    c1.setData(2,3);
    c1.getData();
    c2.setData(4,5);
    c2.getData();
    // Calling sum function
    c3.sumComplexNum(c1,c2);
    c3.getData();
    return 0;
}