/*
Multilevel:-
Base class:- Vechile (properties:- numTyres,color,maxSpeed)
Derived class:- Car , Bike
*/
#include<bits/stdc++.h>
using namespace std;
class Vechile{
    // Data member
    private :
        int maxSpeed;
    protected:
        string color;
    public:
        int numTyres;
    // Constrctor
    Vechile()
    {
        cout<<"Default constructor of Vechile"<<endl;
    }
    // Vechile(int z, string c, int n)
    // {
    //     maxSpeed = z;
    //     color = c;
    //     numTyres = n;
    // }

    Vechile(int m)
    {
        maxSpeed = m;
    }
    // Destructor
    ~ Vechile()
    {
        cout<<"Default constructor of Vechile"<<endl;
    }
    // Memeber functions
    void print()
    {
        cout<<"Max Speed: "<<maxSpeed<<endl;
    }
};
class Car : public Vechile{
    protected:
        int numGeyers;
    public:
        // Constructor
        Car(int x, int y) : Vechile(x)
        {
            cout<<"Car Constructor"<<endl;
            numGeyers = y;
        }
        // destructor
        ~ Car()
        {
            cout<<"Car Destructor"<<endl;
        }
        void print()
        {
            cout<<"Bike Geyres: "<<numGeyers<<endl;
        }

};
class Bike : public Car{
    public:
    int handle;
    // Constructor
    Bike(int x, int y, int z) : Car(x,y)
    {
        cout<<"Bike Constructor"<<endl;
        handle = z;
    }
    // Destructor
    ~ Bike()
    {
        cout<<"Bike Destructor"<<endl;
    }
    // void print()
    // {
    //     cout<<"Handle: "<<handle<<endl;
    // }
};
int main()
{
    // object of vechile

    // object of car

    // object of bike
    Bike b(2,3,4);
    b.print(); // first find print in bike class then go to next class if not found
    return 0;
}