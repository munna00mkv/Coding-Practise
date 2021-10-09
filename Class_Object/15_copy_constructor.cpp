/*copy constructor:- 
-- it is used to pass copy of one constructor into other constructor
-- whenever copy constructor is invoked our compiler try to find copy constructor in the class
if not found then compiler supply their own copy construcor to each class
syntex:- 
constructor_name(Class_name &object_name)
{
    data_member = object_name.data_member;
 }*/

 #include<iostream>
 using namespace std;
 class Number{
     int a;
     public:
        // Make sure to provide default constructor because whenever you create an object then compiler try to find default constructor
        Number(){
            a = 0;
        };
        Number(int num1)
        {
            a = num1;
        }
        // Copy Constrcutor
        Number(Number &obj)
        {
            cout<<"Copy constructor is invoked"<<endl;
            a = obj.a;
        }

        void show()
        {
            cout<<"Number is: "<<a<<endl;
        }
 };
 int main()
 {
     Number x,y; // in this if you not use default constructor then its give you error
     Number z(15),z1;
     x.show();
     y.show();
     z.show();
    z1 = z; // Not invoked copy constructor because z1 object is alredy declare and passing only value of z
    z1.show();

    Number z2(z); // Copy constructor is invoked
    z2.show();
 }