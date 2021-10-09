/* basically it is use to manage relation between two data
syntex:- pairs<dataType1,dataType2>pair_name;*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Declaring pair
    pair<int,string>p;
    // Putting data into pair 
    // Way 1:-
    // p = make_pair(2,"munna");
    // Way 2:- 
    p = {3,"rahul"};
    // making copy or refernce of another pair 
    // pair<int,string> p1 = p; // copy of p
    // p.first = 4; // value not changed
    pair<int,string> &p1 = p; // refernce of p
    p.first = 4; // value changed
    // user input
    cout<<"Enter A pair: "<<endl;
    cin >> p.first>>p.second;
    // printing pair (p.first- for first data, p.second- for second data)
    cout<<p.first<<" "<<p.second<<endl;

    // making two array and pair its element
    // int arr1[] = {1,2,3};
    // int arr2[] = {2,3,4};
    // // Array of pair
    // pair<int,int> p_array[3];
    // p_array[0] = {1,2};
    // p_array[1] = {2,3};
    // p_array[2] = {3,4};
    // // Swaping value
    // swap(p_array[0],p_array[2]);
    // // printing value
    // for(int i=0; i<3; i++)
    // {
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }
}