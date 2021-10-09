#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key, int i)
{
    if(i == n)
        return -1;
    if(arr[i] == key)
        return i;
    int index = firstOcc(arr,n,key,i+1);
    return index;
}

int lastOcc(int arr[], int n, int key, int i)
{
    if(i == n)
        return -1;
    int restArray = lastOcc(arr,n,key,i+1);
    if(restArray != -1)
    {
        return restArray;
    }
    if(arr[i] == key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int n,key;
    cout<<"Enter Size Of Array: "<<endl;
    cin >> n;
    int * arr = new int[n];
    cout<<"Enter Array Element: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter key: "<<endl; cin >> key;
    int index = firstOcc(arr,n,key,0);
    cout<<"Element is Present at: "<<index<<endl;

    int last = lastOcc(arr,n,key,0);
    cout<<"Element is present at: "<<last<<endl;
    return 0;
}