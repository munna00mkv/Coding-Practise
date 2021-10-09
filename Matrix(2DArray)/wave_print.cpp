#include<iostream>
using namespace std;
void inputArray(int arr[][100], int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void wavePrint(int arr[][100],int m, int n)
{
    for(int j=0; j<n; j++)
    {
        if(j % 2 == 0)
        {
            for(int i=0; i<m; i++)
            {
                cout<<arr[i][j] << " ";
            }
        }
        else{
            for(int i = m-1; i>=0; i--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
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
        cout<<"The Sin wave print"<<endl;
        wavePrint(arr,m,n);
        cout<<endl;
        i++;
    }
    return 0;
}