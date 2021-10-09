#include<bits/stdc++.h>
using namespace std;
// O(n^2)
char* removeDuplicate(char str[],int len)
{
    int index = 0; // for modified string
    // Resultant string
    // string res="";
    // Traverse through all charcters
    for(int i=0; i<len; i++)
    {
        int j;
        // check if str[i] is present before it
        for(j=0; j<i; j++)
        {
            if(str[j] == str[i])
                break;
        }

        // if not present then add to it into resultant string
        if(j==i)
        {
            // res += str[i];
            str[index++] = str[i];
        }
    }
    // cout<<res;
    return str;
}
// void removeDuplicate(string str)
// {
//     // using set:- O(nlogn)
//     set<char> s;
//     for(int i=0; i<str.length(); i++)
//     {
//         s.insert(str[i]);
//     }
//     for(auto elem : s)
//     {
//         cout<<elem;
//     }
// }
// O(n)
char* usingMap(char str[], int n)
{
    unordered_map<char,int> m;
    int index = 0;
    for(int i=0; i<n; i++)
    {
        if(m[str[i]] == 0)
        {
            str[index++] = str[i];
            m[str[i]]++;
        }
    }
    return str;
}
int main()
{
    // string 
    string str;
    // string- using charcter array
    char str2[] = "geeksforgeek";
    cout<<"Input String: "<<endl;
    getline(cin,str);
    // removeDuplicate(str);
    int n = sizeof(str2)/sizeof(str2[0]);
    // cout<<removeDuplicate(str2,n);
    cout<<usingMap(str2,n);
    return 0;
}