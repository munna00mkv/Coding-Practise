#include <iostream>
#include <climits>
using namespace std;
void inputArray(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void largest(int arr[][100], int m, int n)
{
    // Logic
    int largest_elem = INT_MIN, largest_index = 0;
    bool atRow = false;
    int sum_row, sum_col;
    // calculating sum in each row and finding largest of them
    for (int i = 0; i < m; i++)
    {
        sum_row = 0;
        for (int j = 0; j < n; j++)
        {
            sum_row += arr[i][j];
        }
        if (sum_row > largest_elem)
        {
            largest_elem = sum_row;
            largest_index = i;
            atRow = true;
        }
    }

    // calculating sum in each column and finding largest of them
    for (int j = 0; j < n; j++)
    {
        sum_col = 0;
        for (int i = 0; i < m; i++)
        {
            sum_col += arr[i][j];
        }
        if (sum_col > largest_elem)
        {
            largest_elem = sum_col;
            largest_index = j;
            atRow = false;
        }
    }

    if (atRow)
    {
        cout << "Row : " << largest_index << " " << largest_elem << endl;
    }
    else
    {
        cout << "Column : " << largest_index << " " << largest_elem << endl;
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
        largest(arr,m,n);
        i++;
    }
    return 0;
}