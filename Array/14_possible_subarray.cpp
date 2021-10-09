#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printSubarray(int *arr, int n)
{
    int count;
    int subarr[20];
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        count = 0;
        for(int j=i; j<n; j++)
        {
            if(arr[j] - arr[i] <= 1)
                subarr[count++] = arr[j];
            else 
                break;
        }
        // print that sub array
        for(int i=0; i<count; i++)
        {
            cout<<subarr[i]<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int n;
    cout<<"Enter size: "<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter Array Element"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Possible SubArray are: "<<endl;
    printSubarray(arr,n);
    return 0;
}