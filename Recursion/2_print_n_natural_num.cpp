#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printNatural(int n)
{
    cout<<n<<" ";
    if (n == 1)
        return;
    printNatural(n-1);
}
int main()
{
    int n;
    cout<<"Enter Value of n: "<<endl;
    cin >> n;
    printNatural(n);
}