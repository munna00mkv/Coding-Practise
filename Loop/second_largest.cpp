#include<iostream>
using namespace std;
int main()
{
    int n,num,i,max,second_max;
    cout<<"Enter Any Number"<<endl;
    cin>>n;
    if(n == 0 || n == 1)
    {
        cout<<INT_MIN<<endl;
    }
    else
    {
    cout<<"enter Yours Number"<<endl;
    cin>>num;
    int curr = num;
    second_max = max = INT_MIN;
    if(curr > max)
    {
        second_max = max;
        max = curr;
    }
    i = 1;
    while(i < n)
    {
        cin>>num;
        curr = num;
        if(curr > max)
        {
            second_max = max;
            max = curr;
        }
        else if(curr > second_max && curr < max)
        {
            second_max = curr;
        }
        i++;
    }
    cout<<"Max is "<<max<<endl;
    cout<<"Second Max is "<<second_max<<endl;
    }

}