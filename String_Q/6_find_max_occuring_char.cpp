/* finding maximum occuring charcter in string:- ex:- input:- test ans = t*/
#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;
char maxOccuring(string str)
{
    // Array for hashing
    int count[ASCII_SIZE] = {0};
    int max = 0;
    char result;
    for(int i=0; i<str.length(); i++)
    {
        count[str[i]]++;
        if(max < count[str[i]])
        {
            max = count[str[i]];
            result = str[i];
        }
    }
    return result;
}
int main()
{
    string str;
    cout<<"Enter String: "<<endl;
    cin >> str;
    char ans = maxOccuring(str);
    cout<<"Max Occuring char is: "<<ans<<endl;
    return 0;
}