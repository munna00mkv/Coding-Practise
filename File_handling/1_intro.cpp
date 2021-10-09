/*File Handling:- 
-- The useful classes for with files are:- (These class are defined in <fstream> header file)
   1. fstreambase:- base class
   2. ifstream:- derived from fstreambase (use for read data from file)
   3. ofstream:- derived from fstreambase (use for write data into file)*
-- In order to work with files in c++, you will have to open it first,there are two ways to open a file
   1. Using ths constructor (i.e use constructor of ifstream and ofstream class )
   2. Use the member function open() of the class
-- To close a file:- we will use close() member function of class
   */
#include<iostream> // this header file contain cin and cout
#include<fstream>  // this haeder file contain all class related to file
using namespace std;
int main()
{
    // note:- you can use any object name instead of fin and fout, we are using here to convention only
    // 1. write into file
    // opening files by using constructor
    // ofstream fout("sample1.txt"); // making object of ofstream class and pass value to constructor
    // string str = "Munna kumar";
    // fout<<str; // str will goes into file, it is like cout

    // 2. reading from files
    // open files by using constructor
    ifstream fin("sample2.txt");
    string str,str2;
    // fin >> str; // file data come into str // it is like cin only read upto white space
    getline(fin,str); // read a line
    getline(fin,str2); // read second line
    cout<<str<<endl;
    cout<<str2<<endl;

    return 0;
}