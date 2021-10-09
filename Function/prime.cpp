#include<iostream>
using namespace std;
bool isPrime(int n)
{
    int i;
    i = 2;
    while(i<=n-1)
    {
       if(n % i == 0)
       {
           return false;
       }
       i++;
    }
  return true;
}
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    bool ans = isPrime(n);
    cout<<ans;

    return 0;
}