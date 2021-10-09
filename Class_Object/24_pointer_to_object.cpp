#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
        void setData(int a, int b)
        {
            real = a;
            img = b;
        }
        void getData(void)
        {
            cout<<"Real: "<<real<<endl
                <<"Imginary: "<<img<<endl;
        }
};
int main()
{
    // object of Class Complex
    // Complex c1;
    // // c1.setData(2,3);
    // // c1.getData();
    // // We can also access our public member of class using pointer to object
    // Complex *ptr = &c1;
    // // Accessing using dereferencing operator
    // (*ptr).setData(2,3);
    // (*ptr).getData();
    // // Another way to access data of class, both are same
    // // Accessing without using dereferencing operator:- use Arrow operator(->)
    // ptr->setData(3,4);
    // ptr->getData();

    // We can also create our object dynamically using new operator
    Complex *ptr = new Complex;
    ptr->setData(4,5);
    ptr->getData();
    return 0;
}