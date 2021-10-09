/*static member function:
-- it access only all static variable or all static function 
-- it run by using class name and scope resolution operator
-- Write a program that count each employee*/
#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count; // By default its value is 0 , Here we can't change its value
    public:
        void setData()
        {
            cout<<"Enter id: "<<endl;
            cin >> id;
            count++;
        }
        void getData()
        {
            cout<<"id is "<<id<<endl;
        }
        // Function that has access only static variable
        static void getCount()
        {
            // cout<<id;// Can not be access normal variable
            cout<<"Employee no: "<<count<<endl;
        }
};
int Employee :: count; // static variable declaration
int main()
{
    Employee munna,ravi,shivam;
    // Accessing static member function :- Class_name :: function name;
    // First employee
    munna.setData();
    munna.getData();
    Employee :: getCount();
    // Second emploee

    munna.setData();
    munna.getData();
    Employee :: getCount();
    //third employee
    munna.setData();
    munna.getData();
    Employee :: getCount();

    return 0;
}