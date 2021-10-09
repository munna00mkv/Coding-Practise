#include<bits/stdc++.h>
using namespace std;
void merge(int *arr, int start, int mid, int end)
{
    int nL = mid-start+1; // size of left sub Array
    int nR = end-mid;    // size of right sub array
    // Declare two sub Array
    int *left = new int[nL];
    int *right = new int[nR];
    for(int i=0; i<nL; i++)
    {
        left[i] = arr[start + i];
    }
    for(int j=0; j<nR; j++)
    {
        right[j] = arr[mid+1+j];
    }
    // merging two array
    int i = 0, j = 0, k = start;
    while(i < nL && j<nR)
    {
        if(left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < nL)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < nR)
    {
        arr[k] = right[j];
        j++;
        k++;
    }

}
void mergeSort(int *arr, int start, int end)
{
    if(start >= end)
        return;
    int mid = start + (end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1, end);
    merge(arr,start,mid,end);
}
int main()
{
    int arr[] = {2,1,5,6,3,5,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1); // mergeSort(arr, start, end);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}