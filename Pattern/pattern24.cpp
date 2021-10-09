/*
n = 4
          *
         ***
        *****
       *******
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Row:"<<endl;
    cin>>n;
    int i,j,k;
    i = 1;
    while(i<=n)
    {
        k = 1;
        while(k<=n-i)
        {
            cout<<" ";
            k++;
        }
        j = 1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        j = 1;
        while(j<=i-1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}