/*
n = 4
          1
         121
        12321
       1234321
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
            cout<<j;
            j++;
        }
        j = i - 1;
        while(j>=1)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}