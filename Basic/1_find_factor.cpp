#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n ";
    cin >> n;
 // Apporach 1:- Naive solution or Brute-Force technique... Time Complexity:- O(n) 
    // int i = 1;
    // while(i <= n)
    // {
    //     if(n % i == 0)
    //         cout<<i<<" ";
    //     i++;
    // }

// Approach 2:- pair-up divisior... Time complexity: - O(sqrt(n))

    // int i = 1;
    // while(i <= sqrt(n))
    // {
    //     if(n % i == 0)
    //     {
    //         // if divisors are equal then take only one
    //         if(n/i == i)
    //             cout<<i<<" ";
    //         else
    //             cout<<i<<" "<<n/i<<" ";
    //     }
    //     i++;
    // }

    // print approach 2 in sorted order

    // First print i
    for(int i=1; i*i<n; i++)
    {
        if(n % i == 0)
            cout<<i<<" ";
    }
    // second print n/i
    for(int i=sqrt(n); i >= 1; i--)
    {
        if(n % i == 0)
        {
            cout<<n/i<<" ";
        }
    }

    return 0;
}