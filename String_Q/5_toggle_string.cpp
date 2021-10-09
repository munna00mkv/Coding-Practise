#include<bits/stdc++.h>
using namespace std;
string toggle(string &str)
{
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    return str;
}
int main()
{
    string str;
    cout<<"Enter String: "<<endl;
    cin >> str;
    string ans = toggle(str);
    cout<<str<<endl;
    return 0;
}