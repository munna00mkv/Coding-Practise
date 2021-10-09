#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"Enter Size: "<<endl;
    cin >> n;
    int *ptr = arr;
    cout<<"Enter Elements : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<"You Enterd: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    return 0;
}