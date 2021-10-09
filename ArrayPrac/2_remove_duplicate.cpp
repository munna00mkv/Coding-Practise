/*
Remove Duplicate from array
ex:- arr[] = {1,1,2,2,3,3,3,4,4} size:- 9
output = {1,2,3,4} , size:- 4
- if array is unsorted then first sort them:- O(nlogn)
- if not sorted then remove
*/
#include<bits/stdc++.h>
using namespace std;
// return size of new array
// Time Complexity:- O(n)
// Space Complexity:- O(1) // not using any temp array
int removeDuplicate(int arr[], int n)
{
    int j =0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[i+1])
        {
            arr[j++] = arr[i];
        }
    }
    return j;
}
// using set
// if array is sorted then use- order set
// if array is unorderd then use - unordered set
void removeDuplicateUsingSet(int arr[], int n)
{
    set<int> s;
    for(int i=0; i<n; i++)
    {
        s.insert(arr[i]);
    }
    // print data
    for(auto elem : s )
    {
        cout<<elem<<" ";
    }
}
int main()
{
    int arr[] = {1,1,2,2,2,3,3,3,4,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n = removeDuplicate(arr,size);
    cout<<"Array is: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    removeDuplicateUsingSet(arr,size);
    return 0;
}