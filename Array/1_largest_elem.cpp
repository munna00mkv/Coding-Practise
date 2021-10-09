#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void inputArray(int arr[], int n)
{
    cout<<"Enter Array Element: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}
void printArray(int arr[], int n)
{
    cout<<"Array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int largestElem(int arr[] , int n)
{
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter Size: "<<endl;
    cin >> n;
    inputArray(arr,n);
    printArray(arr,n);
    int largest = largestElem(arr,n);
    cout<<"Largest Element is : "<<largest<<endl;
    return 0;
}