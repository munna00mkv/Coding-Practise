/*
Search in nearly sorted array:-
Given an array which is sorted, but after sorting some elements are moved to
either of the adjacent positions, i.e arr[i] may be present at arr[i+1] or arr[i-1].
write an efficent function to search an element in this array.
Basically the elements arr[i] can only be swapped with either arr[i-1] or arr[i+1]
for example consider the array {2,3,10,4,40}, 4 is moved to next position and 10 is moved 
to previous position.

input:- arr[] = {10,3,40,20,50,80,70}, key = 40
output:- 2

Logic:- in normal binary search ith element is present only on ith position 
so we only check with ith element 

But here mention that ith element is present at ith, i-1 th and i + 1 th position
so we have to check with all three position (i,i-1,i+1)
and movement will be same as normal binary search 
in normal binary search [start = mid + 1 and end = mid -1]
but here in modified binary search [start = mid + 2 and end = mid - 2]
because we have already check i-1 and i+1 element so no need to check again

Note:- when mid at 0th position then there will not mid - 1 so handle this sitiuion while checking mid-1 [mid-1 > start(0)]
    when mid at n-1th position then there will not mid + 1 so handle this sitiuion [mid+1 < end(n)]
*/

#include<bits/stdc++.h>
using namespace std;

int modifiedBs(vector<int> &arr, int key)
{
    int n = arr.size();
    int start = 0;
    int end = arr.size()-1;
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(mid-1 > 0 && arr[mid-1] == key)
        {
            return mid-1;
        }
        else if(mid+1<n && arr[mid+1] == key)
        {
            return mid+1;
        }
        else if(arr[mid] > key)
        {
            end = mid-2;
        }
        else if(arr[mid]<key)
        {
            start = mid+2;
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
    cout<<"Enter element to be searched"<<endl;
    cin >> key;
    int ans = modifiedBs(vec,key);
    cout<<"Inndex at "<<ans<<endl;
    return 0;
}
