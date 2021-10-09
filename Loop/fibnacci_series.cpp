#include<iostream>
using namespace std;

int main()
{
    int a,b,c,n;
    cout<<"Enter A Number:\n";cin>>n;
    a = 0;
    b = 1;
    while(a<=n)
    {
        cout<<a<<" ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}