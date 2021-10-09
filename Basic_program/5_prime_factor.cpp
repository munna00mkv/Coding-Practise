#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    // print all 2s
    while(num % 2 == 0)
    {
        cout<<2<<" ";
        num = num /2;
    }
    // At this point num become odd so check prime(3 to sqrt(num))
    for(int i=3; i<=sqrt(num); i = i + 2)
    {
        while(num % i == 0)
        {
            cout<<i<<" ";
            num = num / i;
        }
    }
    // if num > 2 and it is prime number then print num
    if(num > 2)
        cout<<num<<" ";
    return 0;
}