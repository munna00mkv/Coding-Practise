#include<bits/stdc++.h>
using namespace std;
// Receive matrix in double pointer, because it it has address of each pointer
void printMatrix(int **matrix, int row, int col)
{
    cout<<"Matrix is: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int m,n;
    cout<<"Enter Row: "<<endl;
    cin >> m;
    cout<<"Enter Column: "<<endl;
    cin >> n;
    cout<<"Enter Matrix element"<<endl;
    // Creating dynamic matrix of m x n
    int ** matrix = new int*[m]; // array that store address of m array
    for(int i=0; i<m; i++)
    {
        // creating individual row of size n(column)
        // array of size n
        matrix[i] = new int[n]; // same as *(matrix + i) = new int[n];
        // input element in each array
        for(int j=0; j<n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // passing 2D Dynamic array to function
    printMatrix(matrix,m,n);

    // Not forgot to delete address that is in heap
    delete []matrix; // it will delete address that matrix is pointing to // not delete pointer itself

    return 0;
}