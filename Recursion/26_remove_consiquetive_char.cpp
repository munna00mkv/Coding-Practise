#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
void removeDuplicates(char str[])
{
    // Base Case
    if(str[0] == '\0')
        return;
    // Recursive Call
    removeDuplicates(str+1);
    // Small Calculation
    if(str[0] == str[1])
    {
        // Shifting
        int i = 1;
        while(str[i] != '\0')
        {
            str[i-1] = str[i];
            i++;
        }
        str[i-1] = str[i];
    }
    else{
        return;
    }
}
int main()
{
    char str[100];
    cout<<"Enter String: ";
    cin >> str;
    cout<<"Before: "<<str<<endl;
    removeDuplicates(str);
    cout<<"After: "<<str<<endl;
    return 0;

}
