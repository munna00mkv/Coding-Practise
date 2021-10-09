/*Inheritance:-
def- it provide feature of reusability in c++, by using this we can inherit properties of one class into another
   - the class from which inherit properties is called Base class
   - the new class which is inherited is called Derived class 
syntex:-  class DerivedClass_name : Visibility_mode BaseClass_name
- We can not inherit private member of base class
- visibility mode decide that inherited member is either private or public for derived class
- By default visibility mode is private
- public(visibility-mode):- public member of base class become public member for derived class
- private(visibility-mode):- public member of base class become private member for derived class*/
// Example:- 
#include<iostream>
using namespace std;
class Employee{
    public:
        int emp_id;
        float salary;
        Employee(){}
        Employee(int id, float s)
        {
            emp_id = id;
            salary = s;
        }
        void show1(void)
        {
            cout<<"id is "<<emp_id<<endl;
            cout<<"Salary is "<<salary<<endl;
        }
};
// whenever a derived class created it search a default constructor of base class
class Programmer : public Employee{
    string language;
    public:
    Programmer(string l){
        language = l;
        emp_id= 123;
        salary = 234566.44;
    }
    void show2()
    {
        cout<<"Language known is: "<<language<<endl;
    }
} ;

int main()
{
    // object of base class
    // Employee emp1(1,23456.45);
    // emp1.show1();
    // object of derived class
    Programmer p1("java");
    p1.show1();
    p1.show2();
}