#include<bits/stdc++.h>
using namespace std;
class Bank{
    protected:
        int rateOfInterest(){return 0;}
};
class Sbi : public Bank{
    public:
        int rateOfInterest(){return 6;}
};
class Icici : public Bank{
    public:
        int rateOfInterest(){return 7;}
};
class Allahabad : public Bank{
    public:
        int rateOfInterest(){return 8;}
};
int main()
{
    Sbi s;
    Icici i;
    Allahabad a;
    cout<<"Sbi rate of interest: "<<s.rateOfInterest()<<endl;
    cout<<"icici rate of interest: "<<i.rateOfInterest()<<endl;
    cout<<"Allahabad rate of interest: "<<a.rateOfInterest()<<endl;
    return 0;
}
// here we are overriding the function that is decalred in base class by derived class