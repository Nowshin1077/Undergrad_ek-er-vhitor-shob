#include<iostream>
using namespace std;
class MyPoint{
public:
    double x,y;
    MyPoint()
    {
        x=0.0;
        y=0.0;
    }
    MyPoint(double a,double b)
    {
        x=a;
        y=b;
    }
    void getx()
    {
        cout << "The X coordinate is:"<<x<<endl;
    }
    void gety()
    {
        cout << "The Y coordinate is:"<<y<<endl;
    }
    void operator-(MyPoint ob)
    {
        cout << "Distance between X coordinate is:"<< x-ob.x<<endl;
        cout << "Distance between Y coordinate is:"<< y-ob.y<<endl;

    }
};
int main()
{
    MyPoint p1,p2(10.0,30.5);
    p1.getx();
    p1.gety();
    p2.getx();
    p2.gety();
    p2-p1;
}
