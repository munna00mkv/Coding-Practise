#include<bits/stdc++.h>
using namespace std;
class Human{
    protected:
	string name;
	int age;
    public:
	Human(){}
	Human(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
};
class Employee : public Human{
	protected:
	    int id;
	public:
	    Employee(){}
	    Employee(string name, int age, int id) : Human(name,age)
		{
			this->id = id;
		}

};
class Student : public Employee{
	protected:
	    int roll_no;
	public:
        Student(){};
	    Student(string name, int age, int id, int roll_no) : Employee(name,age,id)
	    {
  		this->roll_no = roll_no;
            }	
	   void displayDetails()
	   {
		cout<<"Name: " << name<<" Age " <<age<<" Roll no: " <<roll_no<<" ID: " <<id<<endl;
	   }	

};
int main()
{
Student s("Munna",22,12345,12);
s.displayDetails();
return 0;
}