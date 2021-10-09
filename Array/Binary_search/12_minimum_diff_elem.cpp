/*
Given a sorted array, find the element in the array which has minimum difference with the given number.
Ex:- 
arr[] = {1,3,8,10,12,15} key = 12, ans = 12 [key is present in array]
arr[] = {1,3,8,10,15} key = 12, ans = 10 [key is not present in array]
arr[] = {1,3,8,10,13} key = 12 ans = 13 [key is not prsent in array]

Explanation:- substract key from array we get
arr[]-12 = {11,9,4,2,0,3} // here minimum diff give key itself
           {11,9,4,2,3}  // here minimumdiff give left neigbour of key
           {11,9,4,2,1}  // here minimum diff give right neighbour of key
// Logic:- [Binary search]
There are two way:
Way 1:-[long process] if key is present then simply retuen key 
        if not present then find it floor and ceil then return that value who give minimum diff
Way 2:-[small process] if key is present then simply return key
        if not prsent so  minimum diff give its next or previous neighbour
        as we dry-run binary search at the end of loop when key not found then
        our end point to prev neighbour of key and start next neighbour
        so simply find diff with prev and next and check who give us minimum absoulate diff 
        and return accordingly.

*/
#include<bits/stdc++.h>
using namespace std;
// using binary search
int findElem(vector<int> &arr, int key)
{
    int start = 0;
    int end = arr.size()-1;
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(key == arr[mid])
        {
            return arr[mid]; // if key present then it will give minimum diff
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    // At here end- prev neighbour of key
    //           start- next neighbour of key 
    int diffWithPrev = abs(arr[end] - key);
    int diffWithNext = abs(arr[start] - key);
    if(diffWithPrev < diffWithNext)
    {
        return arr[end];
    }
    else{
        return arr[start];
    }

}
int main()
{
    vector<int> vec;
    int n;
    cout << "Enter Array Size:" << endl;
    cin >> n;
    cout << "Enter Array element" << endl;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        vec.push_back(elem);
    }
    int key;
    cout<<"Enter element to be searched"<<endl;
    cin >> key;
    int ans = findElem(vec,key);
    cout<<"Element: "<<ans<<endl;
    return 0;
}