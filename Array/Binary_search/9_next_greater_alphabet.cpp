/*
Given an array of alphabet which is in accending order, find its next greater
alphabet of given key. i.e find the smallest letter in array which is greater
then given key
input:- arr[] = {a,b,c,d,f,h,i}, key = f ,ans = h
        arr[] = {a,b,d,f,f,h}, key = f, ans = h

Logic:- use binary search if arr[mid] > key then it may be a possible candidate so store it in 
a var then search in left sub array because we have to find smallest.
if a[mid] <= key - then search in right sub array
*/

#include <bits/stdc++.h>
using namespace std;

char nextGreater(vector<char> &arr, char key)
{
    int start = 0;
    int end = arr.size() - 1;
    char res = '%';
    while (start <= end)
    {
        int mid = start + (end - start);
        if (arr[mid] > key)
        {
            res = arr[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return res;
}
int main()
{
    int n;
    cout << "Enter size of Array" << endl;
    cin >> n;
    vector<char> vec;
    cout << "Enter Array element" << endl;
    for (int i = 0; i < n; i++)
    {
        char elem;
        cin >> elem;
        vec.push_back(elem);
    }
    char key;
    cout << "Enter key" << endl;
    cin >> key;
    char ans = nextGreater(vec, key);
    if (ans != '%')
    {
        cout << "Next Greater of " << key << " is " << ans << endl;
    }
    else
    {
        cout << "Next greater is not avilable" << endl;
    }

    return 0;
}
