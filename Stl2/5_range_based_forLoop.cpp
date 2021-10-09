#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Range based for loop is introduced in c++11 
    vector<int> vec_int = {1,2,3,4};
    vector<string> vec_str = {"munna","Ravi"};
    // printing using ranged based for loop
    // for(int value : vec_int)
    // {
    //     cout<<value<<" ";
    // }
    // cout<<endl;
    // using range based for loop and auto keyword
    for(auto value : vec_int)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    for(string value : vec_str)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    // in ranged based for loop value is pass by value not refernce
    // so if we change value then not effect original value
    // for(int value: vec_int)
    // {
    //     value++; // not changed
    // }
    // using refernce
    for(int &value: vec_int)
    {
        value++; //changed
    }

    for(int value : vec_int)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    // using ramge based on pair
    // vector<pair<int,int>> v_p = {{1,2},{3,4},{4,5}};
    // for(pair<int,int> value: v_p)
    // {
    //     cout<<value.first<<" "<<value.second<<endl;
    // }
    // using ranged based for loop and auto keyword
    vector<pair<int,int>> v_p = {{1,2},{3,4},{4,5}};
    for(auto value: v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }

    // auto keyword:- it automatically replace data type 
    // int x = 3; 
    auto x = 3; // compiler replace auto with int
    auto y = "munna"; // replace with string 
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}