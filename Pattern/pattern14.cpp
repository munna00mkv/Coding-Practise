/* 
print:-  n = 4
         4321
         4321
         4321
         4321
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
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}