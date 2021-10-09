/*Given A  sorted Array in Accending Order and a key check key is present in arr or not*/
#include<bits/stdc++.h>
using namespace std;
void printArray(int * arr, int n)
{
    cout<<"Array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int binarySearch(int *arr, int start, int end, int x)
{
    int mid;
    int res = -1;
    while(start <= end)
    {
        mid = (start + end)/2;       // or we can write like this to avoid integer overflow mid = start + (end-start)/2
        if(x == arr[mid])
        {
            res = mid; // if present at mid then store it in result beacuse it may be an answer and check in right sub array
            start = mid+1;
        }
        else if(x > arr[mid])
        {
            start = mid+1;
        }
        else if(x < arr[mid])
        {
            end = mid - 1;
        }
    }
    // if our control reach here then elemnt is not present in Array
    return res;
}
int main()
{
    int n;
    cout<<"Enter Size Of Array: "; cin >> n;
    int * arr = new int[n];
    cout<<"Enter Array Element: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout<<"Enter Elment to be Search: ";
    cin >> x;
    printArray(arr,n);
    int index = binarySearch(arr,0,n-1,x);
    (index == -1) ? cout<<"Element is not present in Array":cout<<x<<" is present at "<<index<<" index"<<endl;
    
    delete []arr;
    return 0;
}