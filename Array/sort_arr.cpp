#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort(int arr[], int n)
{
    int i, j, temp;
    i = 0;
    j = n - 1;
    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
int main()
{
    int t, i = 1;
    cout << "Enter Number of Test cases" << endl;
    cin >> t;
    while (i <= t)
    {
        int n, x;
        cout << "Enter Size Of Array:" << endl;
        cin >> n;
        int arr[100];
        cout << "Enter " << n << " Element of Array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        printArray(arr, n);
        sort(arr, n);
        printArray(arr, n);

        i++;
    }
    return 0;
}