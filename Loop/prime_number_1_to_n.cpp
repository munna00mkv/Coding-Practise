#include<iostream>
using namespace std;

int main()
{
    int n;
    int num;
    cout<<"Enter Any Number"<<endl;
    cin>>n;
    for(int i=1; i<=n ;i++)
    {
        num = i;
        bool isPrime = true;
        for(int j=2; j<num; j++)
        {
            if(num % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            cout<<num<<" ";

    }
    return 0;
}