#include<iostream>
using namespace std;
int main()
{
    int n,c;
    cout<<"Enter Any Number:"<<endl;
    cin>>n;
    cout<<"Enter Your Choice 1. Sum and 2. Product"<<endl;
    cin>>c;
    int sum = 0, p = 1;
    for(int i=1; i<=n; i++)
    {
        sum+=i;
        p*=i;
    }
    if(c == 1)
    {
        cout<<"Sum = "<<sum<<endl;
    }
    else if(c == 2)
    {
        cout<<"Product = "<<p<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}