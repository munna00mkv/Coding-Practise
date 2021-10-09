// print array using class template
#include<iostream>
using namespace std;
template<class T>
class Array{
    private:
        T *ptr; // Dynamic Array
        int size;
    public:
        Array(T arr[], int s); // Declaring constructor
        void print();          // Declaring a member function

};
// Define outside:- Syntex:- dataType className :: functionName(para){};
template<class T>
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];  // Declring array
    size = s;
    // setting data to array
    for(int i=0; i<size; i++)
    {
        ptr[i] = arr[i];
    }
}
template<class T>
void Array<T>::print()
{
    for(int i=0; i<size; i++)
        cout<<ptr[i]<<" ";
}

int main()
{
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    Array<int> ar(a,n);
    ar.print();
}