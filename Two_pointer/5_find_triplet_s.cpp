#include <bits/stdc++.h>
using namespace std;
// Time Complexity:- O(n^2)
void findTriplet(int arr[], int n)
{
    bool found = false;
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
        int l = 0, r = i - 1;
        while (l < r)
        {
            if (arr[l] + arr[r] == arr[i])
            {
                cout << "{ " << arr[i] << ", " << arr[l] << ", " << arr[r] << " }" << endl;
                found = true;
                break;
            }
            else if(arr[l]+arr[r] < arr[i])
            {
                l++;
            }
            else{
                r--;
            }
        }
    }
    if (found == false)
    {
        cout << "Not Found" << endl;
    }
}
int main()
{
    int arr[] = { 5, 32, 1, 7, 10, 50, 19, 21, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findTriplet(arr, n);
    return 0;
}