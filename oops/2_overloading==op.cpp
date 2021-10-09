// Overloading == operator
#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int real,imag;
    public:
        Complex(int r = 0, int i = 0)
        {
            real = r; imag = i;
        }
        // overloading equal operator
        bool operator==(Complex const  &obj)
        {
            return real == obj.real && imag == obj.imag;
        }
};
int main()
{
    Complex c1(2,3),c2(2,3);
    bool ans = c1 == c2;
    cout<<ans;
    return 0;
}