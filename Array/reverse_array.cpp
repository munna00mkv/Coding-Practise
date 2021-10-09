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
void reverse(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    int n;
    cout << "Enter Size Of Array:" << endl;
    cin >> n;
    if (n == 0)
    {
        cout << "Array is Empty" << endl;
    }
    else
    {
        int arr[100];
        cout << "Enter " << n << " Element of Array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        printArray(arr, n);
        reverse(arr, n);
        printArray(arr, n);
    }

    return 0;
}