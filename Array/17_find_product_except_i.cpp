/*
arr = [1,2,3,4]
output = [24,12,8,6]
i.e find product of each elem except that index without using division operator
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of Array: "<<endl;
    cin >> n;
    int arr[n];
    cout<<"enter Array Element"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    // Right array:- store product of right element of that index
    int rightArr[n];
    // Filling right array
    rightArr[n-1] = 1; // Because last element has not right elem
    // now filling right arr
    for(int i=n-2; i>=0; i--)
    {
        rightArr[i] = rightArr[i+1] * arr[i+1];
    }
    // Left array:- store product of left element of that index
    int leftArr[n];
    leftArr[0] = 1; // because no left eleme for first index
    // filling left array
    for(int i=1; i<n; i++)
    {
        leftArr[i] = leftArr[i-1] * arr[i-1];
    }

    // combining left and right array to get result
    cout<<"output is: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<rightArr[i]*leftArr[i]<<" ";
    }
    cout<<endl;
    return 0;
}