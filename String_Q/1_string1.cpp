// program to input and print 3 string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number: "<<endl;
    cin >> n;
    cin.ignore();
    string str;
    cout<<"Enter String:"<<endl;
    for(int i=0; i<n; i++)
    {
        getline(cin,str);
        cout<<str<<endl;
    }
    return 0;
}