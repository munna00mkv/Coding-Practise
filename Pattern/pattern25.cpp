/*
n = 4
          1
         232
        34543
       4567654
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Row:" << endl;
    cin >> n;
    int i, j, k;
    i = 1;
    while (i <= n)
    {
        k = 1;
        while (k <= n - i)
        {
            cout << " ";
            k++;
        }
        j = 1;
        int p = i;
        while (j <= i)
        {
            cout << p;
            p++;
            j++;
        }
        j = i - 1;
        int val = 2 * i - 2;
        while (j >= 1)
        {
            cout << val;
            val--;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}