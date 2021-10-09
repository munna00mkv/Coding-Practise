#include<iostream>
#include<vector>
using namespace std;
// function template to print vector :- you can pass any data type here
template<class T>
void printVector(vector<T> &vec)
{
    cout<<"Your elements are: "<<endl;
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    // Declaring vector of type int
    vector<int> vec;
    vector<int> vec2(5); // vector of size 5
    vector<int> vec4(5,0); // vector of size 5 with all 0
    // Adding multiple data to vector
    int n;
    cout<<"Enter size : "<<endl;
    cin >> n;
    // cout<<"Enter vector element: "<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     int elem;
    //     cin >> elem;
    //     vec.push_back(elem);
    // }
    // printVector(vec);
    // // making copy of vector
    // vector<int> v2 = vec;
    // v2.push_back(123);
    // printVector(v2);

    // Declaring vector of type string 
    vector<string> vec3 ;
    cout<<"Enter Vector element: "<<endl;
    for(int i=0; i<n; i++)
    {
        string str;
        cin >> str;
        vec3.push_back(str);
    }
    printVector(vec3);
    return 0;
}