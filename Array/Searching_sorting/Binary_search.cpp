#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int x)
{
    int start, end, mid;
    start = 0;
    end = n -1;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(x == arr[mid])
        {
            return mid; // i.e element is found at mid index
        }
        else if(x < arr[mid])
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1; // i.e element is not found
}
int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin >> n;
    int arr[100];
    cout<<"Enter Array Element"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout<<"Enter element to be Searched"<<endl;
    cin >> x;
    int index = binarySearch(arr,n,x);
    if(index >= 0)
    {
        cout<<"Element is present at "<<index<<" index"<<endl;
    }
    else{
        cout<<"Element is not present in array"<<endl;
    }
    return 0;
}