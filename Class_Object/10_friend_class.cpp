// We can also make our class as friend class of another class
#include<iostream>
using namespace std;
// 1. Making whole class as friend
// class Complex{
//     int real;
//     int img;
//     friend class Calculator;
//     public:
//         void setData(int a, int b)
//         {
//             real = a;
//             img = b;
//         }
//         void getData()
//         {
//             cout<<"Your Number is : "<<real<<" + "<<img<<"i"<<endl;
//         }
// };

// // Making another class that perform some operation
// class Calculator{
//     public:
//         int sumRealPart(Complex c1, Complex c2)
//         {
//             return c1.real + c2.real;
//         }
//         int sumImgPart(Complex c1, Complex c2)
//         {
//             return c1.img + c2.img;
//         }
// };
// 2. Making some function of a class is friend of another class
// Forward Declaration of class
class Complex;
class Calculator{
    public:
    // First make function declaration
        int sumRealPart(Complex, Complex);
        int sumImgPart(Complex, Complex );
       
};
// Definition of class
class Complex{
    int real;
    int img;
    // Making some member function of a class is friend
    friend int Calculator :: sumRealPart(Complex,Complex);
    friend int Calculator :: sumImgPart(Complex,Complex);
    public:
        void setData(int a, int b)
        {
            real = a;
            img = b;
        }
        void getData()
        {
            cout<<"Your Number is : "<<real<<" + "<<img<<"i"<<endl;
        }
};

// Define member function here
int Calculator :: sumRealPart(Complex c1, Complex c2)
{
    return c1.real + c2.real;
}
int Calculator:: sumImgPart(Complex c1, Complex c2)
{
    return c1.img + c2.img;
}
int main()
{
    Complex c1,c2;
    c1.setData(2,3);
    c1.getData();
    c2.setData(4,5);
    c2.getData();
    Calculator cal;
    int sumR = cal.sumRealPart(c1,c2);
    cout<<"Sum Of real part "<<sumR<<endl;
    int sumI = cal.sumImgPart(c1,c2);
    cout<<"Sum Of imaginary part "<<sumI<<endl;
    return 0;
}