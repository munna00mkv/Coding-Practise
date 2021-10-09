#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Base1{
    protected:
        int data1;
    public:
        // Constructor 
        Base1(int a)
        {
            data1 = a;
        }
        void showBase1data()
        {
            cout<<"Base 1 Constructor called"<<endl;
            cout<<"Data 1: "<<data1<<endl;
        }
};
class Base2{
    protected:
        int data2;
    public:
        // Constructor
        Base2(int b)
        {
            data2 = b;
        }
        void showBase2data()
        {
            cout<<"Base 2 Constructor Called"<<endl;
            cout<<"Data 2: "<<data2<<endl;
        }
};
class Derived:public Base1, public Base2{
    protected:
        int data3,data4;
    public:
        // derived class constructor: - special syntex
        // take all value and set vale of base class first then set own value
        Derived(int a, int b, int c, int d):Base1(a),Base2(b)
        {
            data3 = c;
            data4 = d;
        }
        void showDeriveddata()
        {
            cout<<"Derived constructor called"<<endl;
            cout<<"Data 3: "<<data3<<endl;
            cout<<"Data 4: "<<data4<<endl;
        }
};

int main()
{
    // Setting all value to derived class constructor
    Derived d(1,2,3,4);
    d.showBase1data();
    d.showBase2data();
    d.showDeriveddata();
    return 0;
}