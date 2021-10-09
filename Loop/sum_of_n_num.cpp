#include<iostream>
using namespace std;

int main()
{
    int i,n,sum;
    cout<<"Enter A Number:\n";cin>>n;
    i = 1;
    sum = 0;
    while(i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}