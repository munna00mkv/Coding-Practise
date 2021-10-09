/*
Write a program that remove char from first string that is present in second string
str1 = geeksforgeeks
str2 = mask
res = geeforgee
*/
#include<bits/stdc++.h>
#define ASCII_CHAR 256
using namespace std;
// return count array of second string
int *getCount(string str2)
{
    // array that store frequency of each char in str2
    int *count = new int[ASCII_CHAR];
    for(int i=0; i<str2.length(); i++)
    {
        count[str2[i]]++;
    }
    return count;
}
// return resultant string 
string removeChar(string str1, string str2)
{
    // getting count array
    int *count = getCount(str2);
    // string for resultant string
    string res;
    // traverse str1 and check present in str2 or not if not then push into res str
    for(int i=0; i<str1.length(); i++)
    {
        if(count[str1[i]] == 0)
        {
            res.push_back(str1[i]);
        }
    }
    return res;
}
int main()
{
    string str1,str2;
    cout<<"Enter Two String: "<<endl;
    cin >> str1 >> str2;
    string ans = removeChar(str1,str2);
    cout<<"String: "<<ans;
    return 0;
}