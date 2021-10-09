#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1. Allocating integer value
    int* p = new int;
    int n;
    cout<<"Enter int value: "<<endl; cin>>n;
    *(p) = n;
    cout<<"Size of p: "<<sizeof(p)<<endl;
    cout<<"Address of that int: "<<p<<endl;
    cout<<"Value at Address: "<<p<<" = "<<*p<<endl;

    // Free memory

    delete p;

    // 2. Allocate Double value
    double *pd = new double;
    double d;
    cout<<"Enter Double Value: "<<endl; cin >> d;
    *(pd) = d;
    cout<<"Address of that double: "<<pd<<endl;
    cout<<"Value at Address: "<<pd<<" = "<<*pd<<endl;

    // Free Memory

    delete p;

    // 3. Allocate char value
    char *pc = new char;
    char c;
    cout<<"Enter A Charcter: "<<endl; cin>>c;
    *(pc) = c;
    cout<<"Size of pc: "<<sizeof(pc)<<endl;
    
    cout<<"Value = "<<*pc<<endl;

    // Free Memory

    delete p;

    return 0;
}