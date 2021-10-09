#include<bits/stdc++.h>
#define MAX_SIZE 100
using namespace std;
// Time Complexity :- O(n)
int pairSum(int *arr,int n, int x)
{
    int i = 0;
    int j = n-1;
    while(i < j)
    {
        if(arr[i]+arr[j] == x)
            return 1;
        else if(arr[i]+arr[j] < x)
            i++;
        else 
            j--;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter Size:"<<endl;
    cin >> n;
    int arr[MAX_SIZE];
    cout<<"Enter array element"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter x"<<endl;
    int x;
    cin >> x;
    int ans = pairSum(arr,n,x);
    if(ans)
    {
        cout<<"Exist"<<endl;
    }
    else{
        cout<<"Not Exist"<<endl;
    }
    return 0;
}