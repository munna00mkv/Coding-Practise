#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findMin(int * arr, int n)
{
    // Base Case
    if(n == 1)
        return arr[0];
    // Recursive Call
    int min = findMin(arr+1, n-1);
    // Small Calculation
    if(arr[0] < min)
    {
        min = arr[0];
        return min;
    }
    else{
        return min;
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
    int min  = findMin(arr,n);
    cout<<"Min Element: "<<min;
    delete []arr;
    return 0;
}