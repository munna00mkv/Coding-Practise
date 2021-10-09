#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sumArray(int arr[], int n)
{
    cout<<n<<" ";
    // Base case when our size is 0 then return 0
    if(n == 0)
        return 0;
    int previous_arr_sum = sumArray(arr, n-1);
    int sum = arr[n-1] + previous_arr_sum;
    return sum;
   
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
    
    int sum = sumArray(arr,n);
    cout<<endl;
    cout<<"Sum = "<<sum<<endl;
    delete []arr;
    return 0;
}