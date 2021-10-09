/* 
print:-    *
          **
         ***
        ****
*/
#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k;
    cout<<"Enter Number of Row:"<<endl;
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
        while(j <= i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}