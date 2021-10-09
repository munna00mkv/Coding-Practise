/*
Q:- Given an sorted array find index of first and last occurance of an element
input:- arr[] = {1,2,3,4,4,4,4,5,6};
output:- first occ:- 3
        last occ:- 6
*/
#include<bits/stdc++.h>
using namespace std;
int firstOccurance(vector<int> &arr, int elem)
{
    int start = 0;
    int end = arr.size()-1;
    int result = -1; // if elem not found then result will be -1
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        // search elem and if found then check whether it is first occrance or not
        // for check first occurance, search in left subarray
        if(arr[mid] == elem)
        {
            // here mid may be first occurance so assign it in result
            // then check in left sub array if found then update result
            result = mid;
            end = mid - 1; // for check in left sub array
        }
        else if(elem > arr[mid])
        {
            start = mid +1;
        }
        else{
            end = mid - 1;
        }
    }
    return result;
}
int lastOccurance(vector<int> &arr, int elem)
{
    int start = 0;
    int end = arr.size()-1;
    int result = -1; // if elem not found then result will be -1
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        // search elem and if found then check whether it is last occrance or not
        // for check last occurance, search in Right subarray
        if(arr[mid] == elem)
        {
            // here mid may be last occurance so assign it in result
            // then check in Right sub array if found then update result
            result = mid;
            start = mid + 1; // for check in Rigth sub array
        }
        else if(elem > arr[mid])
        {
            start = mid +1;
        }
        else{
            end = mid - 1;
        }
    }
    return result;
}
int main()
{
    vector<int> vec = {1,2,3,4,4,4,4,4,5,6};
    int elem = 4;
    int ans1 = firstOccurance(vec,elem);
    int ans2 = lastOccurance(vec,elem);
    cout<<"First Occurance: "<<ans1<<endl;
    cout<<"Last Occurance: "<<ans2<<endl;
    return 0;
}