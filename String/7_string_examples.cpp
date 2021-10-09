//Ex:- 1) check whether string contains all digit or not
// Ex:- 2) relpace space with %20
#include<iostream>
#include<string>
using namespace std;
bool checkAllDigit(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        // if any char is not 0-9 then return false
        if(str.at(i) < '0' || str.at(i) > '9')
            return false;
    }
    return true; // at the end return true i.e only 0-9 value found
}
string replaceBlanckWith20(string str)
{
    string replaceby = "%20";
    int i = 0;
    while((i = str.find(" ",i)) != string::npos)
    {
        str.replace(i,1,replaceby);
        i += replaceby.length(); // update current index by length of replace string
    }
    return str;
}
int main()
{
    string str1 = "12345";
    string str2 = "google com in";
    if(checkAllDigit(str1))
        cout<<"Contains only digit"<<endl;
    else  
        cout<<"Contains not only digit"<<endl;
    cout<<"String after Replace: "<<replaceBlanckWith20(str2)<<endl;
    return 0;
}