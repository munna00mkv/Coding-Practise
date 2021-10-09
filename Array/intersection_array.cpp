#include<iostream>
#include<climits>
using namespace std;
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void interSection(int arr1[], int arr2[], int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr1[i] == arr2[j])
            {
                arr2[j] = INT_MIN;
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}
int main()
{
    int t, i;
    cout<<"Enter Number of test cases"<<endl;
    cin >> t;
    i = 1;
    while(i <= t)
    {

    int m,n;
    int arr1[100],arr2[100];
    cout << "Enter Size of First Array" << endl;
    cin >> m;
    cout << "Enter Size of Second Array" << endl;
    cin >> n;
    cout << "Enter Element of First Array"<<endl;
    for(int i=0 ;i<m; i++)
    {
        cin >> arr1[i];
    }
    cout<<"Enter Element of Second Array"<<endl;
    for(int j=0; j<n; j++)
    {
        cin >> arr2[j];
    }
    printArray(arr1,m);
    printArray(arr2,n);
    interSection(arr1,arr2,m,n);
    cout<<endl;
    // printArray(arr2,n);

        i++;
    }


}