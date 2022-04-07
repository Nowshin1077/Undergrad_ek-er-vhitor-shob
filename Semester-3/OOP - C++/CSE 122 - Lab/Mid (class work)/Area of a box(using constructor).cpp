#include<iostream>
using namespace std;
class box

{
    float height,weight;
public:
    double area;
    box();
    box(float,float);
    void set_height();
    void set_width();
    double get_area();
};
box b1;
box b2(5.2,10.3);
double area;
b1.set_height()
b1.set_width()
area=b1.get_area()
     box::box()
{
    height=0.0;
    width=0.0;
}
box::box(float x,float y)
{
    height=x;
    width=y;
}
void box::set_height(void)
{
    cout<<"Enter the height"<<endl;
    cin>>height;
    cout<<"Enter the width"<<endl;
    cin>>width;
    cout<<"Area is:"<<endl;
}
double box::get_area(void)
{
    area=height*width;
    return area;
}
