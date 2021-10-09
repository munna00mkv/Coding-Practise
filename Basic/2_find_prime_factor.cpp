#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n ";
    cin >> n;
    // check number is divisible by 2
    while(n%2 == 0)
    {
        cout<<2<<" ";
        n = n / 2;
    }

    // at this point number must be odd
    for(int i=3; i<=sqrt(n); i+=2)
    {
        if(n % i == 0)
        {
            cout<<i<<" ";
        }
        n = n / i;
    }

    // this case handle when n is prime and greater than 2
    if(n > 2)
    {
        cout<<n<<" ";
    }
    return 0;
}