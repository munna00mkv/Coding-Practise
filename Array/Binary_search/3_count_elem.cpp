/*
Q: you have given a sorted array and a element find frequency of elem in array
input:- arr[] = {1,2,3,4,4,4,4,4,5,5,6} and elem = 4
output:- 5

Logic:- As we know our array is sorted so elem will be continuous
        so just find length of subarray with continous given element
        length of array = last_index - start_index + 1;
        so step1:- find first occurance of given elem
           step2:- find last occurance of given elem
           step3:- frequency of given elem = last occ - first occ + 1;
*/
#include<bits/stdc++.h>
using namespace std;
int firstOccurance(vector<int> &arr, int elem)
{
    int start = 0;
    int end = arr.size()-1;
    int result = -1;
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == elem)
        {
            result = mid;
            end = mid - 1;
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
    int result = -1;
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == elem)
        {
            result = mid;
            start = mid + 1;
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
    int freq = (ans2 - ans1) + 1;
    cout<<"Frequency of "<<elem<<" is "<<freq<<endl;
    return 0;
}