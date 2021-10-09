#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of Array: "<<endl;
    cin >> n;
    int * p = new int[n]; // Declare an array on n size in heap

    // Filling element in array
    cout<<"Enter Element: "<<endl;
    for(int i=0; i<n;i ++)
    {
        cin >>p[i];         // p[i] == *(p+i) we can use both of them
    }

    // printing address

    cout<<"Address of pointer p: "<<p<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Address of "<<i+1<<" th element is: "<<p+i<<endl;
    }

    //printing elments
    
    cout<<"Element is: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<" ";    // p[i] == *(p+i) 
    }
    cout<<endl;

    // Free Memory of Allocated memeory in heap

    delete [] p ;


    return 0;
}