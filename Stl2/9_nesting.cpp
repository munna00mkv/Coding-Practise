#include<iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;

int main()
{
    // Note:- we can also compare two set,vector,map,pair
    // Comparing vector
    // vector<int> vec1(3,4); // size 3 each element 4
    // vector<int> vec2(3,2); // size 3 each element 2 
    // cout<<"Vector 1 element"<<endl;
    // for(int &val:vec1)
    // {
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // cout<<"Vector 2 element"<<endl;
    // for(int &val2 : vec2)
    // {
    //     cout<<val2<<" ";
    // }
    // cout<<endl;
    // // first comapre first element of both if equal then comapre next of both
    // // return 0 if false , 1 if true
    // (vec1 > vec2) ? cout<<"Vec1 is greater than vec2"<<endl : cout<<"Vec2 is greater than vec1"<<endl;

    // // Compare pair
    // pair<int,int> p1;
    // pair<int,int> p2;
    // p1 = {1,2};
    // p2 = {2,3};
    // (p1>p2) ? cout<<"pair 1 greater then p2"<<endl : cout<<"pair 2 is greater than p1"<<endl;
    // All conatainer that we comapre use as a key in map
    // Nesting :- putting complex data type at place of primitive data type
    // map<int, int> m; // Normal map
    // map<set<int>, int> m; // Nested map
    // set<pair<int,string>>; // nested set
    // Ex:- store first-last name and marks of x subject
    map<pair<string,string>,vector<int>> m;
    cout<<"Enter Size: "<<endl;
    int N;
    cin >> N;
    cout<<"enter Data of "<<N<<" students: "<<endl;
    for(int i=0; i<N; i++)
    {
        cout<<"Enter First Name ans Last Name"<<endl;
        cout<<"Enter How Many Subject Marks:"<<endl;
        string fn,ln;
        int ct;
        cin >> fn >> ln >> ct;
        cout<<"Enter Marks"<<endl;
        for(int j=0; j<ct; j++)
        {
            int x;
            cin >> x;
            // m[{fn,ln}] // it represent as a vector i.e value of key
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &number_list = pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<<number_list.size()<<endl;
        // printing list
        for(auto &elem : number_list)
        {
            cout<<elem<<" ";
        }
        cout<<endl;
    }

    return 0;
}