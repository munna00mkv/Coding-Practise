#include <iostream>
#include <vector>
using namespace std;
// void printVector(vector<pair<int,int>> &vec)
// {
//     cout<<"Your vector element: "<<endl;
//     for(int i=0; i<vec.size(); i++)
//     {
//         cout<<vec[i].first<<" "<<vec[i].second<<endl;
//     }
// }
// function to print a vector
void printVector(vector<int> &vec)
{
    cout << "Your vector element: " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main()
{
    // creating vector of pair
    // vector<pair<int,int>> vec = {{1,2},{2,3},{4,5}}; // initialization
    // user input
    // vector<pair<int,int>> vec;
    // cout<<"enter size of vector: "<<endl;
    // int n; cin >> n;
    // cout<<"Enter vector elements: "<<endl;
    // for(int i=0 ;i<n; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     vec.push_back({x,y});
    // }

    // array of vector:- i.e we can create multiple vectors like 2D array
    // here your are creating fixed size of array
    // it is like 2D array where no of Row is fixed but column is vary
    // int N;
    // cout<<"How many vector you want to create: "<<endl;
    // cin >> N;
    // vector<int> vec[N];
    // // Taking user input each vector
    // for(int i=0; i<N; i++)
    // {
    //     cout<<"Enter size of "<<i+1<<" vector: "<<endl;
    //     int n; cin >> n;
    //     cout<<"enter vector element"<<endl;
    //     for(int j=0; j<n; j++)
    //     {
    //         int elem;
    //         cin >>elem;
    //         vec[i].push_back(elem);
    //     }

    // }
    // // Accessing one element
    // cout<<vec[0][0]<<endl; // first element of first vector
    // // printing all vector
    // for(int i=0; i<N; i++)
    // {
    //     printVector(vec[i]);
    // }

    // Array:- size fixed
    // Vector:- size dynamic
    // 2 D array:- both row and column are fixed
    // array of vector:- like 2D array where, Row- fixed, column- dynamic
    // Vector of vector:- like 2D array where, Row - dynamic, column- dynamic

    // creating vector of vector
    // vector<vector<int>> vec; // name of 2D array
    // cout<<"Enter size of Outer vector: "<<endl;
    // int N; cin >> N;
    // for(int i=0; i<N; i++)
    // {
    //     cout<<"Enter size of inner vector: "<<endl;
    //     int n;
    //     cin >> n;
    //     cout<<"Enter element of inner vector: "<<endl;
    // make a temp vector to store inner vector elements then put it into outer vector
    // vector<int> temp;
    // without using temp:- first insert an empty vector
    // vec.push_back(vector<int>());
    // for(int i=0; i<n; i++)
    // {
    //     int elem;
    //     cin >> elem;
    //     // temp.push_back(elem);
    //     vec[i].push_back(elem);
    // }
    // now push temp vector in outer vector
    // vec.push_back(temp);
    // }
    // access one element
    // cout<<vec[0][0]<<endl; // first elemnt of first index of vector
    // vec.push_back(vector<int> ());// push an empty vector inside outer vector
    // printing all element
    // for(int i=0 ;i<vec.size(); i++)
    // {
    //     printVector(vec[i]);
    // }
    
    // Declare a 2D vector and intilize it
    //  vector<vector<int>> vect
    // {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };
     

    // Declare and intialize a 2D vector of vary size
    vector<vector<int>> vec1 = {{1, 2},
                                {1, 2, 3},
                                {1, 2, 3, 4},
                                {1, 2, 3, 4, 5}};
    // printing vector
    for (int i = 0; i < vec1.size(); i++)
    {
        for (int j = 0; j < vec1[i].size(); j++)
        {
            cout << vec1[i][j] << " ";
        }
        cout << endl;
    }

    // Declare a 2D vector of size m x n;
    int m = 4;
    int n = 3;
    vector<vector<int>> vec2(m, vector<int>(n)); // vector of m row and n column
    cout << "Enter vector elements of 4x3 size" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec2[i][j];
        }
    }
    // printing value
    cout << "Vector element is: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec2[i][j] << " ";
        }
        cout << endl;
    }

    // Declare a vector of size mxn each have value 0
    vector<vector<int>> vec3(m, vector<int>(n, 0));
    // printing value
    cout << "Vector element is: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}