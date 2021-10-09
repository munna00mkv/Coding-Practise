#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// int findAllIndex(int *arr,int n,int x, int *output)
// {
//     if(n==0)
//         return 0;
//     int ans = findAllIndex(arr+1, n-1, x,output);
//     if(arr[0] == x)
//     {
//         for(int i = ans-1; i>=0; i--)
//         {
//             output[i+1] = output[i] + 1;
//         }
//         output[0] = 0;
//         ans++;
//     }
//     else{
//          for(int i = ans-1; i>=0; i--)
//         {
//             output[i] = output[i] + 1;
//         }
//     }
//     return ans;
// }

// Approach 2:- 
int find(int *arr, int n, int x, int * output)
{
    if(n == 0)
        return 0;
    int ans = find(arr,n-1,x,output);
    if(arr[n-1] == x)
    {
        output[ans] = n-1;
        ans++;
        return ans;
    }
    else{
        return ans;
    }
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
    int output[10];
    // int ans = findAllIndex(arr,n,x,output);
    int ans = find(arr,n,x,output);
    cout<<"Size:- "<<ans<<endl;
    // print our output Array
    for(int i=0; i<ans; i++)
    {
        cout<<output[i]<<" ";
    }
    delete []arr;
    return 0;
}