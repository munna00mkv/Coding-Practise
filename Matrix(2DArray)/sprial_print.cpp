#include<iostream>
using namespace std;
void inputArray(int arr[][100], int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
}
int main()
{
    int t, i = 1;
    cout << "Enter Test Cases: " << endl;
    cin >> t;
    while (i <= t)
    {
        int arr[100][100];
        int m, n;
        cout << "Enter Row: " << endl;
        cin >> m;
        cout << "Enter Column: " << endl;
        cin >> n;
        cout << "Enter Array Elements: " << endl;
        inputArray(arr, m, n);

        // sprial print
        int count = 0, rs = 0, re = m-1, cs = 0, ce = n-1;
        while(count < m * n)
        {
            // print 1st row
            for(int j = cs; j<=ce; j++)
            {
                cout<<arr[rs][j]<<" ";
                count++;
            }
            rs++;
            // print last column
            for(int i = rs; i<=re; i++)
            {
                cout<<arr[i][ce]<<" ";
                count++;
            }
            ce--;
            // print last row
            for(int j = ce; j>=cs; j--)
            {
                cout<<arr[re][j]<<" ";
                count++;
            }
            re--;
            // print first column
            for(int i = re; i>=rs; i--)
            {
                cout<<arr[i][cs]<<" ";
                count++;
            }
            cs++;

            
        }
        i++;
    }
    return 0;
}