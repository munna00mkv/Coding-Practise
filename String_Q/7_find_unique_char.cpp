#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;
void findUnique(string str)
{
    int count[ASCII_SIZE] = {0};
    for(int i=0; i<str.length();i++)
    {
        count[str[i]]++;
    }
    // Array that conatain all unique elements
    char unique[ASCII_SIZE];
    int k = 0;
    for(int i=0; i<ASCII_SIZE; i++)
    {
        if(count[i] == 1)
        {
            unique[k] = i;
            k++;
        }
    }
   cout<<"All unique elements are: "<<endl;
   for(int i=0; i<k; i++)
   {
       cout<<unique[i]<<" ";
   }
}
int main()
{
    string str;
    cout<<"Enter String: "<<endl;
    cin >> str;
    findUnique(str);
  
    return 0;
}
