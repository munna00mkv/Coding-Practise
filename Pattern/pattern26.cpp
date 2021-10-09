// Diamond pattern for odd number of Row
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Odd Row"<<endl;
    cin>>n;
    int n1,n2;
    n1 = (n+1)/2;
    n2 = n1 - 1;
    int i = 1;
    while(i<=n1)
    {
        int k = 1;
        while(k<=n1-i)
        {
            cout<<" ";
            k++;
        }
        int j = 1;
        while(j<=2*i-1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    int i1 = n2;
    while(i1>=1)
    {
        int k = 1;
        while(k<=n2-i1+1)
        {
            cout<<" ";
            k++;
        }
        int j = 1;
        while(j<=2*i1-1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i1--;
    }
    return 0;
}