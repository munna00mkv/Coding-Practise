#include<bits/stdc++.h>
using namespace std;
class Polymorphism{
    public:
        int sum(int a,int b)
        {
            return a+b;
        }
        int sum(int a, int b, int c)
        {
            return a+b+c;
        }
        float sum(float a,float b)
        {
            return a+b;
        }
        float sum(float a, float b, float c)
        {
            return a+b+c;
        }
};
int main()
{
    Polymorphism p;
    cout<<p.sum(2,3)<<endl;
    cout<<p.sum(2,3,4)<<endl;
    cout<<p.sum(2.3f,3.4f)<<endl;
    cout<<p.sum(2.3f,4.4f,5.5f)<<endl;
    return 0;
}