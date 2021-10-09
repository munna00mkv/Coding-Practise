#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maxFind(int arr[], int n)
{
    if(n == 1)
        return arr[0];
    int restArray = maxFind(arr,n-1);
    int max_elem = max(arr[n-1], restArray);
    return max_elem;
}
int minFind(int arr[], int n)
{
    if(n == 1)
        return arr[0];
    int restArray = minFind(arr,n-1);
    int min_elem = min(arr[n-1], restArray);
    return min_elem;
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
    int max = maxFind(arr,n);
    cout<<"Max: "<<max<<endl;
     int min = minFind(arr,n);
    cout<<"Min: "<<min<<endl;
    return 0;
}