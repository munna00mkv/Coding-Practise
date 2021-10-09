/*
Logic:- take 4 variable that is pointing start row, end row ,start column, end column
take four loop[iterate these four loop till all element is not printed i.e- (rs<re && cs <ce)]
first loop - print element of first row from start to end
second loop- print element of last column from top-1 to bottom
third loop- print element of last row from end-1 to start
fourth loop- print element of first column from bottom+1 to top
*/
#include<bits/stdc++.h>
using namespace std;
void printSprial(int ** matrix, int m, int n)
{
    int re,rs,cs,ce;
    rs = 0; // pointing to start row 
    re = m-1; // pointing to end row
    cs = 0; // pointing to start column
    ce = n-1; // pointing to end column
    while(rs < re && cs < ce)
    {
        // print first row till ce
        for(int i=cs; i<=ce; i++)
        {
            cout<<matrix[rs][i]<<" ";
        }
        rs++; // increase row start
        // print last column from top to bottom
        for(int i = rs; i<=re; i++)
        {
            cout<<matrix[i][ce]<<" ";
        }
        ce--; // decrease column end
        // print last row from right to left
        for(int i=ce; i>=cs; i--)
        {
            cout<<matrix[re][i]<<" ";
        }
        re--; // Decrease last row
        // print first column from bottom to top
        for(int i=re; i>=rs; i--)
        {
            cout<<matrix[i][cs]<<" ";
        }
        cs++; // increase column start

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
    printSprial(matrix,m,n);
    delete[] matrix;
    return 0;
}