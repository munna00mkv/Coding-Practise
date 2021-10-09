// We can create dynamic object using constructor i.e- object is creted after user input
#include<iostream>
using namespace std;
class BankDeposit{
    private:
        int principal;
        int time;
        float rate;
        float si;
    public:
        // if we use parameterized constructor then there must be default constructor
        BankDeposit(){};
        // Constructor with rate float value
        BankDeposit(int p, int t, float r);
        // Constructor with rate int value
        BankDeposit(int p, int t, int r);
        void calculateSI()
        {
            cout<<"p "<<principal<<endl;
            cout<<"r "<<rate<<endl;
            cout<<"t "<<time<<endl;
            si = (principal * rate * time)/100;
            cout<<"Si = "<<si<<endl;
        }
};
BankDeposit :: BankDeposit(int p, int t, float r)
{
    principal = p;
    time = t; 
    rate = r;
}
BankDeposit :: BankDeposit(int p, int t, int r)
{
    principal = p;
    time = t;
    rate = float(r);
}
int main()
{
    int p,t;
    float r;
    int R;
    cout<<"Enter p,t and r"<<endl;
    cin >> p>>t>>r;
    // Calling object at runtime
    BankDeposit bd1 = BankDeposit(p,t,r);
    bd1.calculateSI();
    cout<<"Enter p,t and R"<<endl;
    cin >> p>>t>>R;
    BankDeposit bd2 = BankDeposit(p,t,R);
    bd2.calculateSI();

    
    return 0;
}