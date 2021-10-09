#include<iostream>
using namespace std;
int main()
{
    int n;
    int even_sum = 0, odd_sum  = 0;
    cout<<"Enter Any Number"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i % 2 == 0)
        {
            even_sum += i;
        }
        else{
            odd_sum += i;
        }
        // cout<<"Even Sum = "<<even_sum<<" Odd Sum is = "<<odd_sum<<endl;
    }
    cout<<"Even Sum = "<<even_sum<<" Odd Sum is = "<<odd_sum<<endl;
    return 0;
}