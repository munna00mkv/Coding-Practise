#include<iostream>
using namespace std;

int main()
{
    int x,n;
    cout<<"Enter Base:"<<endl;
    cin>>x;
    cout<<"Enter Exponent:"<<endl;
    cin>>n;
    int i = 1, p = 1;
    while(i<=n)
    {
        p = p * x;
        i++;
    }
    cout<<"Power is "<<p<<endl;

    return 0;
}