#include<iostream>
using namespace std;
int sum(int * arr, int size)
{
    cout<<"Size of Array in sum : "<<sizeof(arr)<<endl;
    cout<<"Receiving Base Address: "<<arr<<endl;
    int ans = 0;
    for(int i=0; i<size; i++)
    {
        ans += arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    cout<<"Size of Array: "<<sizeof(arr)<<endl;
    cout<<"Base Address: "<<arr<<endl;
    cout<<"Sum "<<sum(arr,5)<<endl;
    return 0;
}