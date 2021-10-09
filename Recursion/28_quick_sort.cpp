#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Function to swap two number
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// Function to partition Array
int partition(int *arr, int start, int end)
{
    int pivot = arr[end]; // set pivot as last index
    int pIndex = start; // set Partition index as start intially

    for(int i=start; i<=end-1; i++)
    {
        if(arr[i] <= pivot)
        {
            swap(arr[i],arr[pIndex]); // swap if element is lesser then pivot
            pIndex++;
        }
    }
    swap(arr[pIndex], arr[end]);   // Swap pivot with the element at partition index
    return pIndex;
}

// Function to perform Quick Sort

void quickSort(int *arr, int start, int end)
{
    // Base Case:- When size of Array is 0 or 1
    if(start >= end)
    {
        return;
    }
    // Small Calculation
    int pIndex = partition(arr,start,end); // Call Partition first
    // Recursive Call
    quickSort(arr,start,pIndex-1);         // Call Quick sort on left Sub Array
    quickSort(arr,pIndex+1,end);            // Call Quick sort on right Sub Array
}
// Main Function to Drive the Code

int main()
{
    int n;
    cout<<"Enter Size Of Array: "; cin >>n;
    int *arr = new int[n];
    cout<<"Enter Array Element: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Array Before Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);      // Calling Quick Sort
    cout<<"Array After Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete []arr;
    return 0;
}