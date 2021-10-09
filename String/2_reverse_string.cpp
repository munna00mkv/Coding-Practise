#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
// Reverse String CharcterWise
string reverseString(string str)
{
    int len = str.length();
    int i = 0;
    while(i != len/2)
    {
        char temp;
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
        i++;
    }
    return str;
}
int main()
{
    string str;
    cout<<"Enter A String: ";
    getline(cin,str);
    cout<<"String: "<<str<<endl;
    string new_str = reverseString(str);
    cout<<"New String: "<<new_str;

    return 0;
}