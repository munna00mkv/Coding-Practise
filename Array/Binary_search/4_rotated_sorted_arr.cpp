/*
Find the Rotation count in Rotated sorted array consider an array
of distnict numbers sorted in increasing order.The array has been 
rotated(clockwise) k numbers of times. Given such an array, find
the value of k,
Example:- 
input: - arr[] = {15,18,2,3,6,12}, output = 2
        arr[] = {7,9,11,12,5},    output = 4
        arr[] = {7,9,11,12,15}    output = 0

Logic:- here we can observ that output is index of min element so search for min elem
Note:- we can also observ that if array is sorted then no need to check rotation
so simply return 0 otherwise check how many times rotated 
*/
#include <bits/stdc++.h>
using namespace std;
int rotatedArray(vector<int> &arr)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    // first check given array is sorted or not
    if (arr[start] < arr[end])
    {
        return 0;
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // Note:- we can not write 
        // prev = mid -1 [because if mid is 0 then it will do wrong calculation so genralize it]
        // next = mid + 1 [because when mid is n-1 then it will do wrong calculation]
        // genralize formula to find prev and next
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;
        // condition to find minimum
        // By observation in arr we can say that min elem is less than both prev and next neighbour
        if (arr[mid] < arr[prev] && arr[mid] < arr[next])
        {
            return mid;
        }
        // condition for movement[rigth or left array]
        // in array we can say that our minimum always be in unsorted array
        else if (arr[mid] >= arr[0])
        {
            // i.e left array is sorted so check in right subarray
            start = mid + 1;
        }
        else if (arr[mid] <= arr[n-1])
        {
            // i.e right array is sorted so check in left subarray
            end = mid - 1;
        }
    }
    return 0;
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
    int k = rotatedArray(vec);
    cout << "Rotated " << k << endl;
    return 0;
}