/*Destructor:- 
-it is opposite is to the constructor, it is used to destroy object
i.e it free memory space that is allocated by the constructor
- it doesn't take any argument and it has not any return type*/
#include<iostream>
using namespace std;
class Num{
    static int count;
    public:
     Num()
     {
         count++;
         cout<<"Cnstructor is called for object "<<count<<endl;
     }
     ~Num()
     {
         cout<<"Destructor is called for object "<<count<<endl;
     }
};
int Num :: count;
int main()
{
    Num n1,n2,n3;
    return 0;
}