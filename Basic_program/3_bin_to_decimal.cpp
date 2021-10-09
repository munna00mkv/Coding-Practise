#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int sum = 0;
    int n = 0;
    while(num != 0)
    {
        int r = num % 10;
        sum += (r * pow(2,n));
        n++;
        num = num /10;
    }
    cout<<sum;
    

    return 0;
}