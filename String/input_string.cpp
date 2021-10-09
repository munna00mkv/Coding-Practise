#include<iostream>
using namespace std;
int length(char arr[])
{
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[10]; // Declaring a char array or (string)
    cout<<"Enter Your Name: "<<endl;
    cin >> name;
    cout<<"Name : "<<name<<endl;
    cout<<"Length = "<<length(name)<<endl;
    return 0;
}