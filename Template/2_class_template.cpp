#include<iostream>
using namespace std;
template <class T>
class Sum{
    private:
        T a,b;
    public:
        void setData(T n1, T n2){a = n1; b = n2;}
        void getData(){cout<<"Sum is "<<a+b<<endl;}
};
int main()
{
    // passing int data type to template class
    Sum<int> s;
    s.setData(2,3);
    s.getData();
    // passing float Data type to template class
    Sum<float> f;
    f.setData(3.33,4.44);
    f.getData();
    return 0;
}


// Making member function and constructor as template
// Making class as Template
// template<class T>
// class Sum{
//     private:
//         T a,b;
//     public:
//         Sum(T n1, T n2);
//         void print();
// };
// // Declaring member function as template
// template<class T>
// Sum<T>::Sum(T n1, T n2)
// {
//     a = n1;
//     b = n2;
// }
// template<class T>
// void Sum<T>::print()
// {
//     cout<<"Sum: "<<a+b<<endl;
// }
// int main()
// {
//     // Creating object ans pass int value
//     Sum<int> s(2,3);
//     s.print();
//     //Creating object and passing float value
//     Sum<float> f(2.3,3.4);
//     f.print();
//     return 0;
// }