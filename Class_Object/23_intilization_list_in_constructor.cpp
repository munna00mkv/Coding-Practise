/*
syntex of initialization list in constructor:-
Basically it is used to intilize the value of variable
constructor (argument-list) : initilization-section
{
    assignment + other code
}

ex:-
class Test{
    int a;
    int b;
    public:
        Test(int i,int j) : a(i),b(j){constructor body}
}
*/
#include<iostream>
using namespace std;
class Test{
    int a;
    int b;
    public:
    // we can initialize our value like this
        // Test(int i, int j) : a(i),b(j)
        // Test(int i, int j) : a(i),b(i+j)
        // Test(int i, int j) : a(i),b(3*j)
        // Test(int i, int j) : a(i),b(a+j)
        // Test(int i, int j) : b(j),a(b+j) // it will give garbage value of a because a is declare first
        Test(int i,int j):a(i)
        {
            b = j;
            cout<<"Constructor invoked"<<endl;
            cout<<"a is "<<a<<" b is "<<b<<endl;
        }
};
int main()
{
    Test t(2,3);

    return 0;
}