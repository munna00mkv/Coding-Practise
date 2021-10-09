/*Binary search:- only applicabe with sorted array(either accending or deccending order)
Time complexity:- O(logn) , Because each time we are dicarding half array

Note:- To find mid you can use two way:-[Always use 2 way to avoid overflow]
1. mid = (start + end)/2; [But here is problem, it can't handle overflow]
Ex:- as we know max value of int (10^9)
what happen when start and end is nearest 10^9 [let assume 10^8]
then mid = (start + end) = 10^8 + 10 ^8 > 10^9 [so it will give us int overflow]

2. mid  = start + (end-start)/2; [it is same as 1, take lcm then mid = (2*start + end - start)/2 = (start + end)/2]
in this case when start = 10^8 , end = 10^8
mid = 10^8 + (10^8 - 10^8)/2 = 10^8 - (0)/2 = 10^8 < 10^9, so it will handle overflow.
*/
#include<bits/stdc++.h>
using namespace std;

// function for binary search for accending order
// int binarySearchForAsc(vector<int> & vec, int elem)
// {
//     int size = vec.size();
//     int start = 0; // start pointer
//     int end = size-1; // end pointer
//     while(start <= end) // search till
//     {
//         int mid = start + (end-start)/2; // finding mid
//         if(vec[mid] == elem)
//         {
//             return mid; // return that index if found
//         }
//         else if(elem > vec[mid]) // present in right array
//         {
//             start = mid + 1;
//         }
//         else{  // present in left array
//             end = mid - 1;
//         }

//     }
//     return -1; // if not present in array
// }

// function for binary search for Descending order
int binarySearchForDesc(vector<int> & vec, int elem)
{
    int size = vec.size();
    int start = 0; // start pointer
    int end = size-1; // end pointer
    while(start <= end) // search till
    {
        int mid = start + (end-start)/2; // finding mid
        if(vec[mid] == elem)
        {
            return mid; // return that index if found
        }
        else if(elem > vec[mid]) // present in left array
        {
            end = mid - 1;
        }
        else{  // present in right array
            start = mid + 1;
        }

    }
    return -1; // if not present in array
}
int main()
{
    // vector<int> vec = {1,2,3,4,5,6,7,8,9}; // asc order
    vector<int> vec = {9,8,7,6,5,4,3,2,1}; // desc order
    int elem = 1; // elem to be search
    // int ans = binarySearchForAsc(vec,elem);
    // if(ans == -1)
    //     cout<<"Elment is not present in array"<<endl;
    // else 
    //     cout<<elem<<" is present at index "<<ans<<endl;

    int ans = binarySearchForDesc(vec,elem);
    if(ans == -1)
        cout<<"Elment is not present in array"<<endl;
    else 
        cout<<elem<<" is present at index "<<ans<<endl;

    return 0;
}