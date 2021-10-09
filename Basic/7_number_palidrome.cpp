#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter A Number: "; cin >> num;
    int revNum  = 0;
    int temp = num;
    while(temp != 0)
    {
        int digit = temp % 10;
        revNum = revNum * 10 + digit;
        temp /= 10;
    }
    if(num == revNum)
    {
        cout<<num<<" is Palidrome"<<endl;
    }
    else 
        cout<<num<<" is Not Palidrome"<<endl;
    return 0;
}