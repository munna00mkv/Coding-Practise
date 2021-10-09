/*it also uses same function like ordered map
but here key is not sorted, you can use it when need not sorted key
difference:- 
internal Implementation:- uses hash table while ordered uses red black tree impl
time complexity:- O(1) while orderd map:- O(logn)
valid key data type:- it can't use pair as data type while ordered map can*/
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

void printMap(unordered_map<int,string> m)
{
    cout<<"size of map: "<<m.size()<<endl;
    for(auto &value: m)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
}
int main()
{
    // ordered map- normal map are ordered map
    // Declare unordered map
    unordered_map<int,string> m;
    // putting data into map (map_name[key] = value)
    m[1] = "ravi";   // O(logn) time to insert one data into map
    m[3] = "shivam";
    m[2] = "dipak";
    m[2] = "sssss"; // not store duplicate value it replace value of 2
    // another way
    m.insert({5,"rahul"});

    // printing data using iterator
    // unordered_map<int,string> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++)
    // {
    //     cout<<(it->first)<<" "<<(it->second)<<endl;
    // }
    printMap(m);

    // find(key) :- it returns a iterator if found otherwise return end iterator
    auto it = m.find(7); // O(logn) time complexity
    if(it == m.end())
    {
        cout<<"No value found"<<endl;
    }
    else{
        cout<<it->first<<" "<<it->second<<endl;
    }

    // erase():- it takes two parameter either key or iterator
    // m.erase(2); // it delete data with key 2
    // cout<<"Map after erase: "<<endl;
    // printMap(m);

    // auto it = m.find(7);
    // // make sure to check it first 
    // if(it != m.end())
    //     m.erase(it);
    return 0;
}
