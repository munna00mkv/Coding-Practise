#include<bits/stdc++.h>
using namespace std;
void removeDuplicate(int arr[],int n)
{
    int index = 0;
    // Traverse array elem
    for(int i=0; i<n; i++)
    {
        int j;
        // check current elem with its previous equal or not
        for(j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
                break;
        }
        // if not equal then take this element in array
        if(j == i)
        {
            arr[index++] = arr[i];
        }
    }
    for(int i=0; i<index; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {1,1,2,3,4,2,3,4,5,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    removeDuplicate(arr,n);
    return 0;
}