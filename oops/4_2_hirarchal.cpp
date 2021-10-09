#include <bits/stdc++.h>
using namespace std;
class Employee
{
protected:
    string name;
    float salary;

public:
    void setData(string n, float s)
    {
        name = n;
        salary = s;
    }
};
class HR : public Employee
{
public:
    void getData()
    {
        cout << "Name: " << name << " Salary: " << salary << endl;
    }
};
class Manager : public Employee
{
public:
    void getData()
    {
        cout << "Name: " << name << " Salary: " << salary << endl;
    }
};
class Developer : public Employee
{
public:
    void getData()
    {
        cout << "Name: " << name << " Salary: " << salary << endl;
    }
};
int main()
{
    HR h;
    string name;
    float salary;
    cout << "Enter Name: " << endl;
    getline(cin, name);
    cout << "Enter Salary: " << endl;
    cin >> salary;
    h.setData(name, salary);
    h.getData();
    Manager m;
    cin.ignore();
    cout << "Enter Name: " << endl;
    getline(cin, name);
    cout << "Enter Salary: " << endl;
    cin >> salary;
    m.setData(name, salary);
    m.getData();
    Developer d;
    cin.ignore();
    cout<<"Enter Name: "<<endl;
    getline(cin,name);
    cout<<"Enter Salary: "<<endl;
    cin >> salary;
    d.setData(name,salary);
    d.getData();
    return 0;
}