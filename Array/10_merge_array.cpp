#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{
    int * new_arr = new int[n+m];
    int k, i, j;
    k = i = j = 0;
    while(i < n && j < m)
    {
        if(arr1[i] > arr2[j])
        {
            new_arr[k] = arr2[j];
            j++;
            k++;
        }
        else{
            new_arr[k] = arr1[i];
            i++;
            k++;
        }
    }
    // For rest Elment of first Array
    while(i < n)
    {
        new_arr[k] = arr1[i];
        i++;
        k++;
    }
  
    // For rest Elment of second Array
      while(j < m)
    {
        new_arr[k] = arr2[j];
        j++;
        k++;
    }
    cout<<"new Array is: ";
    for(int i=0; i<k; i++)
    {
        cout<<new_arr[i]<<" ";
    }
}
int main()
{
    int n,m;
    cout<<"Enter Size of First Sorted Array: "; cin >> n;
    int * arr1 = new int[n];
    cout<<"Enter First Array: ";
    for(int i=0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout<<"Enter Size of Second Sorted Array: "; cin >> m;
    int * arr2 = new int[m];
    cout<<"Enter Second Array: ";
    for(int i=0; i<m; i++)
    {
        cin >> arr2[i];
    }
    cout<<"First Array: ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Second Array: ";
    for(int i=0; i<m; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    merge(arr1,arr2,n,m);
    return 0;
}