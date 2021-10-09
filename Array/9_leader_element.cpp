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
// Approach 1 O(n*n);
void leaderElem(int arr[], int n)
{
    
    for(int i = 0; i<n; i++)
    {
        bool leader = true;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] <= arr[j])
            {
                leader = false;
                break;
            }
        }
        if(leader)
            cout<<arr[i]<<" ";
    }
}
// Approach 2 :- it print leader from right O(n)
void leaderElem2(int arr[], int n)
{
    int leader = arr[n-1];
    cout<<leader<<" ";
    for(int i = n-2; i>=0; i--)
    {
        if(arr[i] > leader)
        {
            leader = arr[i];
            cout<<leader<<" ";
        }
    }
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
    // leaderElem(arr,n);
    leaderElem2(arr,n);
    i++;
    }
    return 0;
}