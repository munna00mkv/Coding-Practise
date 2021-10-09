#include<iostream>
using namespace std;
void print(int * p)
{
    cout<<*p<<endl;
}
void incrementPointer(int * p)
{
    p = p + 1;
    cout<<"Poniter of fun "<<p<<endl;
}
void increment(int * p)
{
    (*p)++;
}
int main()
{
    int i = 10;
    int * p = &i;
    // print(p);
    // cout<<"Main "<<p<<endl;
    // incrementPointer(p);
    // cout<<"Main "<<p<<endl;

    cout<<"before calling fun: "<<*p<<endl;
    increment(p);
    cout<<"After calling fun: "<<*p<<endl;

    return 0;
}