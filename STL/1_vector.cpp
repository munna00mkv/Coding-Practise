/*vector:- it is a class which is present in <vector> header file , it provide a lot of functionality
to manipulate the data*/
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v1)
{
    cout<<"Your Vector is: ";
    for(int i=0; i<v1.size(); i++)
    {
        // cout<<v1[i]<<" "; // we can use like array
        // use at(index) member function to access data at particular index
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
}
int main()
{
    int size,elem;
    // Declaring a vector of type int
    vector<int> vec; // object of vector class and pass int data type to create int vector
    cout<<"Enter Size of Vector: "<<endl;
    cin >> size;
    cout<<"Enter Vector elment: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin >> elem;
        vec.push_back(elem); // push data into vector from back
    }
    display(vec);
    // pop data from back
    vec.pop_back();
    display(vec);
    // Access data of particular index
    // cout<<"Data at 1 index: "<<vec.at(1)<<endl;

    // insert element at specific index
    // syntex:- vector_name.insert(iterator_name+index,repetation, element)
    // define iterator:- vector<int> :: iterator iter_name = begin() 
    vector<int> :: iterator iter = vec.begin(); // insert from begin
    // vector<int> :: iterator iter = vec.end();   // insert from end
    vec.insert(iter,3,123); // by default index value is 0
    display(vec);

    // first element:- vec_name.front()
    cout<<"First Element: "<<vec.front()<<endl;
    // Last element:- vec_name.back()
    cout<<"Last Element: "<<vec.back()<<endl;
        
    
    return 0;
}