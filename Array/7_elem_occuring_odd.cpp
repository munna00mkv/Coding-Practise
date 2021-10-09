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
void frequency(int arr[], int n)
{
    int count;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != INT_MIN)
        {
            count = 1;
            for(int j = i+1; j<n; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    arr[j] = INT_MIN;
                }
            }
            if(count % 2 != 0)
            {
                cout << arr[i]<<endl;
            }
        }
    }
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter Size: "<<endl;
    cin >> n;
    inputArray(arr,n);
    printArray(arr,n);
    frequency(arr,n);
    return 0;
}