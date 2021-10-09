/* 
print:-  n = 4
         ABCD
         BCDE
         CDEF
         DEFG
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
        char startChar = 'A' + i  - 1;
        j = 1;
        while(j <= n)
        {
            char ch = startChar + j - 1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}