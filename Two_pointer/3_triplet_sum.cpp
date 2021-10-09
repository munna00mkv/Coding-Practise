#include<bits/stdc++.h>
using namespace std;
// Time Complexity:- O(n^2)
void findTriplet(int arr[], int n)
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
            if(sum == 0)
            {
                cout<<"{ "<<arr[i]<<" "<<arr[l] <<" "<<arr[r]<<" }"<<endl;
                found = true;
                l++;
                r--;
                break;
            }
            else if(sum < 0)
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
    int arr[] = {0,-1,2,-3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findTriplet(arr,n);
    return 0;
}