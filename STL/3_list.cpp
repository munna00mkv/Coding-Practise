// create a list and display its data
#include<iostream>
#include<list>
using namespace std;
void displayList(list<int> &lst)
{
    list<int> :: iterator iter;
    cout<<"Your data is: ";
    for(iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1; // declare a list of 0 length
    // Adding data to list
    list1.push_back(12);
    list1.push_back(32);
    list1.push_back(34);
    list1.push_back(24);
    list1.push_back(24);
    // display data of list:- we can use iterator
    // list<int> :: iterator iter;
    // iter = list1.begin(); // intially iter pointer is pointing to first element of list
    // cout<<*iter<<endl; // using dereferencing operator because it is a pointer
    // iter++; // now pointing to second elemnt ....so on...
    // cout<<*iter<<endl; 
    displayList(list1);

    // Removing element from the list
    // list1.pop_front(); // remove from front
    // list1.pop_back();  // remove from back
    // list1.remove(24); // it remove all 24 
    // insert from front
    // list1.push_front(10);
    // sort list
    // list1.sort();
    // displayList(list1);

    // creating list 2 of size 3
    list<int> list2(3); // empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 34;
    iter++;
    *iter = 56;
    displayList(list2);

    // merging both list 
    // list1.merge(list2);
    // First sort both list then merge
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);

    // reverse list
    list1.reverse();
    displayList(list1);
}