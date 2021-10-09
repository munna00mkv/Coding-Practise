#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    cout<<"String: "<<str<<endl;
    removeX(str);
    cout<<"Now String: "<<str;
   

    return 0;
}