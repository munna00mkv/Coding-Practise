#include<iostream>
using namespace std;
void printAllPrefix(char str[])
{
    for(int i=0; str[i] != '\0'; i++) // increment ending value
    {
        for(int j=0; j<=i; j++)
        {
            cout<<str[j];
        }
        cout<<endl;
    }
}
int main()
{
    char str[100];
    cout<<"Enter Your String"<<endl;
    cin >> str;
    cout<<"String : "<<str<<endl;
    printAllPrefix(str);
    return 0;
}