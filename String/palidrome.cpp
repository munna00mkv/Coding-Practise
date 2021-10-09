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
bool palidrome(char arr[])
{
    bool isPalidrome = true;
    int i = 0;
    int j = length(arr)-1;
    while(i<j)
    {
        if(arr[i] != arr[j])
        {
            isPalidrome = false;
            break;
        }
        i++;
        j--;
    }
    if(isPalidrome)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    char name[10]; // Declaring a char array or (string)
    cout<<"Enter Your String: "<<endl;
    cin >> name;
    cout<<"String : "<<name<<endl;
    cout<<palidrome(name);
    return 0;
}