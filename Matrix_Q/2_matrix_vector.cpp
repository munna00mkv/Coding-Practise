#include<bits/stdc++.h>
using namespace std;

// Matrix input using vector Row and column- both dynamic
void inputMatrix(vector<vector<int>> matrix,int row, int col)
{
    cout<<"Enter matrix element"<<endl;
    for(int i=0; i<row; i++)
    {
        vector<int> temp;
        for(int j=0; j<col; j++)
        {
            int elem;
            cin >> elem;
            temp.push_back(elem);
        }
        matrix.push_back(temp);
    }
}
//print matrix
void printMatrix(vector<vector<int>> matrix,int row, int col)
{
    cout<<"Matrix elem: "<<endl;
    cout<<matrix[0][0]<<endl;
}
int main()
{
    int row; // size of outer vector
    int col; // size of outer vector
    vector<vector<int>> matrix; // declare 2D Vector
    cout<<"Enter Row: "<<endl;
    cin >> row;
    cout<<"Enter Column: "<<endl;
    cin >> col;
    inputMatrix(matrix,row,col);
    printMatrix(matrix,row,col);

    return 0;
}