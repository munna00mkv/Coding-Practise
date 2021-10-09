#include <bits/stdc++.h>
using namespace std;
void matrixInput(int matrix[][100], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
}
void printMatrix(int matrix[][100], int row, int col)
{
    cout << "Row Wise: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void rowWiseSum(int matrix[][100], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        int row_sum = 0;
        for(int j=0; j<col; j++)
        {
            row_sum += matrix[i][j];
        }
        cout<<"Sum of "<<i+1<<" Row: "<<row_sum<<endl;
    }
}
void columnWiseSum(int matrix[][100], int row, int col)
{
    for(int j=0; j<col; j++)
    {
        int col_sum = 0;
        for(int i=0; i<row; i++)
        {
            col_sum += matrix[i][j];
        }
        cout<<"Sum of "<<j+1<<" column: "<<col_sum<<endl;
    }
}
int main()
{
    int m, n;
    cout << "Enter Row: " << endl;
    cin >> m;
    cout << "Enter Column: " << endl;
    cin >> n;
    int matrix[100][100]; // fixed size matrix
    matrixInput(matrix,m,n);
    printMatrix(matrix,m,n);
    rowWiseSum(matrix,m,n);
    columnWiseSum(matrix,m,n);

    return 0;
}