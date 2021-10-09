#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int powerNum(int n, int p)
{
    if(p == 0)
        return 1;
    int prevPower = pow(n,p-1);
    int pow = n * prevPower;
    return pow;
}
int main()
{
    int n,p;
    cout<<"Enter n: "; cin >> n;
    cout<<"Enter p: "; cin >> p;
    int pow = powerNum(n,p);
    cout<<pow<<endl;
    return 0;
}