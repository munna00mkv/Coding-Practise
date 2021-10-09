#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int basic,allow;
    float hra,da,pf,total = 0;
    char grade;
    cout<<"Enter Basic Salary:\n";
    cin>>basic;
    cout<<"Enter Grade:\n";
    cin>>grade;
    hra = (basic * 20)/100.0;
    da = (basic * 50)/100.0;
    pf = (basic * 11)/100.0;
    if(grade == 'A')
    {
        allow = 1700;
    }
    else if(grade == 'B')
    {
        allow = 1500;
    }
    else{
        allow = 1300;
    }
    total = basic + hra + da + allow - pf;
    cout<<"Total Salry = "<<round(total)<<endl;
    return 0;
}