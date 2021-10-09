/*Write a program that display 5 student makrs and name*/
#include<iostream>
using namespace std;
class Student{
string name;
int mark;
static int count; // track count of each student
public:
    void setData(){
        cout<<"Enter Name of "<<count<<" student"<<endl;
        cin >> name;
        cout<<"Enter Marks of "<<count<<" student"<<endl;
        cin >> mark;
        count++;
    }
    void getData()
    {
        cout<<"Name is "<<name<<" and Marks: "<<mark<<endl;
    }
};
int Student :: count = 1;
int main()
{
    // first approach call member function for each object
    // Student munna,ravi,shivam,dipak,rahul; 
    // Second approach:- use array of object
    Student s[5]; // Array of 5 object
    // Calling member function for each object
    for(int i=0; i<5; i++)
    {
        s[i].setData();
        s[i].getData();
    }
    return 0;
}