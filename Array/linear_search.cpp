#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int t;
    cout << "Enter Number of Test Cases" << endl;
    cin >> t;
    int i = 1;
    while (i <= t)
    {
        int n, index, x;
        int arr[100];
        cout << "Enter Size Of Array" << endl;
        cin >> n;
        cout << "Enter Array Element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter Element to be Find" << endl;
        cin >> x;

        index = LinearSearch(arr, n, x);
        cout << x << " is Present at " << index << endl;
        i++;
    }

    return 0;
}