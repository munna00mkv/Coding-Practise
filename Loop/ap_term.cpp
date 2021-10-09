#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter How Many term you want to be print"<<endl;
    cin>>x;
    int n,count;
    n = 1;
    count = 0;
    while(count<=x)
    {
        int term = 3*n+2;
        if(term % 4 != 0)
        {
            cout<<term<<" ";
            count++;
        }
        n++;
    }
}