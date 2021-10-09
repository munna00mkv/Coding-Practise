/*
Suppose you have a sorted array of infinite numbers, how would you search an element in the array?

Since array is sorted, first thing clicks in mind is binary search, but the problem here is that
we don't know size of array.

If the array is infinite, that means we don't have proper bound to apply . so in order to find
position of key, first we find bounds and then apply binary search algo.

Let start be pointing to 1st element and end is pointing to 2nd element of array.
Now comapre key with end index element.
- if it is greater than end index element then copy end index in start index and double the end index
- if it is smaller than end index, then apply binary search on end and start indicies found;

Logic:- As we know arr[start]<= key <= arr[end], so first find start and end index
*/

#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int start,int end,int elem)
{
    while(start <= end)
    {
        int mid = start + (end - mid)/2;
        if(arr[mid] == elem)
        {
            return mid;
        }
        else if(elem > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter size of Array"<<endl;
    cin >> n;
    vector<int> arr;
    cout<<"Enter Array element"<<endl;
    for(int i=0; i<n; i++)
    {
        int elem;
        cin >> elem;
        arr.push_back(elem);
    }
    int key;
    cout<<"Enter element to be searched"<<endl;
    cin >> key;

    int start = 0;
    int end = 1; // let
    // now find bound;- compare key with end update start and end till it is greater than key
    while(arr[end] < key)
    {
        start = end;
        end = end * 2;
    }
    int ans = binarySearch(arr,start,end,key);
    cout<<ans<<endl;
    return 0;
}
