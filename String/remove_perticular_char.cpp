#include<iostream>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter String:"<<endl;
    cin >> str;
    char x;
    cout<<"Enter Any Char: "<<endl;
    cin >> x;
    cout<<"String Before Removel: "<<str<<endl;
    char last_char = str[0];
    int j = 0;
    for(int i= 0; str[i] != '\0'; i++)
    {
        if(str[i] != x)
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; // put null to terminate new string
    cout<<"String After Removel: "<<str<<endl;
    return 0;
}