#include<bits/stdc++.h>
using namespace std;
void findFour(int *arr, int n, int x)
{
    sort(arr,arr+n);
    bool found = false;
    for(int i=0; i<n-3; i++)
    {
        for(int j=i+1; j<n-2; j++)
        {
            int l = j+1;
            int r = n-1;
            while(l < r)
            {
                int sum = arr[i]+arr[j]+arr[l]+arr[r];
                if(sum == x)
                {
                    cout<<"{ "<<arr[i]<<", "<<arr[j]<<", "<<arr[l]<<", "<<arr[r]<<" }"<<endl;
                    found = true;
                    l++; r--;
                    break;
                }
                else if(sum < x)
                {
                    l++;
                }
                else{
                    r--;
                }
            }
        }
    }
    if(found == false)
    {
        cout<<"Not Found"<<endl;
    }
}
int main()
{
    int arr[] = {1, 4, 45, 6, 10, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 21;
    findFour(arr,n,x);
    return 0;
}