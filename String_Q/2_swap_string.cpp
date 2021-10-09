// program to swap two string
#include<bits/stdc++.h>
using namespace std;
void swap(string *a, string *b)
{
    string temp = *a;
        *a = *b;
        *b = temp;
}
int main()
{
    string str1, str2;
    cout<<"Enter Two String:"<<endl;
    getline(cin,str1);
    getline(cin,str2);
    swap(&str1,&str2);
    cout<<"String 1: "<<str1<<endl;
    cout<<"String 2: "<<str2<<endl;
    return 0;
}