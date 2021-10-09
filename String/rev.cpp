#include<bits/stdc++.h>
using namespace std;
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
    
}
void reverseWholeStr(string &str)
{
    int len = str.length();
    int l = 0;
    int r = len-1;
    while(l <= r)
    {
        swap(str[l],str[r]);
        l++;
        r--;
    }
}
void reverseWord(string &str)
{
    int i = 0, j = 0;
    while(i<str.length())
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            int l = j, r = i-1;
            while(l <= r)
            {
                swap(str[l], str[r]);
                l++;
                r--;
            }
            j = i + 1;
        }
        i++;
    }
}
int main()
{
    string str = "munna kumar";
    reverseWholeStr(str);
    reverseWord(str);
    cout<<"String: "<<str<<endl;
    
    return 0;
}