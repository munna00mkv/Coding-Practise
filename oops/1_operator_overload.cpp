#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int real,imag;
    public:
        Complex(int r = 0, int i = 0)
        {
            real = r;
            imag = i;
        }
        // Function to add two complex number
        // This function is automatically called when + is 
        // used with two comlpex number
        Complex operator + (Complex const &obj)
        {
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        void print()
        {
            cout<<real<<" + i"<<imag<<endl;
        }
};
int main()
{
    Complex c1(1,2), c2(3,4);
    Complex c3 = c1 + c2;  // calling operator
    c3.print();
    return 0;
}