#include<bits/stdc++.h>
#include<iostream>
using namespace std;

float geometricSum(int k)
{
    // Base Case
    if(k == 0)
        return 1;
    // Recursive Call
    float sum = geometricSum(k-1);
    // Small Calculation
    float ans = float(1)/pow(2,k);
    sum += ans;
    return sum;
    
}
int main()
{
    int k;
    cout<<"Enter k: "; cin >> k;
    float ans = geometricSum(k);
    cout<<"Sum : "<<ans;
    return 0;
}