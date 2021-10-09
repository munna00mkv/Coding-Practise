#include<iostream>
using namespace std;
void trim(char arr[])
{
    for(int i=0; arr[i] != '\0'; i++)
    {
        if(arr[i] == ' ')
        {
            for(int j=i; arr[j] != '\0'; j++)
            {
                arr[j] = arr[j+1];
            }
        }
    }
}
int main()
{
    char name[20]; // Declaring a char array or (string)
    cout<<"Enter Your Name: "<<endl;
    cin.getline(name,20);
    cout<<"String Before trim : "<<name<<endl;
    trim(name);
    cout<<"String After trim : "<<name<<endl;
    
    return 0;
}