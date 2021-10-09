// overloading unary operator(++,--)
#include<bits/stdc++.h>
using namespace std;
class Fraction{
    private:
        int numerator;
        int denomirator;
    public:
        Fraction(){}
        Fraction(int n, int d)
        {
            numerator = n;
            denomirator = d;
        }
        // overloading ++ operator
        Fraction operator++()
        {
            Fraction f;
            f.numerator = numerator + denomirator;
            return f;
        }
        void print()
        {
            cout<<numerator<<endl;
        }
};
int main()
{
    Fraction f(10,4);
    Fraction f1 =  ++f; // overloading preincrement
    f1.print();
    
    return 0;
}