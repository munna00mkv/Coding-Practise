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
    cout<<"Original Number = "<<num<<endl;
    cout<<"Reverse Number = "<<revNum<<endl;
    return 0;
}