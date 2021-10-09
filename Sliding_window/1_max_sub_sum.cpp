#include<bits/stdc++.h>
using namespace std;
int maxSubarray(int *arr, int n, int k)
{
    int i = 0, j = 0;
    int max_sum = INT_MIN;
    int sum = 0;
    while(j < n)
    {
        sum += arr[j];
        if(j-i+1 < k)
        {
            j++;
        }
        else if(j-i+1 == k)
        {
            max_sum = max(sum,max_sum);
            sum -= arr[i];
            i++;
            j++;
        }
    }
    return max_sum;

}
int main()
{
    int arr[] = {2,3,1,5,6,3,4,9,8,5,6,7,5,8,9,8};
    int k = 4;
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = maxSubarray(arr,size,k);
    cout<<"Max Sum: "<<ans<<endl;
    return 0;
}