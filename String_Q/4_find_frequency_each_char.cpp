#include<bits/stdc++.h>
using namespace std;
void findFreq(string str)
{
    int len = str.length();
    bool arr[len] = {false}; // for keep tarck of element
    for(int i=0; i<len; i++)
    {
        int count = 1;
        if(arr[i] != true)
        {
        for(int j=i+1; j<len; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                arr[j] = true;
            }
        }
        if(str[i] != ' ')
            cout<<str[i] <<" = "<<count<<endl;
        }
    }
}
// using map
void freq(string str)
{
    map<char,int> m;
    for(int i=0; i<str.length(); i++)
    {
        m[str[i]]++;
    }
    for(auto e : m)
    {
        cout<<e.first<<" "<<e.second<<endl;
    }
}
int main()
{
    string str;
    cout<<"Enter String"<<endl;
    getline(cin , str);
    cout<<"Frequency is: "<<endl;
    // findFreq(str);
    freq(str);
    return 0;
}