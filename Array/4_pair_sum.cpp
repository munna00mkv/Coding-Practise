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
void pairSum(int arr[], int n, int x)
{
    bool isPair = false;
    for(int i=0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i] + arr[j] == x)
            {
                isPair = true;
                cout<<arr[j]<<" "<<arr[i]<<endl;
                break;
            }
        }
    }
    if(!isPair)
        cout<<"Not Exist"<<endl;
}
int main()
{
    int arr[100];
    int n,x;
    cout<<"Enter Size: "<<endl;
    cin >> n;
    cout<<"Enter Sum: "<<endl;
    cin >> x;
    inputArray(arr,n);
    printArray(arr,n);
    pairSum(arr,n,x);
    return 0;
}