#include<iostream>
#include<string>
using namespace std;
int * multiply(string str, int x)
{
    int len = str.length();
    int *arr = new int[len];
    int j = 0,carry = 0;
    for(int i=len-1; i>=0; i--)
    {
        arr[j] = str[i] - '0';
        j++;
    }
    for(int i=0; i<len; i++)
    {
        int prod = arr[i] * x + carry;
        arr[i] = prod % 10;
        carry = prod / 10;
    }
    while(carry)
    {
        arr[len] = carry % 10;
        carry = carry / 10;
        len++;
    }
    return arr;
    
}
int main()
{
    string str;
    int x;
    cout<<"Enter First Number: "; cin >>str;
    cout<<"Enter Second Number: "; cin >> x;
    int *arr = multiply(str,x);
    for(int i=str.length(); i>=0; i--)
    {
        cout<<arr[i];
    }
    return 0;
}