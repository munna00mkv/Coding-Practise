/*Find the Rotation count in Rotated Sorted Array consider an array of distinct numbers sorted in increasing
order. The array has been rotated k number of times. Given such array find the value of k
arr={2,5,6,8,11,12,15,18} k = 0
arr={11,12,15,18,2,5,6,8} k = 4*/
// Logic:- Return index of minimum element
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
int rotatedSortedArr(int *arr, int start, int end, int n)
{
    int mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int prev = (mid + n - 1) % n; // genral formula to find prev index
        int next = (mid + 1) % n;     // genral formula to find next index
        // Condition to find minimum element
        if (arr[mid] < arr[prev] && arr[mid] < arr[next])
        {
            return mid;
        }
        // condition to discard half array
        // Logic:- check inside unsorted array
        else if (arr[start] < arr[mid])
        {
            // i.e left array is sorted then go to right array
            start = mid + 1;
        }
        else if (arr[mid] < arr[end])
        {
            // i.e right array is sortd go to left array
            end = mid - 1;
        }
    }
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
    printArray(arr, n);
    int k = rotatedSortedArr(arr, 0, n - 1, n);
    cout << "Array is Rotated: " << k << " times" << endl;
    delete[] arr;
    return 0;
}