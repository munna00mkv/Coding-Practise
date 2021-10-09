#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size Of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter Array Element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl<<"Duplicate Element is: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    cout << arr[j] << " ";
                    arr[j] = -1;
                }
            }
        }
    }
    delete[] arr;
    return 0;
}