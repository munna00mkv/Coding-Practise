/*
Given a bitonic of n distnict elements, write
a program to find  a given element x in the bitonic 
sequence in O(logn) time. A Bitonic sequence is a 
sequence of numbers which is first strictly increasing
then after a point strictly decreasing.

Note:- strictly inc:- [1,2,3,4,5,6] , not strictly inc- [1,2,2,3,4]

input:- arr[] = {-3,9,8,20,17,5,1} key = 20 
ouput:- 3

Logic :- Here we have two sorted array increasing order before peak
         decreasing order after peak
         so find index of peak then apply binary search on inc and dec array
*/
#include <bits/stdc++.h>
using namespace std;
int binarySearchAsc(vector<int> &arr, int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
int binarySearchDesc(vector<int> &arr, int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
int findPeak(vector<int> &arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (mid > 0 && mid < end)
        {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            else if (arr[mid] < arr[mid + 1])
            {
                start = mid + 1;
            }
            else if (arr[mid] < arr[mid - 1])
            {
                end = mid - 1;
            }
        }

        // Edge case:- when mid = 0 and n-1
        else if (mid == start)
        {
            if (arr[mid] > arr[mid + 1])
                return mid;
        }
        else if (mid == end)
        {
            if (arr[mid] > arr[mid - 1])
                return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> vec;
    int n;
    cout << "Enter Array Size:" << endl;
    cin >> n;
    cout << "Enter Array element" << endl;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        vec.push_back(elem);
    }
    int key;
    cout << "Enter element to be searched" << endl;
    cin >> key;
    int start = 0;
    int end = vec.size() - 1;
    int index = findPeak(vec, start, end);
    // if key is at peak index then simply return index
    if (key == vec[index])
        cout << "Index " << index;
    else
    {
        // otherwise find
        int ans1 = binarySearchAsc(vec, start, index - 1, key);
        int ans2 = binarySearchDesc(vec, index + 1, end, key);
        if (ans1 > ans2)
        {
            cout << "Index: " << ans1 << endl;
        }
        else if (ans2 > ans1)
        {
            cout << "Index: " << ans2 << endl;
        }
        else
        {
            cout << "Not Present" << endl;
        }
    }
    return 0;
}