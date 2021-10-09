#include <iostream>
using namespace std;
void findTime(int input)
{
    if (input == 0)
    {
        cout << "Estimated Time: " << 0 << " minutes" << endl;
    }
    else if (input > 0 && input <= 2000)
    {
        cout << "Estimated Time: " << 25 << " minutes" << endl;
    }
    else if (input > 2000 && input <= 4000)
    {
        cout << "Estimated Time: " << 35 << " minutes" << endl;
    }
    else if (input > 4000 && input <= 7000)
    {
        cout << "Estimated Time: " << 45 << " minutes" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}
int main()
{
    int input;
    cout << "Enter Weigth: ";
    cin >> input;
    findTime(input);
    return 0;
}