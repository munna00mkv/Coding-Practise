#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int digitSum(int n)
{
    // Base Case: when n<=9 then sum is that number
    if(n <= 9)
        return n;
    // Recursion Call
    int prev_digit_sum = digitSum(n/10);
    // small Calculation
    int last_digit = n % 10;
    int sum = prev_digit_sum + last_digit;
    return sum;

}
int main()
{
    int n;
    cout<<"Enter n: "; cin >> n;
    cout<<"Number: "<<n<<endl;
    int sum = digitSum(n);
    cout<<"Sum: "<<sum<<endl;
    return 0;
}