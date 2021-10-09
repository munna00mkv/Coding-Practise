#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter A Number"<<endl;
    cin>>n;
    int rev, r;
    rev = 0;
    while(n!=0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    cout<<"Reverse = "<<rev<<endl;
    
}