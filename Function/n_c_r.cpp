#include<iostream>
using namespace std;
int factorial(int n)
{
    int i,fact;
    i = 1;
    fact = 1;
    while(i<=n)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}
int main()
{
    int n,r;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter r"<<endl;
    cin>>r;
    int fact_n,fact_r,fact_n_r,ans;
    fact_n = factorial(n);
    fact_r = factorial(r);
    fact_n_r = factorial(n-r);
    ans = fact_n / (fact_r * fact_n_r);
    cout<<"Required Answer = "<<ans<<endl
    ;

    return 0;
}