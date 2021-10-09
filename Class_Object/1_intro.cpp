#include<bits/stdc++.h>
using namespace std;
class Number{
    private:
    int a,b,c;  // We Can't access these outside the class directly
    public:
    int d,e;  // We can access these anywhere
    void setData(int a1,int b1,int c1); // Declaration | we can also define our function here but class will be complex
    void getData();
};
// Define our function here that we declare in our class uisng scope resolution operator(::)
void Number :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
void Number :: getData()
{
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
    cout<<"d: "<<d<<endl;
    cout<<"e: "<<e<<endl;
    
}
int main()
{
    // Create object of class
    Number n;
    // Access public data of class, here we can't access a,b,c(private Data of class)
    n.d = 4;
    n.e = 5;
    // Call function
    n.setData(1,2,3);
    n.getData();
    return 0;
}