#include<bits/stdc++.h>
using namespace std;
bool checkPalidrome(string str)
{
    int l = 0;
    int r = str.length()-1;
    while(l <= r)
    {
        if(str[l] != str[r])
            return false;
        l++;
        r--;
    }
    return true;

}
int main()
{
    string str;
    cout<<"Enter String: "<<endl;
    getline(cin,str);
    bool ans = checkPalidrome(str);
    if(ans)
        cout<<"Palidrome"<<endl;
    else  
        cout<<"Not Palidrome"<<endl;
    return 0;
}