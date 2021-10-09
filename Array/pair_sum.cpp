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
void pairSum(int arr[], int n,int x)
{
    int pair = 0;
    for(int i=0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i] + arr[j] == x)
            {
                pair++;
                cout<<"( " <<arr[i]<<" , "<<arr[j]<<" ) ";
            }
        }
    }

    cout<<"\nNo of Pair is "<<pair<<endl;
}

int main()
{
    int t, i = 1;
    cout << "Enter Number of Test cases" << endl;
    cin >> t;
    while (i <= t)
    {
        int n,x;
        cout << "Enter Size Of Array:" << endl;
        cin >> n;
        cout<<"Enter pair sum to be checked"<<endl;
        cin >> x;
        int arr[100];
        cout << "Enter " << n << " Element of Array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        printArray(arr, n);
        pairSum(arr,n,x);
        i++;
    }
    return 0;
}