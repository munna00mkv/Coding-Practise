#include<iostream>
using namespace std;
int main()
{
    int p,r,t;
    float si = 0;
    cout<<"Enter Principle:\n";cin>>p;
    cout<<"Enter Rate:\n";cin>>r;
    cout<<"Enter Time(in Years):\n";cin>>t;
    si = (p*r*t)/100;
    cout<<"Simple interest = "<<si;
    return 0;
}