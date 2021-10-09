#include<iostream>
using namespace std;

string encrypt(int key, string message)
{
    if(key < 0)
    {
        return "Invalid Input";
    }
    else{
        int i = 0;
        while(message[i] != '\0')
        {
            if(message[i] != ' ')
                message[i] += key;
            i++;
        }
    }
    return message;
}
int main()
{
    int key;
    string message;
    
    cout<<"Enter Text "; getline(cin,message);
    cout<<"Enter Key "; cin >> key;

    string es = encrypt(key,message);
    cout<<"String: "<<es<<endl;
    return 0;
}