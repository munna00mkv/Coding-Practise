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
void bubbleSort(int arr[], int n)
{
    // int com = 0; // to count total comparision
    bool isSorted;
    for(int i=0; i<n-1; i++)
    {
        isSorted = true;  // lets assusme intialy our array is sorted for ith round
    // for comparision
    for(int j=0; j<n-1-i; j++) // each time our comparision is less by ith round
    {
        if(arr[j] > arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            isSorted = false;  // if comparision is done then array is not sorted
        }
       
        // com++;
    }
    // cout<<"Array After "<<i+1<<" round"<<endl;
    // printArray(arr,n);
    if(isSorted)  // if our array is sorted in ith round then no need to check further
    {
        break;
    }
    }
    // cout<<"Total Com = "<<com<<endl;
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
        bubbleSort(arr,n);
        cout<<"Array After Sorting"<<endl;
        printArray(arr,n);

        i++;
    }

    return 0;
}