/* 
print:-  n = 4
         1
         23
         456
         78910
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
    int p = 1;
    while(i<=n)
    {
        
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