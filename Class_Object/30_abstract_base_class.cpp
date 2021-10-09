/* Abstract base class:- we can only inherit this class 
in abstract base class there must be a pure virtual function
pure virtual function is the function which must be override in each derived class
pure virtual function syntex:-
vitrual fun() = 0*/
#include <iostream>
#include <string>
using namespace std;
//Abstract Base class
class Cwh
{
protected:
    string name;
    float rating;

public:
    Cwh(string s, float r)
    {
        name = s;
        rating = r;
    }
    // making pure virtual function:- you must have override it in each derived class
    virtual void display()=0; // do nothing function-----> pure virtual function
};
// first derived class
class CwhVideo : public Cwh
{
protected:
    float length;

public:
    CwhVideo(string s, float r, float l) : Cwh(s, r)
    {
        length = l;
    }
    // it will be override function of base class
    void display()
    {
        cout << "Name is: " << name << endl
             << "Video Rating is: " << rating << endl
             << "Video length: " << length << endl;
    }
};
// second derived class
class CwhText : public Cwh
{
protected:
    int text_len;

public:
    CwhText(string s, float r, int len) : Cwh(s, r)
    {
        text_len = len;
    }
    void display()
    {
        cout << "Name is: " << name << endl
             << "Rating is: " << rating << endl
             << "Text length: " << text_len << endl;
    }
};
int main()
{
    // making 2 pointer of base class
    Cwh *ptr[2];
    CwhText tObj("Django", 4.5,5);
    CwhVideo vObj("Django",5.0,4.5);
    // First pointer is pointing derived class 1
    ptr[0] = &tObj;
    // Second pointer is pointing derived class 2
    ptr[1] = &vObj;
    // First derived class fucntion will run because base class display fun is virtual
    ptr[0]->display();
    // Second derived class fucntion will run because base class display fun is virtual
    ptr[1]->display();
    return 0;
}