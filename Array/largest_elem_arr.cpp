#include<iostream>
#include<climits>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int lergest(int arr[], int n)
{
    int max  = INT_MIN;  // i.e max = -32768
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
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
    int m = lergest(arr,n);
    cout<<"Largest Element of Array is "<<m<<endl;
    
}