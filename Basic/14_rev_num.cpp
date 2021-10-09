#include <bits/stdc++.h>
using namespace std;
int sumDigit(int num)
{
    int sum = 0;
    while (num != 0)
    {
        int r = num % 10;
        sum += r;
        num /= 10;
    }
    return sum;
}
int main()
{
    long long int num;
    cout << "Enter a Number:" << endl;
    cin >> num;
    if (num == 0)
    {
        cout << "Palidrome" << endl;
    }
    else
    {
        long long int temp = num;
        long long int rev = 0;
        while (temp != 0)
        {
            int r = temp % 10;
            rev = rev * 10 + r;
            temp = temp / 10;
        }
        cout << "Original Number: " << num << endl;
        cout << "Reverse Number: " << rev << endl;
        if (rev == num)
        {
            cout << "Palidrome" << endl;
        }
        else
        {
            cout << "Not Palidrome" << endl;
        }
    }
    cout << "Sum : " << sumDigit(num) << endl;
    return 0;
}