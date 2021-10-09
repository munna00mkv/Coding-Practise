/*
Find Ceil of an element in a sorted array
Given a sorted array and a value x, the floor of x is the largest element 
in array smaller than or equal to x. write efficient function to find floor of x

Ex:- 
input:- arr[] = {1,2,3,4,8,10,10,12,19} x = 5
output:- 8

A/Q:- Ceil of 5 = Min{8,10,10,12,19} these are possible candidate
i.e ceil of 5 = smaller element which is greater then 5
*/

#include<bits/stdc++.h>
using namespace std;

int findCeil(vector<int> arr, int x)
{
    int start = 0;
    int end = arr.size()-1;
    int res;
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        
        if(arr[mid] == x) // if equal to x then simply return 
        {
            return arr[mid]; 
        }
        else if(arr[mid] > x) // then it may be candidate
        {
            res = arr[mid]; // store it in res and update when possible another candidate
            end = mid-1; // next candidate will be on left array
        }
        else if(arr[mid] < x) // all possible candidate will be on right subarray
        {
            start = mid+1;
        }
    }
    return res; // return final candidate
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
    int ans = findCeil(vec,key);
    cout<<"Ceil "<<ans<<endl;
    return 0;
}