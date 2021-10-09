#include<bits/stdc++.h>
using namespace std;
class Shape{
    protected:
        int a,b;
    public:
        void getData(int m, int n)
        {
            a = m;
            b = n;
        }
};
class Rectangle : public Shape{
    public:
    int r_area()
    {
        return a*b;
    }
};
class Triangle : public Shape{
    public:
    float t_area()
    {
        return (0.5 * a * b);
    }
};
int main()
{
    // Object of Rectangle
    Rectangle rec;
    int len,width;
    cout<<"Enter Length and Width: "<<endl;
    cin >> len >> width;
    // passing len and width to shape class method
    rec.getData(len,width);

    // Object of Triangle
    Triangle tri;
    int base,height;
    cout<<"Enter Base and Heigth:"<<endl;
    cin >> base>>height;
    // passing base and height to shape class method
    tri.getData(base,height);

    // Area of Rectangle
    int res = rec.r_area();
    cout<<"Rectangle Area: "<<res<<endl;
    // Area of Triangle
    float ans = tri.t_area();
    cout<<"Triangle Area: "<<ans<<endl;
    return 0;
}