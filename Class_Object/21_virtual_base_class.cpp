/*Virtual Base Class:- A method to resolve ambiguity
ex:- Suppose we have a base class A and it derive two class B and C now B,C derived a Class D
here Data Member of A is pass two times to D because it pass to B and C . D is derived through A
so there would be ambiguity, to resolve this ambiguity we make A as Virtual base class
it restrict to pass data member of A to D two times
ex 2- 
student -> Test
student -> Sports
Test -> Result
Sports -> Result
Here Student is Virtual base class
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Student{
    protected: // by making protected it is inheritable but not accessble 
        int roll_no; 
    public:
        void setRoll(int r)
        {
            roll_no = r;
        }
        void showRoll(void)
        {
            cout<<"Roll No: "<<roll_no<<endl;
        }
};
// inherit Student as Virtual Base Class
class Test : virtual public Student{
    protected:
        float math;
        float physics;
    public:
        void setMarks(float m1, float m2)
        {
            math = m1;
            physics = m2;
        }
        void showMarks(void)
        {
            cout<<"Math Marks: "<<math<<endl;
            cout<<"Physics Marks: "<<physics<<endl;
        }
};
class Sports : virtual public Student{
    protected:
        int score;
    public:
        void setScore(int s)
        {
            score = s;
        }
        void showScore(void)
        {
            cout<<"Physical Score: "<<score<<endl;
        }
};
class Result : public Test, public Sports{
    protected:
        int total;
    public:
        void showResult(void)
        {
            total = math + physics + score;
            showRoll(); // if we not make Student as Virtual base class then roll_no is ambiguas here
            showMarks();
            showScore();
            cout<<"Total = "<<total<<endl;
        }
}; 
int main()
{
    Result res;
    res.setRoll(44);
    res.setMarks(98.9, 89.87);
    res.setScore(78);
    res.showResult();
    return 0;
}