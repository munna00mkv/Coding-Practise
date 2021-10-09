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

int main()
{
    int t,i;
    cout<<"Enter Test Cases: "<<endl;
    cin >> t;
    i = 1;
    while(i <= t)
    {
    int arr[100];
    int n;
    cout<<"Enter Size: "<<endl;
    cin >> n;
    inputArray(arr,n);
    printArray(arr,n);
    i++;
    }
    return 0;
}