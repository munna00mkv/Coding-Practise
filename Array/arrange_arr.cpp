#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void approach1(int arr[], int n)
{
    int n1 = (n - 1) / 2;
    int n2 = n1 + 1;
    int val = 1;
    for (int i = 0; i <= n1; i++)
    {
        arr[i] = val;
        val += 2;
    }
    if (n % 2 == 0)
    {
        val = n;
    }
    else
    {
        val = n - 1;
    }
    for (int i = n2; i < n; i++)
    {
        arr[i] = val;
        val -= 2;
    }
}
void approach2(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int val = 1;
    while (s <= e)
    {
        if (s == e)
        {
            arr[s] = val;
            s++;
            e--;
        }
        else
        {
            arr[s] = val;
            val++;
            arr[e] = val;
            val++;
            s++;
            e--;
        }
    }
}
int main()
{
    int t;
    cout << "Enter Number of Test Cases" << endl;
    cin >> t;
    int i = 1;
    while (i <= t)
    {
        int n;
        int arr[100];
        cout << "Enter Size Of Array" << endl;
        cin >> n;

        //approach1(arr,n);
        approach2(arr, n);
        printArray(arr, n);
        i++;
    }

    return 0;
}