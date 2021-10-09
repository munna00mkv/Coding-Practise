#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int countZero(int n)
{
    if (n == 0)
        return 1;
    int count = countZero(n / 10);
    if (n % 10 == 0)
    {
        count = count + 1;
        return count;
    }
    else
        return count;
}
int main()
{
    int t;
    cout << "Enter Number of Test Case: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter n: ";
        cin >> n;
        cout << "Number: " << n << endl;
        int ans = countZero(n);
        if (ans == 1)
        {
            cout << "Total Zero: " << ans;
        }
        else
        {
            cout << "Total Zero: " << ans - 1;
        }
    }

    return 0;
}