/*iterator:- basically it is pointer object that points to the containers element
it++ :- points to next iterator
it+1 :- points to next location
To access container elements we use (*it) i.e dereferencing operator because it is pointer
container_name.begin()- points to first element of container
container_name.end() - points to next of last element of container*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec = {1,2,3,4};
    // printing vector elements without using iterator
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    // priting vector elem using iterator
    // syntex:- conatiner_name :: iterator iterator_name;
    // itrator_name = container_name.begin()- iterator pointing to first element 
    // iterator_name = container_name.end() - iterator pointing to next of last element
    // vector<int> :: iterator it;
    // for(it = vec.begin(); it != vec.end(); it++)
    // {
    //     cout<<(*it)<<" ";
    // }
    // cout<<endl;
    // here no need to declare iterator, compilar automatically assume it iterator
    for(auto it = vec.begin(); it != vec.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    // iterator pointing to pair'
    // vector<pair<int,string>> vec_p = {{1,"munna"},{2,"ravi"},{3,"deepak"}};
    // vector<pair<int,string>> :: iterator it1;
    // for(it1 = vec_p.begin(); it1 != vec_p.end(); it1++)
    // {
    //     // cout<<(*it1).first<<" "<<(*it1).second<<endl;
    //     cout<<(it1->first)<<" "<<(it1->second)<<endl; // both are same
    // }
    // using auto keyword
     vector<pair<int,string>> vec_p = {{1,"munna"},{2,"ravi"},{3,"deepak"}};
    
    for(auto it1 = vec_p.begin(); it1 != vec_p.end(); it1++)
    {
        // cout<<(*it1).first<<" "<<(*it1).second<<endl;
        cout<<(it1->first)<<" "<<(it1->second)<<endl; // both are same
    }
    
}