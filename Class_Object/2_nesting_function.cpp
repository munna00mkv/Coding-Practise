// Uses:- 1. if we want to access our private memeber function then use it.
// Uses:- 2. if want to access our member function without help of object then use it.
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
class Binary{
// By default our class member is private
    private:
    string str;
    void check_binary(void);
    public:
    void read(void);
    void ones_complement(void);
    void display(void);
};
void Binary::read(void)
{
    cout<<"Enter a String"<<endl;
    cin >> str;
}
void Binary::display(void)
{
    cout<<"Your Number is: "<<str<<endl;
}
void Binary::check_binary(void)
{
    for(int i=0; i<str.length(); i++)
    {
        if(str.at(i) != '0' && str.at(i) != '1')
        {
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        }
    }
}
void Binary::ones_complement()
{
    check_binary(); // we can also use here without using object
    for(int i=0; i<str.length(); i++)
    {
        if(str.at(i) == '1')
            str.at(i) = '0';
        else
            str.at(i) = '1';
    }
}
int main()
{
    Binary bin;
    bin.read();
    bin.display();
    // bin.check_binary(); // we can not use private member function here
    bin.ones_complement();
    bin.display();

    return 0;

}