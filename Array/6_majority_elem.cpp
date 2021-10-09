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
void majorityElem(int arr[], int n)
{
    int max_count  = 0;
    int index = -1;
    int count;
    for(int i=0; i<n; i++)
    {
        count = 1;
        for(int j = i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > max_count)
        {
            max_count = count;
            index = i;
        }
    }
    if(max_count > n/2)
    {
        cout<<"Majority Element : "<<arr[index]<<endl;
    }
    else{
        cout<<"Not Found "<<endl;
    }
}
int main()
{
    int t, i;
    cout<<"Enter Test Case: "<<endl;
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
    majorityElem(arr,n);
    i++;
    }
    return 0;
}