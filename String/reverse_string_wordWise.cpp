#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseWord(string str, int start, int end)
{
    while(start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
string reverseString(string str)
{
    str.insert(str.end(), ' ');
    int n = str.length();
    int j = 0; 
    for(int i=0; i<n; i++)
    {
        if(str[i] == ' ')
        {
        reverseWord(str,j,i-1);
        j = i + 1;
        }
    }
    str.pop_back();
    reverseWord(str,0,str.length()-1);
    return str;
}
int main()
{
    string str;
    cout<<"Enter Your String";
    cin >> str;
    cout<<"String Before Reverse : "<<str<<endl;
    string rev = reverseString(str);
    cout<<"String After Reverse : "<<rev<<endl;
    return 0;
}