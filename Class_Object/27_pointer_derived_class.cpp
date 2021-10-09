/* Base class pointer can not access derived class properties
Note:- (1) Base class pointer pointed to base class object:- then it will be access all properties of base class
      (2) Base class pointer pointed to derived class object:- then it will not access properties of derived class
      (3) Derived class pointer pointed to derived class object:- it will access both base and derived class properties
      (4) Derived class pointer pointed to base class object:- Error, we can not do that
      */
#include<iostream>
using namespace std;
class Base{
    public:
        int var_base;
        void display()
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
    base_ptr->display(); // base class display function will run not dervied class 
    // base_ptr->var_derived; // Error, can not access derived class var

    // Derived class pointer pointed to derived class object
    Derived *derived_ptr = &d;
    derived_ptr->var_derived = 234;
    derived_ptr->display(); // Derived class display function willrun
    // We can not point derived class pointer to base class object
    // Derived *derived_ptr = &b;
    return 0;
}