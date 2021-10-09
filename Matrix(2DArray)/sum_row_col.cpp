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
void printArray(int arr[][100], int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void rowWiseSum(int arr[][100], int m, int n)
{
    for(int i=0; i<m; i++)
    {
    int sum = 0;
    for(int j=0; j<n; j++)
    {
        sum = sum + arr[i][j];
    }
    cout<<"Sum of "<<i+1<<" Row: "<<sum<<endl;
    }
}
void columnWiseSum(int arr[][100], int m, int n)
{
for(int j=0; j<n; j++)
    {
    int sum = 0;
    for(int i=0; i<m; i++)
    {
        sum = sum + arr[i][j];
    }
    cout<<"Sum of "<<j+1<<" Column: "<<sum<<endl;
    }
}
int main()
{
    int arr[100][100];
    int m,n;
    cout<<"Enter Row: "<<endl; cin >> m;
    cout<<"Enter Column: "<<endl; cin >> n;
    cout<<"Enter Array Element: "<<endl;
    inputArray(arr,m,n);
    cout<<"Array: "<<endl;
    printArray(arr,m,n);
    cout<<"------Row Wise Sum------: "<<endl;
    rowWiseSum(arr,m,n);
    cout<<"------Column Wise Sum------: "<<endl;
    columnWiseSum(arr,m,n);
    return 0;
}