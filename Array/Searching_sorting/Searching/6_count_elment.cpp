/*You have given a sorted array and a elemnt x find frequency of that element

 Logic:- Find length of Array that have continuous value x which gives us frequency of x
 Steps to find length of Array:-
 1> Find first index 
 2> Find Last index
 3> length = last Index - First Index + 1*/
#include<bits/stdc++.h>
using namespace std;
void printArray(int * arr, int n)
{
    cout<<"Array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int firstOccurance(int *arr, int start, int end, int x)
{
    int mid,result = -1;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(x == arr[mid])
        {
            result = mid;
            end = mid - 1;
        }
        else if(x < arr[mid])
        {
            end = mid - 1;
        }
        else if(x > arr[mid])
        {
            start = mid + 1;
        }
    }
    return result;
}
int lastOccurance(int *arr, int start, int end, int x)
{
    int mid,result = -1;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(x == arr[mid])
        {
            result = mid;
            start = mid + 1;
        }
        else if(x < arr[mid])
        {
            end = mid - 1;
        }
        else if(x > arr[mid])
        {
            start = mid + 1;
        }
    }
    return result;
}
int main()
{
    int n;
    cout<<"Enter Size Of Array: "; cin >> n;
    int * arr = new int[n];
    cout<<"Enter Array Element: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout<<"Enter Elment to be Search: ";
    cin >> x;
    printArray(arr,n);
    int firstOccIndex = firstOccurance(arr,0,n-1,x); // Find First Occrunce of element
    int lastOccIndex = lastOccurance(arr,0,n-1,x);   // Find Last Occrunce of element
    int count = (lastOccIndex - firstOccIndex) + 1;  // find length of Array
    cout<<"Total Frequency of "<<x<<" is "<<count<<endl;

    delete []arr;
    return 0;
}