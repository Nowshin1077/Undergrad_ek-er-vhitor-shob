#include<iostream>
using namespace std;
class Box
{
    float height,width,area;
public:
    void set_height();
    void set_width();
    double get_area();
    Box()
    {
        height=0.0;
        width=0.0;
    }
    Box(float x,float y)
    {
        height=x;
        width=y;
    }
    ~Box()
    {
    }
};
int main()
{
    double area;
    Box b1,b2(5.0,10.0);
    b1.set_height();
    b1.set_width();
    area=b1.get_area();
    cout << "The area of first one:" << area <<endl;
// b2.set_height();
//b2.set_width();
    area=b2.get_area();
    cout << "The area of second one:" << area <<endl;;
}
void Box :: set_height()
{
    cout << "Enter height:" <<endl;
    cin >> height;
}
void Box :: set_width()
{
    cout << "Enter width:" <<endl;
    cin >> width;
}
double Box :: get_area()
{
    area=height*width;
    return area;
}

