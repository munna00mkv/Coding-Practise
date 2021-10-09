#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int length(string str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    cout<<"String: "<<str<<endl;
    int len = length(str);
    cout<<"Length: "<<len;
    return 0;
}