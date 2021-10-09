#include<bits/stdc++.h>
using namespace std;
void insertionSort(int *arr, int n)
{
    for(int i=1; i<n-1; i++) // for pick element from unsorted array
    {
        int val = arr[i]; // store that in val
        int hole = i;  // and consider it a hole
        // now comapare with sorted elem and shift
        while(hole > 0 && arr[hole-1]>val)
        {
            // shift
             arr[hole] = arr[hole-1];
             hole--;
        }
        // insert value at desire index
        arr[hole] = val;
    }
}
int main()
{
    int arr[] = {4,3,1,4,5,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,size);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}