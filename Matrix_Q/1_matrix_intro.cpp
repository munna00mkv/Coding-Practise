#include<bits/stdc++.h>
using namespace std;
// passing matrix in function
void matrixInput(int matrix[][100], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> matrix[i][j];
        }
    }
}
void printMatrixRowWise(int matrix[][100], int row, int col)
{
    cout<<"Row Wise: "<<endl;
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

void printMatrixColumnWise(int matrix[][100], int row, int col)
{
    cout<<"Column Wise: "<<endl;
    for(int j=0; j<col; j++)
    {
        for(int i=0; i<row; i++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    int m, n;
    cout<<"Enter Row: "<<endl;
    cin >> m;
    cout<<"Enter Column: "<<endl;
    cin >> n;
    // Declare matrix
    int matrix[100][100];  // like normal array // we can also use vector

    // input matrix
    cout<<"Enter Matrix element:"<<endl;
    matrixInput(matrix,m,n);
    // output marix:- Row wise print
    printMatrixRowWise(matrix,m,n);
    // output matrix:- Column wise print
    printMatrixColumnWise(matrix,m,n);
    return 0;
}