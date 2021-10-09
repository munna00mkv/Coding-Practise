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
    int max = INT_MIN;
    char max_index;
    for(int i=0; i<256; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            max_index = i;
        }
    }
    cout<<"Max Occuring char is : "<<max_index<<endl;
    return 0;
}