// sum of two number using friend function
#include<iostream>
using namespace std;
class Sum{
    int n1,n2;
    public:
        void setData(int a, int b)
        {
            n1 = a; n2 = b;
        }
        void getData()
        {
            cout<<"First Number: "<<n1<<endl;
            cout<<"Second Number: "<<n2<<endl;
        }
        friend int sumNum(Sum s);
};
// Function that calculate sum of two numnber
int sumNum(Sum s)
{
    return s.n1 + s.n2;
}
int main()
{
    Sum s1;
    s1.setData(2,3);
    s1.getData();
    int sum = sumNum(s1);
    cout<<"Sum is "<<sum<<endl;
    return 0;
}