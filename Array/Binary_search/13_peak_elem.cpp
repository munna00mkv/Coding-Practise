/*
Find Peak element in array[where array is unsorted]
A peak element is an element that is greater than its neighbours.

Given an input array, where arr[i] != arr[i+1], find peak element and return its index
- The array may contain multiple peaks, in that case return the index to any one of the peak is fine
- You may imagine that arr[-1] = arr[n] = -infinity

Ex:- arr[] = {1,2,3,1} ans = 2, because 3 is peak element
    arr[] = {5,10,20,15}, ans = 2, because 20 is peak element

Logic:- use binary search on ans
- mid will be ans if it is greater than both of its neighbour i.e arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]
- if it is not peak then decide where to move wheather left or right subarray
we will move in most promising side(i.e where our ans is available)
Here we can observe, the mid who is not peak its one neighbour is grater and one is smaller than mid
so most promising side will be where elem is greater

Edge case:- [must handle it ]
- if mid is 0 then it will be only one neighbour mid+1 so check only with that and return accordingly
- if mid is n-1 then it will be only one neighbour mid-1 so check only with that and return accordingly

*/

#include<bits/stdc++.h>
using namespace std;
int findPeak(vector<int> arr)
{
    int n = arr.size();
    int start = 0;
    int end = n-1;
    while(start <= end)
    {
        int mid = start + (end-start)/2;

        if(mid > 0 && mid < n-1) // condtition for two neighbour
        {
            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
            {
                return mid;
            }
            else if(arr[mid] < arr[mid+1])
            {
                start = mid + 1; // move right
            }
            else if(arr[mid] <arr[mid-1])
            {
                end = mid - 1; // move left
            }
        }
        // Edge case:-  // only one neighbour
        else if(mid == 0)
        {
            if(arr[mid] > arr[mid+1])
            {
                return mid;
            }
        }
        else if(mid == n-1)
        {
            if(arr[mid] > arr[mid-1])
            {
                return mid;
            }
        }
    }
    return -1; // if not peak avilaible
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
    int ans = findPeak(vec);
    cout<<"Index of Peak: "<<ans<<endl;
    return 0;
}