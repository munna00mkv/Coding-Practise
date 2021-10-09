/* 
print:-  n = 4
         1
         23
         345
         4567
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of Row:"<<endl;
    cin>>n;
    int i,j;
    i = 1;
    while(i<=n)
    {
        int p = i;
        j = 1;
        while(j<=i)
        {
            cout<<p;
            p++;
            j++;
        }
        cout<<endl;
        i++;
    }
}