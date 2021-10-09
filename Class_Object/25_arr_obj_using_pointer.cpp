/*Create a shop class and print its 3 item price using pointer to object*/
#include<iostream>
using namespace std;
class Shop{
    int id;
    int price;
    public:
        void setData(int i, int p)
        {
            id = i;
            price = p;
        }
        void getData(void)
        {
            cout<<"id: "<<id<<endl
                <<"price: "<<price<<endl;
        }
};
int main()
{
    int size = 3;
    // creating an array of object dynamically
    Shop *ptr = new Shop[size]; // object of size 3:- object:- obj1, obj2, obj3
    Shop *ptrTemp = ptr; // Declaring a new pointer and intilize it with ptr
    // Note:- intially ptr and ptrTemp is pointing first object(ptr and ptrTemp -> obj1)
    // set data of each item
    int p,q;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter id and price of "<<i+1<<" item: "<<endl;
        cin >>p>>q;
        ptr->setData(p,q); // intially pointer is pointing to first object(obj1)
        ptr++; // increase pointer to next object
    }
    // Note:- at the end of for loop ptr will be pointing to the obj3(ptr->obj3)
    // get data of each item
    for(int i=0; i<size; i++)
    {
        // ptr->getData(); // we cannot use ptr here because ptr is pointing to obj3 
        // here we will use ptrTemp which is pointing to obj1
        cout<<"Item no "<<i+1<<endl;
        ptrTemp->getData(); // intially ptrTemp is pointing obj1(i.e it will show first object data)
        ptrTemp++; // increase pointer to next object
    }
    return 0;
}