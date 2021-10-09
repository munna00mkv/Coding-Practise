#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of Row:\n";
    cin>>n;
    int i = 1, j;
    int val = 1;
    while(i<=n)
    {
       j = 1;
       while(j<=i)
       {
           cout<<val<<" ";
           val++;
           j++;
       }
       cout<<endl;
        i++;
    }
}