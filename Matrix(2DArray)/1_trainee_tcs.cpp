#include<iostream>
using namespace std;

int main()
{
    int traine[3][3];
    int avg[3];
    int max = INT_MIN;
    for(int i=0; i<3; i++)
    {
        cout<<"Enter Oxygen Level of "<<i+1<<" trainee";
        for(int j=0; j<3; j++)
        {
           cin >> traine[i][j];
            
        }
    }
    // Finding Average of each trainee and store it into arr
    
    for(int i=0; i<3; i++)
    {
        int sum = 0;
        for(int j=0; j<3; j++)
        {
            sum += traine[i][j];
        }
        sum /= 3;
        avg[i] = sum; // Avg of ith trainee
    }
    // Calculating maximum avg
    for(int i=0; i<3; i++)
    {
        if(avg[i] > max)
        {
            max = avg[i];
        }
    }
    if(max < 70)
    {
        cout<<"All Trainee are unfit"<<endl;
    }
    for(int i=0; i<3; i++)
    {
        if(avg[i] == max)
        {
            cout<<"Tranee no: "<<i+1<<endl;
        }

    }
return 0;
}