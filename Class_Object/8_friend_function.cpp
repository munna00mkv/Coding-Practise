/* Friend Function: 
-- By using it we can access our private data of class
-- It is not a member function of that class, it is just friend of that class which have access to their private data*/
// Write a function that sum two complex number and return their sum i.e- return a new complex num

#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int img;
    public:
        void setData()
        {
            cout<<"Enter real part: "<<endl;
            cin >> real;
            cout<<"Enter img part: "<<endl;
            cin >> img;
        }
        void getData()
        {
            cout<<"Your Number is : "<<real<<" + "<<img<<"i"<<endl;
        }
        // Friend function
        friend Complex sumComplexNum(Complex c1, Complex c2);
};
// Function that calculate sum of two complex number and return their sum
Complex sumComplexNum(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}

int main()
{
    Complex c1,c2,sum;
    c1.setData();
    c1.getData();
    c2.setData();
    c2.getData();
    sum = sumComplexNum(c1,c2);
    sum.getData();
    return 0;
}