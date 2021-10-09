#include<bits/stdc++.h>
using namespace std;
// Receving 2D matrix
void printMatrix(vector<vector<int>> matrix, int row, int col)
{
    cout<<"Your matrix is: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    int m;
    cout<<"Enter Row: "<<endl;
    cin >> m;
    int n;
    cout<<"Enter Column: "<<endl;
    cin >> n;
    // Declare a 2D matrix with m row and n column
    vector<vector<int>> matrix1(m,vector<int>(n));
    // Declare a 2D matrix of m x n with each value 0 
    vector<vector<int>> matrix2(m,vector<int>(n,0));
    // input matrix:- same as 2D Array[all operation are same as 2D array]
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> matrix1[i][j]; 
        }
    }
    printMatrix(matrix1,m,n);
    printMatrix(matrix2,m,n);
    return 0;
}