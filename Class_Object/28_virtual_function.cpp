// by using vitual function we can achieve run time polymirphism
#include<iostream>
using namespace std;
class Base{
    public:
        int var_base;
        // Making it virtual
       virtual void display()
        {
            cout<<"Variable of base class is: "<<var_base<<endl;
        }
};
class Derived : public Base{
     public:
        int var_derived;
        void display()
        {
            cout<<"Variable of base class is: "<<var_base<<endl;
            cout<<"Variable of derived class is: "<<var_derived<<endl;
        }
};

int main()
{
    Base b; // object of base class
    Derived d;//object of derived class
    // base class pointer pointed to derived class object
    // we can not access any properties of derived class
    Base *base_ptr = &d;
    base_ptr->var_base = 30;
    // base_ptr->display(); // here base class display function will be run
    // But by making base class function virtual display function of derived class will be run
    base_ptr->display();

    return 0;
}