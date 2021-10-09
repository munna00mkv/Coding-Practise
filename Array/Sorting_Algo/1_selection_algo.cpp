#include<bits/stdc++.h>
using namespace std;
void selectionSort(int *arr, int n)
{
    // There will be n-2 pass
    for(int i=0; i<n-1; i++)
    {
        int iMin = i; // intially min index is i
        // find min index
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[iMin])
                iMin = j; // update the index of minimum elem
        }
        // Now swap min with ith index
        int temp = arr[i];
        arr[i] = arr[iMin];
        arr[iMin] = temp;
    }
}
int main()
{
    int arr[] = {4,3,1,4,5,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,size);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}