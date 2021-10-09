/*
Given two strings S1 and S2, find string is a subsequence of second
A subsequence is a sequence that can be derived from another sequence by 
deleting some element without changing the order ot the remaining elements
Example:- 
input:- str1 = "AXY", str2 = "ADXCPY"
output:- True

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;
    cout<<"Enter Bigger string"<<endl;
    cin >> str2;
    cout<<"Enter small string"<<endl;
    cin >> str1;
    int i  = 0; // for traverse bigger string
    int j = 0; // for traverse smaller string
    while(i < str2.length() && j < str1.length())
    {
        if(str1[j] == str2[i])
            j++;
        i++;
    }
    // if all string is traverse then check j is crossed length or not
    // if crossed then return true else return flase
    if(j == str1.length())
        cout<<"True"<<endl;
    else  
        cout<<"False"<<endl;
    return 0;
}