#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, k;
    cin >> N >> k;
    vector<int> arr;
    long long sum = 0;
    for(int i=0; i<N; i++)
    {
        int elem;
        cin >> elem;
        arr.push_back(elem);
        sum += arr[i];
    }
    for(int i=0; i<N; i++)
    {
        cout<<sum-arr[i]<<" ";
    }
    return 0;
}