#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findMax(int * arr, int n)
{
    // Base Case
    if(n == 0)
        return 0;
    // Recursive Call
    int max = findMax(arr+1, n-1);
    // Small Calculation
    if(arr[0] > max)
    {
        max = arr[0];
        return max;
    }
    else{
        return max;
    }
}
int main()
{
    int n;
    cout<<"Enter Size Of Array: "; cin >> n;
    int *arr = new int[n];
    cout<<"Enter Array Elments: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int max = findMax(arr,n);
    cout<<"Max Element: "<<max;
    delete []arr;
    return 0;
}