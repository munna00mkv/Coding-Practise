#include<bits/stdc++.h>
#define MAX_SIZE 100
using namespace std;
void closetPair(int *arr1, int *arr2, int m, int n, int x)
{
    int i = 0;
    int j = n-1;
    int res_f , res_s;
    int min = INT_MAX;
    while(i < m && j >= 0)
    {
        int diff = abs(arr1[i]+arr2[j]-x);
        if(diff < min)
        {
            res_f = i;
            res_s = j;
            min = diff;
        }
        if(arr1[i] + arr2[j] < x)
        {
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"Closet is: "<<arr1[res_f]<<" "<<arr2[res_s]<<endl;
}
int main()
{
    int m;
    cout<<"Enter size of First array: "<<endl;
    cin >> m;
    int arr1[MAX_SIZE];
    cout<<"Enter First array: "<<endl;
    for(int i=0; i<m; i++)
    {
        cin >> arr1[i];
    }
    int n;
    cout<<"Enter Size of Second Array"<<endl;
    cin >> n;
    int arr2[MAX_SIZE];
    cout<<"Enter Second array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr2[i];
    }
    int x;
    cout<<"Enter x"<<endl;
    cin >> x;
    closetPair(arr1,arr2,m,n,x);
    return 0;
}