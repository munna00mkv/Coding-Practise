/*
Find an element in rotated sorted array
You are given a target value to search. if found in array return its index
otherwise return -1. you may assume no duplicate exists in the array
Ex:- 
    arr[] = {4,5,6,7,0,1,2}, target = 0
    output: 4
Logic:- 
find min element index in array then we observe that we have found two sorted array
one is(start to min_index-1) and other is(min_index to end)
now search in these two sorted array one will return index and other will return -1
so print accordingly
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

int rotatedArrayBs(vector<int> arr)
{
    int n = arr.size();
    int start = 0;
    int end = arr.size()-1;
    if(arr[start] < arr[end])
        return 0;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        int prev = (mid + n - 1) % n;
        int next = (mid + 1) % n;
        if(arr[mid] < arr[prev] && arr[mid] < arr[next])
        {
            return mid;
        }
        // for movement
        else if(arr[0] <= arr[mid])
        {
            start = mid + 1;
        }
        else if(arr[mid] <= arr[n-1])
        {
            end = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter size:"<<endl;
    cin >> n;
    cout<<"Enter array element"<<endl;
    vector<int> vec;
    for(int i=0; i<n; i++)
    {
        int elem;
        cin >> elem;
        vec.push_back(elem);
    }
    int x;
    cout<<"Enter element to find:"<<endl;
    cin >> x;
    int index = rotatedArrayBs(vec);
    // cout<<index<<endl;
    int ans1 = binarySearch(vec,0,index-1,x);
    // cout<<ans1<<endl;
    int ans2 = binarySearch(vec,index,n-1,x);
    // cout<<ans2<<endl;
    if(ans1 > 0)
    {
        cout<<ans1<<endl;
    }
    else if(ans2 > 0)
    {
        cout<<ans2<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}