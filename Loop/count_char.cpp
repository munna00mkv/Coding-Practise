#include <iostream>
using namespace std;
int main()
{
    char c;
    int count_char = 0, count_digit = 0, count_ws = 0;
    c = cin.get();
    if (c >= 'a' && c <= 'z')
    {
        count_char++;
    }
    else if (c >= '0' && c <= '9')
    {
        count_digit++;
    }
    else if (c == ' ')
    {
        count_ws++;
    }
    while (c != '$')
    {
        c = cin.get();
        if (c >= 'a' && c <= 'z')
        {
            count_char++;
        }
        else if (c >= '0' && c <= '9')
        {
            count_digit++;
        }
        else if (c == ' ')
        {
            count_ws++;
        }
    }
    cout << "Number of Char: " << count_char << endl;
    cout << "Number of Digits: " << count_digit << endl;
    cout << "Number of White Spaces: " << count_ws << endl;
    return 0;
}