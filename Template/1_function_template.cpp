/*Template is use to genralized our code , it is nothing but pass data type as parameter so that 
we don't wirte to same function/class for different data type
Ex:- 1. suppose you have to write a function for find max value among to two int or two char data type
so rather than writting two function for different data type we can write one function and pass 
different data type to it by using template*/
#include<bits/stdc++.h>
using namespace std;
// Template for find max for different data type
// template<class T>
// T myMax(T x, T y)
// {
//     return (x > y) ? x : y;
// }
// int main()
// {
//     // Call function for int
//     cout<<"Max is: "<<myMax<int>(2,3)<<endl; // By encounter this function our compiler will create copy of function template for int data type
//     // Call function for char
//     cout<<"Max is: "<<myMax<char>('g','h')<<endl;
//     // Call function for double
//     cout<<"Max is: "<<myMax<double>(2.333,4.567)<<endl;

//     return 0;
// }

// Ex: 2 - sum of two number of different data type
// We can also pass multiple data type as parameter
// template<class T1, class T2>
// void sum(T1 a, T2 b)
// {
//     cout<<"sum is : "<<a+b<<endl;
// }
// int main()
// {
//     // Calling fun for int and int
//     sum<int,int>(2,3);
//     // Calling fun for int and float
//     sum<int,float>(2,3.45);
//     return 0;
// }

// we can also pass default argument
template<class T1, class T2 = float>
void sum(T1 a, T2 b)
{
    cout<<"sum is : "<<a+b<<endl;
}
int main()
{
    // Calling fun for int and int
    sum<int>(2,3);
    // Calling fun for int and float
    sum<int,float>(2,3.45);
    return 0;
}