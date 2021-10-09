#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int k;
    float sum = 0.0;
    cout<<"Enter k: "; cin >> k;
    for(int i=0; i <= k; i++)
    {
        float ans = (float)1 / pow(2,i);
        sum += ans;
    }
    cout<<"Geometric sum: "<<sum<<endl;
    return 0;
}