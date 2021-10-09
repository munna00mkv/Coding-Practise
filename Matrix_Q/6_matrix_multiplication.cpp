#include <bits/stdc++.h>
using namespace std;
// This will work for eihter square or rectangular matrix
// Time complexity:- O(n^3), Space Complexity:- O(row1 * col2)
void multiplyMatrix(int **mat1, int **mat2, int row1, int col1, int row2, int col2)
{
    int result[row1][col2];
    cout<<"Result Matrix: "<<endl;
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col2; j++)
        {
            result[i][j] = 0;
            for(int k=0; k<col1; k++)
            {
                result[i][j] += (mat1[i][k] * mat2[k][j]);
            }
        }
    }

    // print multiply matrix
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col2; j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int row1, row2, col1, col2;
    cout << "Enter Row of First Matrix: " << endl;
    cin >> row1;
    cout << "Enter Column of First Matrix: " << endl;
    cin >> col1;
    cout << "Enter element of First Matrix: " << endl;
    int **mat1 = new int *[row1];
    for (int i = 0; i < row1; i++)
    {
        mat1[i] = new int[col1];
        for (int j = 0; j < col1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter Row of Second Matrix: " << endl;
    cin >> row2;
    cout << "Enter Column of Second Matrix: " << endl;
    cin >> col2;
    cout << "Enter element of Second Matrix: " << endl;
    int **mat2 = new int *[row2];
    for (int i = 0; i < row2; i++)
    {
        mat2[i] = new int[col2];
        for (int j = 0; j < col2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    if(col1 == row2)
    {
        multiplyMatrix(mat1,mat2,row1,col1,row2,col2);
    }
    else{
        cout<<"Multiplication is not possible"<<endl;
    }

    delete []mat1;
    delete []mat2;
    return 0;
}