#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int naturalSum(int n)
{
    cout<<n<<" ";
    // Base Case
    if(n==1)
        return 1;
    // Recursive Call
    int prevSum = naturalSum(n-1);
    // small Calculation
    int sum = n + prevSum;

    return sum;
}
int main()
{
    int n;
     cout<<"Enter n:"<<endl; cin >> n;
     int sum = naturalSum(n);
     cout<<endl;
     cout<<"Sum : "<<sum<<endl;
    return 0;
}