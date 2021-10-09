#include<iostream>
using namespace std;
int celcius(int f)
{
    int c = (5*(f-32))/9;
    return c;
}
int main()
{
    int s,w,e;
    cout<<"Enter Starting Value"<<endl;
    cin>>s;
    cout<<"Enter Ending Value"<<endl;
    cin>>e;
    cout<<"Enter Step Size"<<endl;
    cin>>w;
    while(s <= e)
    {
        int c = celcius(s);
        cout<<s<<"\t"<<c<<endl;
        s += w;
    }
    return 0 ;

}