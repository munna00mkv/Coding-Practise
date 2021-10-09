/*Constructor:- 
-- it is a special method that is used to initialize the data member of the class 
at the time of object creation
-- it is automatically invoked at the object creation
-- it has same name as class name and it can't return any value
-- two types:- 1. Default Constructor 2. Parameterize Constructor*/

// 1. Default Constructor

// #include<iostream>
// using namespace std;
// class Employee{
//     int id;
//     string name;
//     public:
//     // Default constructor :- it takes no argument
//         Employee()
//         {
//             id = 2;
//             name = "Munna";
//         }
//         void display(void)
//         {
//             cout<<"id = "<<id<<" Name = "<<name<<endl;
//         }
// };
// int main()
// {
//     Employee emp; // at this time constructor is automatically invoked(called)
//     emp.display();
//     return 0;
// }

// Parameterized Constructor:- it takes argument

#include<iostream>
using namespace std;
class Employee{
    private:
        int id;
        string name;
        double salary;
    public:
        // Declaring Parameterized Constructor we can also define here
        Employee(int i, string n, double s);

        // Member Function that display all Value
        void display(void)
        {
            cout<<"Id: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};
// Define Constructor
Employee :: Employee(int i, string n, double s)
{
    id = i;
    name = n;
    salary = s;
}

int main()
{
    // We can call our parametrize constructor in two way
    // 1. implict call
    // Employee emp(12,"Munna", 123889.56);
    // emp.display();
    // 2. Explict Call
    Employee emp = Employee(12,"Rahul",1234.4);
    emp.display();
    return 0;
}