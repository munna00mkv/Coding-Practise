#include<iostream>
using namespace std;
void update(char arr[], char c1, char c2)
{
    for(int i=0; arr[i] != '\0'; i++)
    {
        if(c1 == arr[i])
        {
            arr[i] = c2;
        }
    }
}
int main()
{
    char name[10]; // Declaring a char array or (string)
    cout<<"Enter Your Name: "<<endl;
    cin >> name;
    char c1,c2;
    cout<<"Enter c1"<<endl;
    cin >>c1;
    cout<<"Enter c2"<<endl;
    cin >> c2;
    cout<<"String Before Updation : "<<name<<endl;
    update(name,c1,c2);
    cout<<"String After Updation : "<<name<<endl;
    return 0;
}