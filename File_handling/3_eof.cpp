/*eof:- end of file
we can use it to read entire file*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string str;
    ifstream fin;
    fin.open("sample2.txt");
    // read entire file until reach to end of file
    while(fin.eof() == 0)
    {
        getline(fin, str);
        cout<<str<<endl;
    }
    fin.close();
    return 0;
}