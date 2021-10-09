#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v) // refernce to vector vec
{
    cout<<"Your vector is: "<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int sum(vector<int> &v)
{
    int sum = 0;
    for(int i=0; i<v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}
int main()
{
    // Way to create a vector
    // vector<int> vec1; // Zero length integer vector
    // display(vec1);
    // vector<char> vec2(4); // 4 length char vector
    // vec2.push_back('a');
    // vec2.push_back('b');
    // vec2.push_back('c');
    // vec2.push_back('d');
    // display(vec2);
    // vector<char> vec3(vec2); // 4 length char vector from vec 2 i.e copy one vector to other
    // display(vec3);
    // vector<int> vec4(6,1); // 6 length int vector with each element 1
    // display(vec4);

    // ex:- find sum of n element
    vector<int> vec;
    int n,elem;
    cout<<"Enter size: "; cin >> n;
    cout<<"Enter Element: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>elem;
        vec.push_back(elem);
    }
    display(vec);
    // int ans = sum(vec);
    // cout<<"Sum is: "<<ans<<endl;
    // ex 2:- insert a elment at index 2
    vector<int> :: iterator iter = vec.begin(); // here iterator is pointing at first element
    vec.insert(iter+2, 10);
    display(vec);

    return 0;
}