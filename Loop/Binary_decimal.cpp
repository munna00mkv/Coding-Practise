#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter A Number in Binary Format"<<endl;
    cin>>n;
    int pv,digit,temp,ans;
    temp = n;
    pv = 1;
    ans = 0;
    while(temp != 0)
    {
        digit = temp % 10;
        ans = ans + digit * pv;
        pv = pv * 2;
        temp = temp / 10;

    }
    cout<<"Decimal of "<<n<<" is "<<ans;
    return 0;
}