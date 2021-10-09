#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> &vec)
{
    for(int elem : vec)
    {
        cout<<elem<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec = {2,4,6,1,8,8,6};
    printVector(vec);
    // Inbuilt Algorithms:- all take O(n), in case arr,vector,string
    // min_element(start_address,end_address):- return pointer(in case array) or iterator(in vector)
    // auto it = min_element(vec.begin(),vec.end());
    // cout<<*it<<endl;

    // We can also write in terms of pointer
    int min = *min_element(vec.begin(),vec.end());
    // in case array:- min_element(arr,arr+n); // arr- address of first elem, arr+n:- next add of last elem
    // int min = *min_element(vec.begin()+2,vec.end()); // find minimum from 2 index
    cout<<min<<endl;

    //max_element(start_add,end_add)
    int max = *max_element(vec.begin(),vec.end());
    cout<<max<<endl;

    // accumulate(start_add,end_add,intial_sum):- return sum of array elem
    int sum = accumulate(vec.begin(),vec.end(),0);
    cout<<sum<<endl;

    // count(start_add,end_add,elem):- return total number of elem
    int c = count(vec.begin(),vec.end(),8);
    cout<<c<<endl;

    // find(start_add,end_add,elem):- return pointer or iterator of that elem if found, else return end it
    auto it = find(vec.begin(),vec.end(),23);
    if(it == vec.end())
        cout<<"Elem not found"<<endl;
    else  
        cout<<*it<<endl;

    // Reverse:- reverse(start_add,end_add)
    // Reverse vector
    reverse(vec.begin(),vec.end());
    printVector(vec);

    // Reverse string 
    string str = "munna";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}