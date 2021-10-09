#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Student{
    protected:
        int roll_no;
    public:
        void setRoll(int);
        void getRoll(void);
};
void Student :: setRoll(int r)
{
    roll_no = r;
}
void Student :: getRoll()
{
    cout<<"Roll Number: "<<roll_no<<endl;
}
class Exam : public Student{
    protected:
        float math,physics;
    public:
        void setMarks(float,float);
        void getMarks(void);
};
void Exam :: setMarks(float m, float p)
{
    physics = p;
    math = m;
} 
void Exam :: getMarks()
{
    cout<<"Physics Marks: "<<physics<<endl;
    cout<<"Math Marks: "<<math<<endl;
}
class Result : public Exam{
    protected:
        double percantage;
    public:
        double calPer(float, float);
        void display()
        {
            getRoll();
            getMarks();
            percantage = calPer(physics,math);
            cout<<"Percenatge is : "<<percantage<<endl;
        }
};
double Result :: calPer(float phy, float ma)
{
    return ((phy+ma)/200)*100;
}
int main()
{
    Result munna,ravi;
    munna.setRoll(14);
    munna.setMarks(98.4, 99.8);
    ravi.setRoll(15);
    ravi.setMarks(87.9,89.9);
    cout<<"Munna Details: "<<endl;
    munna.display();
    cout<<"Ravi Details: "<<endl;
    ravi.display();
    return 0;
}