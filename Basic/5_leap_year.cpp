#include<iostream>
using namespace std;
// Using Nested if
// bool leapYear(int year)
// {
//     if(year % 4 == 0)
//     {
//         if(year % 100 == 0)
//         {
//             if(year % 400 == 0)
//                 return true;
//             else 
//                 return false;
//         }
//         else 
//             return true;
//     }
//     else
//         return false;
// }
// Using else-if ladder
bool leapYear(int year)
{
    if((year % 4 == 0) && (year % 100 != 0))
    {
        return true;
    }
    else if(year % 400)
    {
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    int year;
    cout<<"Enter Year: ";
    cin >> year;
    bool isLeap = leapYear(year);
    if(isLeap)
        cout<<"Leap Year"<<endl;
    else 
        cout<<"Not Leap Year"<<endl;
    return 0;
}