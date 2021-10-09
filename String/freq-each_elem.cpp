#include<iostream>
#include<climits>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter String: "<<endl;
    cin >> str;
    cout<<"String : "<<str<<endl;
    int freq[256] = {0};
    for(int i=0; str[i] != '\0'; i++)
    {
        int index = str[i];
        freq[index]++;
    }
    for(int i=0; i<256; i++)
    {
       if(freq[i] != 0)
       {
           char ch = i;
           cout<<ch<<" : "<<freq[i]<<endl;
       }
    }
    return 0;
}