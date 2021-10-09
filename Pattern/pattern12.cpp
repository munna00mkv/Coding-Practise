/* 
print:-  n = 4
         1111
         2222
         3333
         4444
*/
#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter Number of Row:"<<endl;
    cin>>n;
    i = 1;
    while(i <= n)
    {
        j = 1;
        while(j <= n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}