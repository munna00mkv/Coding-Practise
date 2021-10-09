#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr, int n)
{
    for(int i=0; i<n-1; i++) // for number of passes
    {
        int flag = 1; // lets intially array is sorted // check when array is already sorted
        for(int j=0; j<n-1-i; j++) // for comparision of adjcent elem // in ecah time comparision reduced
        {
            if(arr[j] > arr[j+1]) // then swap adjcent elem
            {
                int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    flag = 0; // if sorting occur then flag is 0
            }
            if(flag == 1) 
                break; // when sorted then no need to comparision further
        }
    }
}
int main()
{
    int arr[] = {4,3,1,4,5,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,size);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}