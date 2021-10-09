// write a program to print all substring of a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str("abcd");
    cout<<"Your string: "<<str<<endl;
    cout<<"All possible substring is: "<<endl;
    for(int i=0; i<str.length(); i++)
    {
        string str1 ="";
        str1 =  str1 + str[i];
        cout<<str1<<endl;
        for(int j=i+1; j<str.length(); j++)
        {
            str1 = str1 + str[j];
            cout<<str1<<endl;
        }
    }
    return 0;
}