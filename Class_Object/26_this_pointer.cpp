/*this keyword is a pointer that points the object which invoked that member function
where our this pointer is.
-- it also return the current object*/
#include<iostream>
using namespace std;
class A{
    int a;
    public:
    // previous we have used argument as another variable but we can use same variable name by using this pointer
        // void setData(int a1)
        // {
        //     a = a1;
        // }
        // using this pointer
        // void setData(int a)
        // {
        //     this->a = a;
        // }
        // this pointer also return object
        A & setData(int a)
        {
            this->a = a;
            return *this;
        }
        void getData()
        {
            cout<<"a: "<<a<<endl;
        }
};
int main()
{
    A a1;
    a1.setData(2).getData();
    // a1
    a1.getData();

    return 0;
}