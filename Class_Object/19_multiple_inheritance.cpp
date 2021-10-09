/*Multiple inheritance:- one derived class inherit properties of multiple base class
Syntex:-
class Derived_class_name : Visibility_mode1 Base1, Visibility_mode base2, Visibility-mode base3 .....so...on*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Base class 1
class Num1{
    protected:
        int n1;
    public:
        void setNum1(int a)
        {
            n1 = a;
        }
};
// Base Class 2
class Num2{
      protected:
        int n2;
    public:
        void setNum2(int b)
        {
            n2 = b;
        }
};
//Base Class 3
class Num3{
      protected:
        int n3;
    public:
        void setNum3(int c)
        {
            n3 = c;
        }
};
//Derived Class
class Sum : public Num1, public Num2, public Num3{
    public:
        void display(){
        cout<<"Sum is: "<<n1+n2+n3<<endl;
        }
        
};
int main()
{
    Sum s1;
    s1.setNum1(2);
    s1.setNum2(3);
    s1.setNum3(6);
    s1.display();
    return 0;
}
