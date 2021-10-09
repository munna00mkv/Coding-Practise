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
void selectionSort(int arr[], int n)
{

    for(int i=0; i<n-1; i++)
    {
    // Find minimum element and index from array
    int min = arr[i];
    int min_index = i;
    for(int j = i+1; j<n; j++)
    {
        if(min > arr[j])
        {
            min = arr[j];
            min_index = j;
        }
    }
    // Swap
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
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
        cout<<"Enter Array Element"<<endl;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        cout<<"Array Before Sorting"<<endl;
        printArray(arr,n);
        cout<<"Sorting......"<<endl;
        selectionSort(arr,n);
        cout<<"Array After Sorting"<<endl;
        printArray(arr,n);

        i++;
    }

    return 0;
}