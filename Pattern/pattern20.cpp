/* 
print:-  n = 4
         A
         BB
         CCC
         DDDD
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
        char startChar = 'A' + i - 1;
        j = 1;
        while(j <= i)
        {
            cout<<startChar;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}