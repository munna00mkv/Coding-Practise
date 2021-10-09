/*Map:- it is used to store data into key - value pair
Two types :- ordered map and unordered map
- in ordered map key sotre in sorted order
- map doesn't store duplicate key
- access one data of map time complexity:- O(logn)*/
// #include<iostream>
// #include<map>
// using namespace std;
// // function to print map data using range based for loop
// // time complexity:- O(nlogn) because we are accessing n elements 
// void printMap(map<int,string> m)
// {
//     cout<<"size of map: "<<m.size()<<endl;
//     for(auto &value: m)
//     {
//         cout<<value.first<<" "<<value.second<<endl;
//     }
// }
// int main()
// {
//     // ordered map- normal map are ordered map
//     // Declare map
//     map<int,string> m;
//     // putting data into map (map_name[key] = value)
//     m[1] = "ravi";   // O(logn) time to insert one data into map
//     m[3] = "shivam";
//     m[2] = "dipak";
//     m[2] = "sssss"; // not store duplicate value it replace value of 2
//     // another way
//     m.insert({5,"rahul"});

//     // printing data using iterator
//     // map<int,string> :: iterator it;
//     // for(it = m.begin(); it != m.end(); it++)
//     // {
//     //     cout<<(it->first)<<" "<<(it->second)<<endl;
//     // }
//     printMap(m);

//     // find(key) :- it returns a iterator if found otherwise return end iterator
//     // auto it = m.find(7); // O(logn) time complexity
//     // if(it == m.end())
//     // {
//     //     cout<<"No value found"<<endl;
//     // }
//     // else{
//     //     cout<<it->first<<" "<<it->second<<endl;
//     // }

//     // erase():- it takes two parameter either key or iterator
//     m.erase(2); // it delete data with key 2
//     cout<<"Map after erase: "<<endl;
//     printMap(m);

//     auto it = m.find(7);
//     // make sure to check it first 
//     if(it != m.end())
//         m.erase(it);
//     return 0;
// }
/*
1. Given an array of n elements, counts the frequency of each elments

2. Given N strings, print unique strings in lexiographical order with their
frequency
N <= 10^5
|S| <= 100
*/

#include<iostream>
#include<map>
using namespace std;
// printing map data : using template 
template<class T1, class T2>
void displayMap(map<T1,T2> m1)
{
    for(auto &val : m1)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
}
int main()
{
    // map<int, int> m1;
    // int n;
    // cout<<"Enter size: "<<endl;
    // cin >> n;
    // int arr[n];
    // cout<<"Enter array elments: "<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     cin >>arr[i];
    // }
    // for(int i=0; i<n; i++)
    // {
    //     int key = arr[i];
    //     // increase value of key each time by one
    //     m1[key] = m1[key] + 1;
    // }
    // // printing array elemnt
    // for(int i=0; i<n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // // printing value of map
    // cout<<"Frequency are: "<<endl;
    // displayMap(m1);
    // Question 2
    // map<string,int> m2;
    // int N;
    // cout<<"How many string you want to enter:"<<endl;
    // cin >> N;
    // cout<<"Enter String: "<<endl;
    // for(int i=0; i<N; i++)
    // {
    //     string str;
    //     cin >> str;
    //     // counting frequency of each string
    //     m2[str]++; // same as m2[str] = m2[str] + 1
    // }
    // displayMap(m2);


    // map of int value
    map<int,int> m3;
    m3[1];  // if you donot give value corresponding to key then by default value is 0
    m3[3];
    m3[2] = 4;
    m3[4] = m3[2] + 1; // 4 + 1 assign to key 4
    m3[4]++;   // same as m3[4] = m3[4]+1       // 5+1 is assign to key 4
    displayMap(m3);
    return 0;
}
