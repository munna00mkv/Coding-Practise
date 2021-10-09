/*
Given an infinite sorted array consisting 0s and 1s. The problem is to find the index
of first 1s in that array. As the array is infinite, therefore it is guranted that
number 1 will be present in the array

ex:- 
arr[] = {0,0,1,1,1,1} ans = 2
arr[] = {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1}; ans = 8

Logic:- basically it is combination of binary search on infinte sorted array and 
binary search of first occurance
step 1:- first find finite array from infinte array (here key = 1)
step 2:- apply binary search to find first occurance of key
*/

#include<bits/stdc++.h>
using namespace std;

int binarySearchFirstOcc(vector<int> arr, int start,int end,int elem)
{
    int res = -1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == elem)
        {
            
            res = mid; // it may be a candidate
            end = mid - 1; // first occ will be in left array
        }
        else if(elem > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return res;
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
    int key = 1; // it is given
    int start = 0;
    int end = 1; // let
    // now find bound;- compare key with end update start and end till it is greater than key
    while(arr[end] < key)
    {
        start = end;
        end = end * 2;
    }
    int ans = binarySearchFirstOcc(arr,start,end,key);
    cout<<"First occurance: "<<ans<<endl;
    return 0;
}