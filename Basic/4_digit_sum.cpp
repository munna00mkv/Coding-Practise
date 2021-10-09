#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int digitSum(int n)
{
    int sum = 0;
    while(n != 0)
    {
        int last_digit = n % 10;
        sum += last_digit;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter n: "; cin >> n;
    int sum = digitSum(n);
    cout<<"Sum: "<<sum<<endl;
    return 0;
}