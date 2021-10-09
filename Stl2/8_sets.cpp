/*
sets are use to store unique elements. all the operation are same as map
There are 3 types are set:- 
1). ordered set:- this is normal set that store unique element in sorted order(asscending)
internal implementation:- use red black tree
time complexity:- all operation takes O(logn) same as ordered map
2). unordered set:- This is use to store unique element in unsorted order
internal implementation:- hash table
time complexity:- O(1), same as unordered map
valid data type:- it only implement primitative data type, not custom data type like vector,pair etc..
3). multiset:- This store data into sorted order and allow duplicate elements
implementation and time complexity is same as ordered set
*/

#include<iostream>
#include<set>
#include<unordered_set>
#include<string>
using namespace std;
template<class T>
void printSet(set<T> s)
{
    // using iterator
    // set<string> :: iterator it; // we can use auto instead of this
    // for(auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout<<(*it)<<endl;
    // }

    // using range based for loop
    cout<<"Size of set: "<<s.size()<<endl;
    for(T val: s)  // use auto instead of string
    {
        cout<<val<<endl;
    }
}
void printUnorderSet(unordered_set<string> s)
{
    cout<<"Unordered set: "<<endl;
    for(auto val: s)
    {
        cout<<val<<endl;
    }
}
void printMultiSet(multiset<string> s)
{
    cout<<"Multi set: "<<endl;
    for(auto val: s)
    {
        cout<<val<<endl;
    }
}
int main()
{
    // Declare set of string data type
    set<string> s;
    // put data into set
    s.insert("abc"); // O(logn)
    s.insert("bcd");
    s.insert("abc"); // not take duplicate
    s.insert("dfg");
    s.insert("kjhgf");
    s.insert("aaaaa");
    // printing data
    // printSet(s);

    // Access element of set :- in map we use m[] but here no operator like this exist we can use .find() fun
    // find() // return iterator if found else return end iterator
    auto it = s.find("bcd");
    // erase():- to erase particular data
    if(it != s.end())
    {
        // cout<<(*it)<<endl; // print found element
        s.erase(it); // it will erase "bcd"
    }
       
    
    // we can also pass data to erase like map
    s.erase("bcd"); 
    // printSet(s);



    /*Q:- Given N strings, print unique strings in lexiographical order
            N <= 10^5
            |s| <= 10^5        
    */
//    set<string> s1;
//    int N;
//    cout<<"Enter size of set: "<<endl;
//    cin >>N;
//    cout<<"Enter element of set: "<<endl;
//    for(int i=0; i<N; i++)
//    {
//        string str;
//        cin >>str;
//        s1.insert(str);
//    }
//    cout<<"Your set: "<<endl;
//    printSet(s1);


   // unordered set:- same as unordered map
   // Declare unordered set of string data type
    unordered_set<string> s2;   
    // unordered_set<pair<int,int>> s2;  // here we can not use custom data type
    // put data into set
    s2.insert("abc"); // O(1)
    s2.insert("bcd");
    s2.insert("abc"); // not take duplicate
    s2.insert("dfg");
    s2.insert("kjhgf");
    s2.insert("aaaaa");
    // printing data
    // printUnorderSet(s2);

    // find an element in set
    // if(s2.find("abc") != s2.end())
    // {
    //     cout<<"Present"<<endl;
    // }
    // else{
    //     cout<<"Not present"<<endl;
    // }


    // Multiset:- allow duplicate

    // multiset<string> s3;
    // // put data into set
    // s3.insert("abc"); // O(logn)
    // s3.insert("bcd");
    // s3.insert("abc"); // allow duplicate
    // s3.insert("dfg");
    // s3.insert("kjhgf");
    // s3.insert("aaaaa");
    // // printing data
    // // printMultiSet(s3);

    // // find() - in multiset if dupliacte present then it return first duplicate value iterator
    // auto it3 = s3.find("abc"); // O(logn)
    // if(it3 != s3.end())
    //     s3.erase(it3);    // it delete only first duplicate
    // // if we erase by passing value then it erase all value
    // s3.erase("abc");     // Be careful!!!!!!!
    // printMultiSet(s3);

    // Set of integers
    set<int> s4;
    s4.insert(1);
    s4.insert(5);
    s4.insert(1); // set doesn't allow duplicate elements But multiset does
    s4.insert(4);
    s4.insert(10);
    printSet(s4);
    return 0;
}