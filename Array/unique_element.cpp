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
int unique(int arr[], int n)
{
    bool isUnique;
    for (int i = 0; i < n; i++)
    {
        isUnique = true; // lets assume element at ith index is unique
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue; // skip to check current element
            }
            if (arr[i] == arr[j])
            {
                isUnique = false; // i.e ith element is not unique
                break;
            }
            
        }
        if(isUnique)
        {
            return arr[i];
        }
        
    }
    return -1; // necessary to return at end of function
}
int main()
{
    int t, i = 1;
    cout << "Enter Number of Test cases" << endl;
    cin >> t;
    while (i <= t)
    {
        int n;
        cout << "Enter Size Of Array:" << endl;
        cin >> n;
        int arr[100];
        cout << "Enter " << n << " Element of Array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        printArray(arr, n);
        int u = unique(arr, n);
        cout<<"Unique element is "<<u<<endl;
        i++;
    }
    return 0;
}