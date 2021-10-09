#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;
bool checkChar(char str[], char ch)
{
    // Base Case
    if (str[0] == '\0')
        return false;
    // Small calculation and Recursive Call
    bool isPresent = checkChar(str + 1, ch);
    if (str[0] == ch)
        return true;
    
    return isPresent;
}
int main()
{
    char str[100];
    cout << "Enter String: ";
    cin >> str;
    char ch;
    cout << "Enter Char to check: ";
    cin >> ch;
    cout << "Before: " << str << endl;
    bool isPresent = checkChar(str, ch);
    if (isPresent)
        cout << "Present" << endl;
    else
        cout << "Not Present" << endl;

    return 0;
}