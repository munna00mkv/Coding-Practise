#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Any Number"<<endl;
    cin>>n;
    int i = 1;
    int sq = 1;
    while(sq <= n)
    {
        i++;
        sq = i * i; 
    }
    cout<<"Square Root of "<<n<<" is "<<i-1<<endl;
    return 0;
}