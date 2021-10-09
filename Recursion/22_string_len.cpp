#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

int length(char str[])
{
    // Base Case
    if(str[0] == '\0')
        return 0;
    // Recursive Call
    int smallStringLen = length(str+1);
    // Small Calculation
    int len = smallStringLen + 1;
    return len;
}
int main()
{
    char str[100];
    cout<<"Enter String: ";
    cin >> str;
    int l = length(str);
    cout<<"Length: "<<l<<endl;

}