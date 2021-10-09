#include<iostream>
#include<cstring>
using namespace std;
void printAllSubstring(char str[])
{
    int len = strlen(str)-1;
    for(int i=0; i<=len; i++) 
    {
        for(int j=i; j<=len; j++)
        {
            for(int k=i; k<=j; k++)
            {
                 cout<<str[k];
            }
           cout<<endl;
        }
        
    }
}
int main()
{
    char str[100];
    cout<<"Enter Your String"<<endl;
    cin >> str;
    cout<<"String : "<<str<<endl;
    printAllSubstring(str);
    return 0;
}