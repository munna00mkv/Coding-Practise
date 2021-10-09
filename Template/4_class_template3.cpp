// We can also pass multiple data type at one time
#include<iostream>
using namespace std;
template<class T1, class T2,class T3>
class Show{
    private:
        T1 a;
        T2 b;
        T3 c;
    public:
        Show(T1 d1, T2 d2, T3 d3)
        {
            a = d1;
            b = d2;
            c = d3;
        }
        void print();
};
template <class T1, class T2, class T3>
void Show<T1,T2,T3> :: print()
{
    cout<<"First Data: "<<a<<endl
        <<"Second Data: "<<b<<endl
        <<"Third Data: "<<c<<endl;
}
int main()
{
    // Making object of class and passing different data
    Show<int ,float,char> s(2,3.5,'c');
    s.print();
    return 0;
}