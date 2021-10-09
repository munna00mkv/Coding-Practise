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
void secondLargestElem(int arr[] , int n)
{
    int largest, sec_largest;
    largest = sec_largest = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > sec_largest && arr[i] < largest)
        {
            sec_largest = arr[i];
        }
    }
    cout<<"Largest : "<<largest<<endl;
    cout<<"Second Largest : "<<sec_largest<<endl;

}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter Size: "<<endl;
    cin >> n;
    inputArray(arr,n);
    printArray(arr,n);
    secondLargestElem(arr,n);
    return 0;
}