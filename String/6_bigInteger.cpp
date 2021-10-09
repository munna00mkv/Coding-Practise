// Take input a big integer that can not handle long long int (10^18)
// we can use string to take a large integer
#include<iostream>
#include<string>
using namespace std;
// Function return an array of integer
int* getBigInteger(string str)
{
    // Declare a dynamic array of same size of string
    int size = str.length();
    int *arr = new int[size];
    // convert each char in int then put in array:- we can substract ascii of '0'(48) to get int
    for(int i=0; i<size; i++)
    {
        arr[i] = str[i] - '0'; // convert char into int ex:- '2'- ascii value = 50 - 48('0') = 2
    }
    return arr; // return refernce of array
}
int main()
{
    string str;
    cout<<"Enter Your input: "<<endl;
    cin >> str;
    int *arr = getBigInteger(str);
    for(int i=0; i<str.size(); i++)
    {
        cout<<arr[i];
    }
    return 0;
}