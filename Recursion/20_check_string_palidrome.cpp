#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
bool helper(string str, int start, int end)
{
    if(start == end)
        return true;
    if(str[start] != str[end])
        return false;
    
    return helper(str,start+1, end-1);
    
}
bool checkPalidrome(string str)
{
   int n = str.length();
   if(n == 1)
        return true;
    
    return helper(str,0,n-1);
    
}

int main()
{
    string str;
    cout<<"Enter A String: ";
    getline(cin,str);
    cout<<"String: "<<str<<endl;
    bool ans = checkPalidrome(str);
    if(ans)
        cout<<str<<" is Palidrome";
    else 
        cout<<str<<" is not palidrome";
    return 0;
}