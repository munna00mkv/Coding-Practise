#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
bool checkPalidrome(string str)
{
    bool isPalidrome = true;
    int len = str.length();
    int i = 0;
    while(i != len/2)
    {
        if(str[i] != str[len-1-i])
        {
            isPalidrome = false;
            break;
        }
        i++;
    }
    return isPalidrome;

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