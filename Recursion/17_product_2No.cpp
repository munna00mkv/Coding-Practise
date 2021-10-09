#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Approach 1:- (m-1)*n + n

// int prod(int m, int n)
// {
//     if(m == 0)
//         return 0;
//     int ans = prod(m-1,n);
//     return ans+n;
// }

// Approach 2:- (n-1)*m + m
int prod(int m, int n)
{
    if(n==0)
        return 0;
    int ans = prod(m,n-1);
    return ans+m;
}
int main()
{
    int m,n;
    cout<<"Enter m: ";
    cin >> m;
    cout<<"Enter n: ";
    cin >> n;
    int ans = prod(m,n);
    cout<<"Product: "<<ans;
    return 0;
}