#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter Any Number:"<<endl;cin>>n;
    i = 2;
    bool isPrime = true;
    while(i<=n/2)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
        i = i + 1;
    }
    if(isPrime)
        cout<<"Prime\n";
    else
        cout<<"Not Prime\n";
    return 0;
}