// program to working of a banking system
#include<bits/stdc++.h>
using namespace std;
class Account{
    private:
        int accNo;
        string name;
        float balance;
    public:
        void setData(int a, string n, float b)
        {
            accNo = a;
            name = n;
            balance = b;
        }
        void displayInfo()
        {
            cout<<"Account No: "<<accNo<<endl
                <<"Name: "<<name<<endl
                <<"Balance: "<<balance<<endl;
        }
        void diposit(float amt)
        {
            balance = balance + amt;
            cout<<amt<<" is Disposit"<<endl;
        }
        void withDraw(float amt)
        {
            if(amt > balance)
            {
                cout<<"Insufficient Balance"<<endl;
            }
            else{
                // update balance
                balance = balance - amt;
                cout<<amt<<" is withdrawn"<<endl;
            }
        }
};
int main()
{
    // Dynamic object
    Account *a1 = new Account;
    a1->setData(1234,"munna",50000);
    a1->displayInfo();
    a1->diposit(4000);
    a1->withDraw(3000);
    a1->displayInfo();
    // static object
    Account a2;
    a2.displayInfo();
    

    return 0;
}