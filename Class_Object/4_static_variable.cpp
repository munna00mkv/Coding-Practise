/* Static Variable: -
-- these variable takes memory only one and update value accordingly
-- By default its value is 0 but we can change it
-- it remains in memory till program execution. but normal variable destroy after out of scope
Ex 1 - Write a program that count each employ
*/
#include<iostream>
using namespace std;
class Employee{
    int id;
    // int count = 0; // Normal Varibale 
    /*in case of normal variable each object has its own count that is 0 intially
    whenever we call our function through the object count is 0 each time*/

    // Using static variable to solve this problem
    static int count; // By default its value is 0 , Here we can't change its value
    /*in case of this variable count is share with all object i.e count is same for all the object*/
    public:
        void setData()
        {
            cout<<"Enter id: "<<endl;
            cin >> id;
            count++; // update count each time
        }
        void getData()
        {
            cout<<"id is "<<id<<" and it is Emploee "<<count<<endl;
        }
};
int Employee :: count; // here we can reinitiakize its value, static variable is define outside the class
int main()
{
    Employee munna,ravi,shivam;
    // First Emploee
    munna.setData();
    munna.getData();
    // Second emploee
    munna.setData();
    munna.getData();
    //third employee
    munna.setData();
    munna.getData();

    return 0;
}