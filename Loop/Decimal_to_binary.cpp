#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Any Number"<<endl;
    cin>>n;
    int temp,ans,r,pv;
    temp = n;
    ans = 0;
    pv = 1;
    while(temp != 0)
    {
        r = temp % 2;
        ans = ans + r*pv;
        pv = pv * 10;
        temp = temp / 2;
    }
    cout<<"Binary of "<<n<<" is "<<ans<<endl;
    return 0;
}