/*Constructor Overloading:- 
overloading:- Same signature but diffrent parameter
- Same constructor name but diffrent parameter*/
#include<iostream>
using namespace std;

class Sum{
    int a,b,c;
    public:
    // Note:- each class has a default constructor
        // // Constructor with no argument
        Sum()
        {
            a = 0;
            b = 0; 
            c = 0;
        }
        // Constructor with one argument
        Sum(int n1)
        {
            a = n1;
            b = 0;
            c = 0;
        }
        // Constructor with two argument
        Sum(int n1, int n2)
        {
            a = n1;
            b = n2;
            c = 0;
        }
        // Constructor with three argument
        Sum(int n1, int n2, int n3)
        {
            a = n1;
            b = n2; 
            c = n3;
        }
        void display()
        {
            cout<<"Sum is "<<a+b+c<<endl;
        }
    };
    int main()
    {
        // Invoked constructor with no argument
        Sum s;
        s.display();
        // Invoked constructor with one argument
        Sum s1(2);
        s1.display();
        // Invoked constructor with two argument
        Sum s2(2,3);
        s2.display();
        // Invoked constructor with three argument
        Sum s3(2,3,4);
        s3.display();
        return 0;
    }