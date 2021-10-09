/*
Given an n x n matrix and a number x, find the position of x in the matrix
if it is present in it. otherwise, print "Not found". in the given matrix, every row and column
is sorted in increasing order. the designed algorithm should have linear time complexity

Example:- mat[4][4] = { {10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}
                    }
Logic:- let mid is mat[0][n-1], compare it with x if equal then simply return (i,j)
        if not equal then we can either go left side(j--) or bottom(i++)
Edge case:- no need to search at certain condition
1.
when n = 0
return -1 // not found
2.
Here we can observe smallest element is mat[0][0]
and largset element is mat[n-1][n-1], as matrix is sorted both row and colm wise
when x < smallest and x > largest
then x will never be present in matrix so return -1

*/
#include <bits/stdc++.h>
using namespace std;
int arr[4][4];
pair<int, int> matrixBinarySearch(int n, int key)
{
    pair<int, int> p;
    int smallest = arr[0][0];
    int largest = arr[n - 1][n - 1];
    // Edge case:- no need to search if both condition satisfy
    if (n == 0)
    {
        p = {-1, -1};
        return p;
    }
    if (key < smallest || key > largest)
    {
        p = {-1, -1};
        return p;
    }
    // except edge case : here search
    int i = 0;
    int j = n - 1;
    while (i < n && j >= 0) // if i > n and j < 0 then stop search otherwise search
    {
        if (arr[i][j] == key)
        {
            p = {i, j};
            return p;
        }
        else if (key < arr[i][j])
        {
            j--; // left side
        }
        else
        {
            i++; // bottom side
        }
    }
    p = {-1, -1}; // if not found
    return p;
}
int main()
{
    int n;
    cout << "Enter size" << endl;
    cin >> n;
    cout << "Enter " << n << " x " << n << " matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cout << "Enter key to be searched" << endl;
    cin >> key;
    pair<int, int> ans = matrixBinarySearch(n, key);
    cout << "Index: "
         << "( " << ans.first << ", " << ans.second << " )" << endl;
    return 0;
}