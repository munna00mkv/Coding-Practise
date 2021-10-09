#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
    cout<<"Enter Last Range "; cin >> n;
    for(int i=1; i<=n; i++)
    {
    int num = i;
    int temp = num;
    int total_digit = (int) log10(num) + 1;
    // Find Power sum
    int sum = 0;
    while(temp > 0)
    {
        int lastDigit = temp % 10;
        sum += pow(lastDigit,total_digit);
        temp /= 10;
    }
    if(num == sum)
        cout<<num<<" ";
    }
    
    return 0;
}