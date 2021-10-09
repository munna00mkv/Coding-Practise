#include<bits/stdc++.h>
using namespace std;
// Time Complexity:- O(n^2)
void findTriplet(int arr[], int n, int x)
{
    bool found = false;
    sort(arr,arr+n);
    for(int i=0; i<n-1; i++)
    {
        int l = i+1;
        int r = n-1;
        while(l < r)
        {
            int sum = arr[i] + arr[l] + arr[r];
            if(sum == x)
            {
                cout<<"{ "<<arr[i]<<", "<<arr[l] <<", "<<arr[r]<<" }"<<endl;
                found = true;
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
    if(found == false)
    {
        cout<<"Not Found"<<endl;
    }

}
int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8 };
    int x = 22;
    int n = sizeof(arr)/sizeof(arr[0]);
    findTriplet(arr,n,x);
    return 0;
}