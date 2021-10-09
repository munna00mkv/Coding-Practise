#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool is_sorted(int arr[], int n)
{
    // step 1: base case:- in n==0 or n ==1 then array is always sorted
    if(n == 0 || n == 1)
    {
        return true;
    }
    // step 2:- some operation
    if(arr[0] > arr[1])
        return false;
    // step 3:- Recursive call
    bool smallArrayOutput = is_sorted(arr+1, n-1);

    return smallArrayOutput;
}
int main()
{
    int n;
    cout<<"Enter Size of Array: "<<endl;
    cin >> n;
    int *arr = new int[n];
    cout<<"Enter Array Element:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    bool op = is_sorted(arr,n);
    if(op)
        cout<<"Sorted"<<endl;
    else 
        cout<<"Not Sorted"<<endl;

    delete []arr;
    return 0;
}