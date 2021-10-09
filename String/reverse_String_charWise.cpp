#include <iostream>
using namespace std;
int length(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reverseString(char arr[])
{
    int i, j;
    i = 0;
    j = length(arr) - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    char name[20]; // Declaring a char array or (string)
    cout << "Enter Your Name: " << endl;
    // cin >> name; // for single word input only
    cin.getline(name, 20);
    cout << "Before Reverse : " << name << endl;
    reverseString(name);
    cout << "After Reverse : " << name << endl;
    return 0;
}