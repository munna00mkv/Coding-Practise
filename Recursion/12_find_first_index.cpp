#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int findFirstIndex(int * arr, int n, int x)
{
    // Base Case:- 
    if(n == 0)
        return -1;
    // perform some calculation
    if(arr[0] == x)
        return 0;
    // Recursive call
    int ans = findFirstIndex(arr+1,n-1,x);
    if(ans == -1)
        return ans;
    else
        return ans+1;
}
int main()
{
    int n,x;
    cout<<"Enter size of Array : ";
    cin >> n;
    int *arr = new int[n];
    cout<<"Enter Array Element: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter Element which index to be find: "<<endl;
    cin >>x;
    int ans = findFirstIndex(arr,n,x);
    cout<<"Index:- "<<ans<<endl;
    delete []arr;
    return 0;
}