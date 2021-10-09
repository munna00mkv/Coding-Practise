/*There are two method to do it:
method 1: - take two pointer that pointing to start and end of string 
then compare each charcter one by one till start <= end i.e till not cross each other
if equal then upadte start and end if not equal then return false(not palidrome)

method 2: - iterate a loop from start to len/2 then check each char
if not equal then return false else check other char also and when all
char are comapre then simply return true*/

#include<iostream>
#include<string>
using namespace std;
bool checkPalidrome1(string str)
{
    int l = 0, r = str.length()-1;
    while(l <= r)
    {
        if(str[l] == str[r])
        {
            l++;
            r--;
        }
        else{
            return false;
        }
    }
    return true; // if all comparision done then return true
}

bool checkPalidrome2(string str)
{
    int len = str.length();
    for(int i=0; i<len-1; i++)
    {
        if(str[i] != str[len-1-i])
        {
            return false;
        }
    }
    return true; // if all comparision done then return true
}

int main()
{
    string str = "1AmA1";
    bool ans = checkPalidrome1(str);
    ans ? cout<<"Palidrome"<<endl : cout<<"Not palidrome"<<endl;
    bool ans1 = checkPalidrome2(str);
    ans1 ? cout<<"Palidrome"<<endl : cout<<"Not palidrome"<<endl;
    return 0;
}

