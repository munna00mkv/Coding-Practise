#include<iostream>
using namespace std;
// Forward Declaration of class Y
class Y;
class X{
    int num1;
    public:
        void setNum1(void){
            cout<<"Enter First Number: "<<endl;
            cin >> num1;
        }
        void getNum1(void)
        {
            cout<<"First Number is: "<<num1<<endl;
        }
        friend int sum(X,Y);
};

class Y{
    int num2;
    public:
        void setNum2(void){
            cout<<"Enter Second Number: "<<endl;
            cin >> num2;
        }
        void getNum2(void)
        {
            cout<<"Second Number is: "<<num2<<endl;
        }
        friend int sum(X,Y);
};
// Function that access private data of both class
int sum(X a, Y b)
{
    return a.num1 + b.num2;
}
int main(){
    X a;
    Y b;
    a.setNum1();
    a.getNum1();

    b.setNum2();
    b.getNum2();
    int ans = sum(a,b);
    cout<<"Sum is: "<<ans<<endl;
    return 0;
}