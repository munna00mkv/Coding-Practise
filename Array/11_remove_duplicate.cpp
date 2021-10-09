#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// without shifting
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
    cout<<"Array after: "<<endl;
    for(int i=0; i<index; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {8,7,8,6,7,6,9,8,9,5,5,4,3,3,4,5,6,4};
    int n = 18;
    // using shifting
    // for(int i=0; i<n; i++)
    // {
    //     for(int j = i+1; j<n;)
    //     {
    //         if(arr[i] != arr[j])
    //         {
    //             j++;
    //         }
         
    //         else{
    //             // Shift towards left
    //             for(int k=j; k<n; k++)
    //             {
    //                 arr[k] = arr[k+1];
    //             }
    //                n--;
    //         }
    //     }
    // }
    cout<<"Array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    removeDuplicate(arr,n);
    return 0;
}