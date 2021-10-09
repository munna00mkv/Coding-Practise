#include <iostream>
using namespace std;

int main()
{
    int n, i, num;
    cout << "Enter Any Number:" << endl;
    cin >> num;
    i = 2;
    int j = 1;
    while (j <= num)
    {
        bool isPrime = true;
        n = j;
        while (i <= n / 2)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
            i = i + 1;
        }
        if (isPrime)
            cout << n << " ";
        j++;
    }

    return 0;
}