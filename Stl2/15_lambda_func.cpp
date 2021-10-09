#include<bits/stdc++.h>
using namespace std;
bool is_positive(int x)
{
    return x>0;
}
int main()
{
    // Lambda func:- function without name
    // syntex:- [](data_type var_name,.....){expression to return}
    // find x+2 using lambda
    cout<<[](int x){return x+2;}(4)<<endl; // Declaration and calling both
    // Also use like this, first assign in a var then call that var and pass value
    auto sum1 = [](int x){return x+2;}; // Declaration and define
    cout<<sum1(4)<<endl;                // call

    // find x+y using lambda
    auto sum2 = [](int x, int y){return x+y;};
    cout<<sum2(3,4)<<endl;

    // all_of(start_add,end_add,condition):- return true or false based on condition
    // return true:- if all true, return false if any one false
    // Q:- check elemnts are positive or not
    vector<int> vec = {2,-2,5};
    // passing lambda fun
    cout<<all_of(vec.begin(),vec.end(),
            [](int x){return x>0;});
    // we can also pass normal fun
    // cout<<all_of(vec.begin(),vec.end(),
    //     is_positive);
    // basically, this algo takes an element from vec and passing it into fun 
    // and check accordingly and return true of false
    // if all positive then return true, if any -ve then return false


    // any_of:- it take elment one by one and check if any one elem return true then it return true
    // if all elem return flase then it return flase
    cout<<any_of(vec.begin(),vec.end(),
        [](int x){return x>0;});
    // none_of:- it retuen true when all elem return false
    cout<<none_of(vec.begin(),vec.end(),
        [](int x){return x>0;})<<endl;
    
    // Program to check all element of array if even or not
    // vector<int> v ={2,4,6}; // return true
    vector<int> v ={2,1,6};   // return false
    cout<<all_of(v.begin(),v.end(),
            [](int x){return x%2 == 0;});
    return 0;
}