#include <iostream>
using namespace std;
// void increment(int** p)
// {
//     p = p + 1;
// }
// void increment(int** p)
// {
//     *p = *p + 1;
// }
void increment(int **p)
{
    **p = **p + 1;
}
int main()
{
    int i = 10;
    int *p = &i;
    int **p2 = &p;
    // cout<<"Address of p2: "<<&p2<<endl;

    // cout<<"Address of p: "<<p2<<endl;
    // cout<<"Address of p: "<<&p<<endl;

    // cout<<"Address of i: "<<&i<<endl;
    // cout<<"Address of i: "<<p<<endl;
    // cout<<"Address of i: "<<*p2<<endl;

    // cout<<"Value of i: "<<i<<endl;
    // cout<<"Value of i: "<<*p<<endl;
    // cout<<"Value of i: "<<**p2<<endl;

    // cout<<"Address of p: "<<p2<<endl;
    // cout<<"Address of p: "<<&p<<endl;
    // increment(p2);
    // cout<<"Address of p: "<<p2<<endl;
    // cout<<"Address of p: "<<&p<<endl;
    // cout<<"Address of i: "<<&i<<endl;
    // cout<<"Address of i: "<<p<<endl;
    // cout<<"Address of i: "<<*p2<<endl;
    // increment(p2);
    // cout<<"Address of i: "<<&i<<endl;
    // cout<<"Address of i: "<<p<<endl;
    // cout<<"Address of i: "<<*p2<<endl;
    cout << "Value of i: " << i << endl;
    cout << "Value of i: " << *p << endl;
    cout << "Value of i: " << **p2 << endl;
    increment(p2);
    cout << "Value of i: " << i << endl;
    cout << "Value of i: " << *p << endl;
    cout << "Value of i: " << **p2 << endl;
}