#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Any Number"<<endl;
    cin>>n;
    int prev,curr,i,num;
    cout<<"enter Your Numbers"<<endl;
    cin>>num;
    prev = num;
    i = 1;
    bool isDec  = true;
    while(i<n)
    {
        cin>>num;
        curr = num;
        if(prev == curr)
        {
            isDec = true;
        }
        else if(prev > curr)
        {
            isDec = true;
        }
        else if(prev < curr)
        {
            isDec = false;
        }
        prev = curr;
        i++;
    }
    if(isDec)
    {
        cout<<"false"<<endl;
    }
    else{
        cout<<"true"<<endl;
    }
    return 0;
}