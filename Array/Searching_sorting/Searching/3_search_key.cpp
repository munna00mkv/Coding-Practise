/*Given a sorted array of numbers, find if a given number 'key' is present in the array
  Though we know that the array is sorted , we don't know if it's in acceding or descending order */
  
#include <bits/stdc++.h>
using namespace std;
void printArray(int *arr, int n)
{
    cout << "Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int binarySearchAsc(int *arr, int start, int end, int x)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2; // or we can write like this to avoid integer overflow mid = start + (end-start)/2
        if (x == arr[mid])
        {
            return mid;
        }
        else if (x > arr[mid])
        {
            start = mid + 1;
        }
        else if (x < arr[mid])
        {
            end = mid - 1;
        }
    }
    // if our control reach here then elemnt is not present in Array
    return -1;
}
int binarySearchDesc(int *arr, int start, int end, int x)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2; // or we can write like this to avoid integer overflow mid = start + (end-start)/2
        if (x == arr[mid])
        {
            return mid;
        }
        else if (x < arr[mid])
        {
            start = mid + 1;
        }
        else if (x > arr[mid])
        {
            end = mid - 1;
        }
    }
    // if our control reach here then elemnt is not present in Array
    return -1;
}
int main()
{
    int n;
    cout << "Enter Size Of Array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter Array Element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter Elment to be Search: ";
    cin >> x;
    printArray(arr, n);
    // first check whether asc or desc
    if (n == 1)
    {
        if (arr[n-1] == x)
        {
            cout << "Elment is at index " << n - 1 << endl;
        }
        else
        {
            cout << "Element is not present in Array" << endl;
        }
    }
    else
    {
        if (arr[0] > arr[1])
        {
            int index = binarySearchDesc(arr, 0, n - 1, x);
            (index == -1) ? cout << "Element is not present in Array" : cout << x << " is present at " << index << " index" << endl;
        }
        else
        {
            int index = binarySearchAsc(arr, 0, n - 1, x);
            (index == -1) ? cout << "Element is not present in Array" : cout << x << " is present at " << index << " index" << endl;
        }
    }
    delete[] arr;
    return 0;
}