#include<iostream>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter String:"<<endl;
    cin >> str;
    cout<<"String Before Removel: "<<str<<endl;
    char last_char = str[0];
    int j = 1;
    for(int i= 1; str[i] != '\0'; i++)
    {
        int count = 1;
        if(str[i] != last_char)
        {
            str[j] = count;
            j++;
            last_char = str[i];
            str[j] = last_char;
            j++;
        }
        else{
            count++;
        }
        
        
    }
    str[j] = '\0'; // put null to terminate new string
    cout<<"String After Compression: "<<str<<endl;
    return 0;
}