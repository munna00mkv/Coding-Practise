// function object(functor):- function wraped in a class so that it available like an object
#include<iostream>
#include<functional> // function object are in this header
#include<algorithm> // all algorithm like sort()...are in this header
using namespace std;
void display(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {22,1,44,5,23,67,88,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"array before sort: ";
    display(arr,size);
    // sort in accending order
    cout<<"Sort in Accending oreder ";
    sort(arr,arr+size); // syntex:- sort(start_pointer,end_pointer)
    display(arr,size);
    // sort in decending oreder
    cout<<"Sort in Decending order: ";
    sort(arr,arr+size,greater<int>()); // where greater<int>() is a function object(functor)
    display(arr,size);

    return 0;
}