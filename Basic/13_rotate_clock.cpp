#include <bits/stdc++.h>
#define MAX_SIZE 101
using namespace std;
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter Size: " << endl;
    cin >> n;
    int arr[MAX_SIZE];
    cout << "Enter Array Element: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter Number of Rotation: " << endl;
    cin >> k;
    cout << "Array Before Rotation: " << endl;
    printArray(arr, n);
    while (k--)
    {
        int last = arr[n - 1];
        for (int i = n - 2; i >= 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[1] = last;
    }
    cout << "Array After Rotation: " << endl;
    printArray(arr, n);
    return 0;
}