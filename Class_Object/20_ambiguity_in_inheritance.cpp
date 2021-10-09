/*What is Ambiguity:- Suppose we have 2 base class and all have same member function and if we try
to call that functions using derived class object then it throw an error that is ambiguity
Resolve:- Make same function name in derived class and call either one function of base class using class name*/
#include <iostream>
using namespace std;

class Base1
{
public:
    void greet(void)
    {
        cout << "Hello Base 1" << endl;
    }
};
class Base2
{
public:
    void greet(void)
    {
        cout << "Hello Base 2" << endl;
    }
};
class Derived : public Base1, public Base2
{
    // Resolve ambiguity
    public:
        void greet()
        {
            Base2 :: greet();
        }
};
int main()
{
    Derived d;
    d.greet();
}
