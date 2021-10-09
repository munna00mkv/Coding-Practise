#include<bits/stdc++.h>
using namespace std;
// reverse whole string
void reverseWholeString(string &str, int start, int end)
{
    while(start <= end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
string reverseEachWord(string &str)
{
    // reverse whole string first
    int len = str.length();
    reverseWholeString(str,0,len-1);
    str.push_back(' '); // add a space at end
    int j=0; // keep track of each word
    for(int i=0; i<len; i++)
    {
        if(str[i] == ' ')
        {
            reverseWholeString(str,j,i-1);
            j = i+1; // j will point next word
        }
    }
    str.pop_back(); // remove last char
    return str;

}
int main()
{
    string str;
    cout<<"Enter String: "<<endl;
    getline(cin,str);
    cout<<reverseEachWord(str);
    // cout<<str<<endl;
    return 0;
}