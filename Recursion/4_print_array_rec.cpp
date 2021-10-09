#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// void printArray(int arr[], int n, int i)
// {
//     // Base Case
//     if(i == n)
//     {
//         cout<<endl;
//         return;
//     }
//     // Calculation
//     cout<<arr[i]<<" ";
//     i++;
//     // Calling itself 
//     printArray(arr,n,i);
// }

void printArray(int arr[], int n)
{
    // cout<<n<<endl;
    if(n == 0)
        return;
    cout<<arr[0]<<" "; // Normal order
    printArray(arr+1,n-1);
    // cout<<arr[0]<<" "; // reverse Order
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
    printArray(arr,n);
    // printArray(arr,n,0);

    delete []arr;
    return 0;
}