#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of Row:\n";
    cin>>n;
    int i = 1, j;
    while(i<=n)
    {
       j = 1;
       while(j<=i)
       {
           cout<<j;
           j++;
       }
       cout<<endl;
        i++;
    }
}