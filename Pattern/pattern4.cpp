#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k;
    cout<<"Enter n"<<endl;
    cin>>n;
    i = 1;
    
    while(i <= n)
    {
        k = 1;
        while(k <= n-i)
        {
            cout<<" ";
            k++;
        }
        j = 1;
        while(j <= 2*i-1)
        {
            cout<<"*";
            j++; 
        }
        cout<<endl;
        i++;
    }
    return 0;
}