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
void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int current = arr[i];
        int j;
        for(j = i-1; j>=0; j--)
        {
            if(current < arr[j])
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = current;
        printArray(arr,n);
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
        insertionSort(arr,n);
        cout<<"Array After Sorting"<<endl;
        printArray(arr,n);

        i++;
    }

    return 0;
}