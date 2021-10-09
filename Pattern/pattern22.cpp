/* 
print:-  n = 5
         E
         DE
         CDE
         BCDE
         ABCDE
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
        char startChar = 'A' + n - i;
        j = 1;
        while(j <= i)
        {
            char ch  =startChar + j -1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}