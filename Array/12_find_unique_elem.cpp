#include<iostream>
using namespace std;

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
    cout<<"Array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Finding Unique Element and index
    int elem, index;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
                break;
            else{
                elem = arr[i];
                index = i;
                
            }
        }
        cout<<"Unique elem is "<<elem<<" at Index "<<index<<endl;
    }
    
    delete []arr;
    return 0;
}