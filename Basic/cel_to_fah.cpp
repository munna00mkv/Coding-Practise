#include<iostream>
using namespace std;

int main()
{
    int c,f;
    cout<<"Enter Temprature in Farenheight:"<<endl;cin>>f;
    c = (5*(f-32))/9;
    cout<<"Temprature in Celsuis is: "<<c<<endl;
    return 0;
}