#include<iostream>
using namespace std;
int main()
{
    
    int m,n,a,b,k;
    cout<<"Enter Size: "<<endl; cin >> n;
    int arr[n] = {0};
    cout<<"Enter Operations: "<<endl; cin >> m;
    for(int i=0; i<m; i++)
    {
        cout<<"Enter a"<<endl; cin >> a;
        cout<<"Enter b"<<endl; cin >> b;
        cout<<"Enter k"<<endl; cin >> k;
        for(int j = a-1; j<= b-1; j++)
        {
            arr[j] += k;
        }
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<"Max = "<<max<<endl;

    return 0;
}