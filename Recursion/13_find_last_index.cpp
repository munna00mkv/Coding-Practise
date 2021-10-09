#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// int findlastIndex(int * arr, int n, int x)
// {
//     // Base Case:- 
//     if(n == 0)
//         return -1;
//     // Recursive call
//     int ans = findlastIndex(arr+1,n-1,x);
//     // small calculation
//     if(ans == -1)
//     {
//         if(arr[0] == x)
//             return 0;
//         else 
//             return ans;
//     }
//     else{
//         return ans+1;
//     }
// }

// Approach 2:- Easy Approach
int findlastIndex(int *arr, int n, int x)
{
    if(n == 0)
        return -1;
    // Small Calculation
    if(arr[n-1] == x)
        return n-1;
    int ans = findlastIndex(arr,n-1,x);
    return ans;
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
    int ans = findlastIndex(arr,n,x);
    cout<<"Index:- "<<ans<<endl;
    delete []arr;
    return 0;
}