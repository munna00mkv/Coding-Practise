// Using Array in Class
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Shop{
int itemId[10];
int itemPrice[10];
int counter;
public:
    // Defining a member function that initialize counter 0 intially
    void increment()
    {
        counter = 0;
    }
    // Decalaring member function
    void setData(void);  
    void getData(void);
};
// Defining member function
void Shop :: setData()
{
    cout<<"Enter id of "<<counter+1<<" item"<<endl;
    cin >> itemId[counter];
    cout<<"Enter Price of "<<counter+1<<" item"<<endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop :: getData()
{
    for(int i=0; i<counter; i++)
    {
        cout<<"price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main()
{
    Shop s;
    // Calling increment function to intialize value of counter by 0
    s.increment();
    // Calling setData Function 3 times to value in array
    s.setData();
    s.setData();
    s.setData();
    // Calling getData Funtcion
    s.getData();
    return 0;
}