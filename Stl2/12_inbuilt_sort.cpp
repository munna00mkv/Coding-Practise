#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size: "<<endl;
    cin >> n;
    int arr[n]; // Array of size n
    vector<int> vec(n); // vector of size n
    cout<<"Enter n element"<<endl;
    for(int i=0; i<n; i++)
    {
        // cin >> arr[i];
        cin >> vec[i];
    }
    // This sort is called Introsort , Time complexity: - O(nlogn)
    // i.e introsort = insertion sort + heap sort + quick sort
    // sort(start_address,next address of last elem) // O(nlogn) // sort in accending order
    // sort array
    // sort(arr+1, arr+4);// sort from index 1 to index 3
    // sort(arr, arr+n); // sort whole array i.e index 0 to n-1
    // sort(arr,arr+n,greater<int>()) // sort in descending order
    // sort vector
    // sort(start_iter,end_iter)
    sort(vec.begin(),vec.end()); // sort in ascending order
    sort(vec.begin(),vec.end(),greater<int>()); // sort in descending order
    cout<<"vector after sort"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    // cout<<"array after sort"<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

  


    return 0;
}