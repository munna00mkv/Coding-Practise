#include<iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int sum(int arr[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter Size Of Array:"<<endl; cin >> n;
    int arr[100];
    cout<<"Enter "<<n<<" Element of Array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    printArray(arr, n);
    int s  = sum(arr,n);
    cout<<"sum is "<<s<<endl;
}