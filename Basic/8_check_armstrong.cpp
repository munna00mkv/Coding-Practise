#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int calDigit(int num)
{
    int count = 0;
    while(num > 0)
    {
        count++;
        num /= 10;
    }
    return count;
}
int main()
{
    int num;
    cout<<"Enter Num: "; cin >> num;
    int temp = num;
    int total_digit = calDigit(num);
    // Find Power sum
    int sum = 0;
    while(temp > 0)
    {
        int lastDigit = temp % 10;
        sum += pow(lastDigit,total_digit);
        temp /= 10;
    }
    if(sum == num)
    {
        cout<<num<<" is Armstrong"<<endl;
    }
    else{
        cout<<num<<" is not Armstrong"<<endl;
    }
    return 0;
}