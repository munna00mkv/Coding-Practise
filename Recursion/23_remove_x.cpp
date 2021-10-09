#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

void removeX(char str[])
{
    // Base Case
    if(str[0] == '\0')
        return;
    // check first char
    if(str[0] != 'x')
    {
        // Call recursion
        removeX(str+1);
    }
    else{
        // Shift to the left
        int i = 1;
        while(str[i] != '\0')
        {
            str[i-1] = str[i];
            i++;
        }
        // shifting null char also in the end
        str[i-1] = str[i];
        // Now call recursion for thr rest part
        removeX(str);
    }
}

int main()
{
    char str[100];
    cout<<"Enter String: ";
    cin >> str;
    cout<<"String Before: "<<str<<endl;
    removeX(str);
    cout<<"String After: "<<str<<endl;
    return 0;
}
