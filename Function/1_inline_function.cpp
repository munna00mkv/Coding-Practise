/*inline function:- by making a function inline
our compiler replace function call with whole inline function so our process become fast
because our function need not to perform some task like copy actual argument make it formal and after calculation
return its value.
-- use inline function only when function perform small opeartion*/
#include<iostream>
using namespace std;
// normal function:- it slow our process when function call is more
// int sum(int a, int b)
// {
//     return a+b;
// }
// inline function:- it fast our process when function call is more
inline int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int a,b;
    cout<<"Enter a and b "<<endl;
    cin >> a >> b;
    cout<<"Sum is "<<sum(a,b)<<endl;
    cout<<"Sum is "<<sum(a,b)<<endl;
    cout<<"Sum is "<<sum(a,b)<<endl;
    cout<<"Sum is "<<sum(a,b)<<endl;
    cout<<"Sum is "<<sum(a,b)<<endl;
    cout<<"Sum is "<<sum(a,b)<<endl;
    cout<<"Sum is "<<sum(a,b)<<endl;
    cout<<"Sum is "<<sum(a,b)<<endl;
    cout<<"Sum is "<<sum(a,b)<<endl;
}
