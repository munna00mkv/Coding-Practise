// input:- i am good
// output:- good am i
// logic:- 1. reverse whole string 2. then reverse each word
#include<iostream>
#include<string>
using namespace std;

void swap(char &a, char &b)
{
    char temp = a;
        a = b;
        b = temp;
}
void reverseWholeString(string &str)
{
    int len = str.length();
    int i = 0;
    while(i < len/2)
    {
        swap(str[i],str[len-1-i]);
        i++;
    }
}
void reverseEachWord(string &str)
{
    str.push_back(' '); // Add a space at end
    int len = str.length();
    int start,end,j;
    j = 0; // intially j point at first char of first word
    for(int i=0; i<len; i++)
    {
        // if space or null found then reverse previous word
        if(str[i] == ' ' || str[i] == '\0')
        {
            for(start = j,end = i-1; start <= end; start++,end--)
            {
                swap(str[start],str[end]);
            }
            j = i+1; // now j is pointing to first char of next word...
        }
    }
}
int main()
{
    string str;
    cout<<"Enter string: "<<endl;
    getline(cin,str);
    cout<<"string before reverse: "<<str<<endl;
    reverseWholeString(str);
    cout<<"string after whole string reverse: "<<str<<endl;
    reverseEachWord(str);
    str.pop_back(); // remove space that add in last
    cout<<"String after Reverse: "<<str<<endl;
    return 0;
}