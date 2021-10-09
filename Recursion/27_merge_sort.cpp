#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Approach 1:- 
void merge(int * arr, int start, int mid, int end)
{
    int i,j,k;
    int * temp = new int[end-start+1];
    i = start;
    j = mid+1;
    k = 0;
    while(i <= mid && j <= end)
    {
        if(arr[i] > arr[j])
        {
            temp[k] = arr[j];
            j++;
        }
        else{
            temp[k] = arr[i];
            i++;
        }
        k++;
    }

    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for(int i = start; i<=end; i++)
    {
        arr[i] = temp[i-start];
    }
    delete []temp;
}

void merge_sort(int * arr, int start, int end)
{
    if(start >= end)
        return;
    int mid = (start + end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);

}
int main()
{
    int n;
    cout<<"Enter Size Of array: ";
    cin >> n;
    int * arr = new int[n];
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
    merge_sort(arr,0,n-1);
    cout<<"Array After Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete []arr;
    return 0;
}