#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    
    int smallop1 = fib(n-1);
    int smallop2 = fib(n-2);
    int op = smallop1 + smallop2;
    return op;
}
int main()
{
    int n;
    cout<<"Enter which fibonaaci number you want?"<<endl;
    cin >> n;
    cout<<fib(n)<<endl;
    return 0;
}