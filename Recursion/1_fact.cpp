#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    cout<<"n = "<<n<<endl;
    if(n == 0)    // Base case:- When n=0 then end function call and return
        return 1;

    cout<<"fact( "<<n<<") calling to fact("<<n-1<<") "<<endl;
    int small_op = fact(n-1);

    return n * small_op;
}
int main()
{
    int n;
    cin >> n;
    cout<<"Main() calling Fact("<<n<<")"<<endl;
    int output = fact(n);
    cout<<"Fact("<<n<<") return value to output"<<endl;
    cout<<output<<endl;
    return 0;
}