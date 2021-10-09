#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // writing
    // opening file:- 
    // Method 1:- using constructor:- create an object and pass file name into constructor
    // ofstream fout("sample1.txt");
    // Method 2:- using open() member function, create an object and call member function and pass file name
    ofstream fout; // object of ofstream class
    fout.open("sample1.txt"); // passing file name into member function
    cout<<"Enter Your Data: ";
    string str;
    // cin >> str; // take input only single word
    getline(cin,str);
    // writting str into file
    fout << str; 
    // closing file
    fout.close();

    // Reading 
    // opening file
    // ifstream fin("sample2.txt"); // passing file name into constructor
    // string str;
    // // fin >> str; // read only one word
    // getline(fin,str); // read one line
    // cout<<str;
    // // closing file
    // fin.close();
    return 0;
}