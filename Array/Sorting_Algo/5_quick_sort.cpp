#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int partation(int *arr, int start, int end)
{
    // choose pivot at last element
    int pivot = arr[end];
    // Take a pointer at start
    int partationIndex = start;
    // iterate a loop till the end and check
    for(int i=start; i<end; i++)
    {
        if(arr[i] < pivot)
        {
            // then swap i and partationIndex element
            swap(arr[i], arr[partationIndex]);
            // increase pi
            partationIndex++;
        }
    }
    // after loop end swap partationIndex with pivot and return pi
    swap(arr[partationIndex], arr[end]);
    return partationIndex;
}
void QuickSort(int *arr, int start, int end)
{
    // Base case to stop partation
    if(start >= end)
        return;
    // Calling partation function
    int partationIndex = partation(arr,start,end);
    // calling quick sort for left array
    QuickSort(arr,start,partationIndex-1);
    // Calling quick sort for right array
    QuickSort(arr,partationIndex+1, end);

}
int main()
{
    int arr[] = {7,2,1,6,8,5,3,4};
    int n  = sizeof(arr)/ sizeof(arr[0]);
    QuickSort(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}