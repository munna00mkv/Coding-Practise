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
int linearSearch(int * arr, int n, int x)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
            break;
        }
    }
    if(i == n)
    {
        return -1;
    }
    return i;
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
    int index = linearSearch(arr,n,x);
    cout<<x<<" is present at "<<index<<" index"<<endl;
    delete []arr;
    return 0;
}