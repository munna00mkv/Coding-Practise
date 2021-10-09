#include <bits/stdc++.h>
using namespace std;
void printMatrix(int **matrix, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void transposeMatrix(int **matrix, int row, int col)
{
    int trans[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            trans[i][j] = matrix[j][i];
        }
    }
    cout << "Matrix after Transepose:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "Enter Row: " << endl;
    cin >> m;
    cout << "Enter Column: " << endl;
    cin >> n;
    cout << "Enter element of matrix:" << endl;
    int **matrix = new int *[m];
    for (int i = 0; i < m; i++)
    {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix Before Transpose:" << endl;
    printMatrix(matrix, m, n);
    transposeMatrix(matrix, m, n);
    delete[] matrix;
    return 0;
}