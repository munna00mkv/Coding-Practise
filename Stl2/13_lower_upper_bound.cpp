/*
both function work on sorted array
syntex:- lower_bound(start_address,next address of last elem, x)
         return location of that x if available else return location of next greater of x
         upper_bound(start_address,next address of last elem, x)
         return location of next greater of x  

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size: "<<endl;
    cin >> n;
    set<int> s;
    for(int i=0; i<n; i++)
    {
        int elem;
        cin >> elem;
        s.insert(elem);
    }
    // lower and upper bound in set,map,pair
    // Time compleixty:- O(n), because it use tree
    // auto it = lower_bound(s.begin(),s.end(),6); // Not use like this it will give you TLE because it is O(n
    // auto it = s.lower_bound(6); // use like this in case of map,set,pair
    auto it = s.upper_bound(7); 
    cout<<*it<<endl;
    // in case of map we can use lower and upper only on key 

    // int arr[n]; // Array of size n
    // vector<int> vec(n); // vector of size n
    // cout<<"Enter n element"<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     // cin >> arr[i];
    //     cin >> vec[i];
    // }

    // for(int i=0; i<n; i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // lower and upper bound on array
    // sort(arr,arr+n);

    // Time complexity:- O(logn) , because it use binary search internally
    // // int *ptr = lower_bound(arr,arr+n,26); 
    // int *ptr = upper_bound(arr,arr+n,5);
    // if(ptr == arr+n)
    //  {   cout<<"Not found"<<endl;
    //      return 0;
    //  }
    // cout<<*ptr<<endl;


    // lower and upper bound on vector
    // Time complexity:- O(logn),  because it use binary search internally
    // sort(vec.begin(),vec.end());
    // // auto it = lower_bound(vec.begin(),vec.end(),6); 
    // auto it = upper_bound(vec.begin(),vec.end(),8);
    // if(it == vec.end())
    // {
    //     cout<<"Not found"<<endl;
    //     return 0;
    // }
    // cout<<*it<<endl;

    
    return 0;
}