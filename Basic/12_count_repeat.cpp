#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter Two Number: " << endl;
    cin >> n1 >> n2;
    int count = 0, curr_elem;
    for (int i = n1; i <= n2; i++)
    {
        int rev = 0, r, temp;
        cout << "current element: " << i << endl;
        curr_elem = i;
        temp = curr_elem;
        while (temp != 0)
        {
            r = temp % 10;
            rev = rev * 10 + r;
            temp /= 10;
        }
        if (curr_elem == rev)
        {
            count++;
        }
    }
    cout << "Total element is: " << count << endl;
    return 0;
}