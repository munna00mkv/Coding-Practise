#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int m, n, sum ;
    cout << "Enter Row: " << endl;
    cin >> m;
    cout << "Enter Column: " << endl;
    cin >> n;
    cout << "Enter Element : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Array : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int j = 0; j < n; j++)
    {
        sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum = sum + arr[i][j];
        }
        cout<<"Sum "<<j+1<<" column: "<<sum<<endl;
    }
    return 0;
}