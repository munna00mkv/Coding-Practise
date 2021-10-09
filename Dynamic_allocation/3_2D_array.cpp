#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter Row: "<<endl; cin >> m;
    cout<<"Enter Column: "<<endl; cin >> n;

    int ** p = new int * [m]; // Array of int*

    for(int i=0; i<m; i++)
    {
       p[i] = new int[n]; // creating ith Row (1D array)
       for(int j=0; j<n; j++)
       {
           cin >> p[i][j]; // Taking input for each Row
       }
    }

    // printing Value
    cout<<"Elments: "<<endl;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

     // Printing Address of ith Row
    for(int i=0; i<m; i++)
    {
        cout<<"Address of "<<i+1<<" Row: "<<*(p+i)<<endl;
    }
     // printing Address of ith element of ith 1D Array

    for(int i=0; i<m; i++)
    {
        cout<<"Address of "<<i+1<<" th Row of 1st Element: "<<p+i<<endl;
    }

    // Free Memory Space

    for(int i=0; i<m; i++)
    {
        delete [] p[i]; // deleting ith Row (i.e 1D Array)
    }
    delete [] p; // Delete int* Array
    return 0;
}