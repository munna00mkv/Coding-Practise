#include<bits/stdc++.h>
#define ASCII_CHAR 256
using namespace std;
// using hashing O(n)
void printDuplicate(string str)
{
    int count[ASCII_CHAR] = {0};
    for(int i=0; i<str.length(); i++)
    {
        count[str[i]]++;
    }
    for(int i=0; i<ASCII_CHAR; i++)
    {
        if(count[i] > 1)
        {
            char c = i;
            cout<<c<<endl;
        }
    }
}
/*
if str = aaaaaaaaaaaa
then in case of hashing only one block of array is in used rest 255 byte size os wasted
so to remove this problem we use map
*/
void usingMap(string str)
{
    unordered_map<char,int> count;
    for(int i=0; i<str.length();i++)
    {
        count[str[i]]++;
    }
    for(auto elem : count)
    {
        if(elem.second > 1)
        {
            cout<<elem.first<<endl;
        }
    }
}
int main()
{
    string str;
    cout<<"Enter string: "<<endl;
    getline(cin,str);
    // printDuplicate(str);
    usingMap(str);
    return 0;
}