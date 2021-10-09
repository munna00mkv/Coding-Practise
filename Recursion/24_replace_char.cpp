#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
void replaceCharX(char str[], char ch)
{
    // Base case
    if(str[0] == '\0')
        return;
    // Small calculation and Recusrion call
    // If our first Char is ch then first we will be work then recursion work
    if(str[0] == ch)
    {
        str[0] = 'x';
        replaceCharX(str,ch);
    }
     // if our first char is not ch then only recursion will work   
    else 
        replaceCharX(str+1, ch);
}
int main()
{
    char str[100];
    cout<<"Enter String: ";
    cin >> str;
    char ch;
    cout<<"Enter Char to Replace: ";
    cin >> ch;
    cout<<"String Before: "<<str<<endl;
    replaceCharX(str,ch);
    cout<<"String After: "<<str<<endl;
    return 0;
}