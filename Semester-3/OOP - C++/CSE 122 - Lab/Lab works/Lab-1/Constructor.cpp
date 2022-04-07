#include<iostream>
using namespace std;

class building
{
public:
    building();
    float height,width,area;

    void set_height();
    void set_width();
    void get_area();
};
int main()
{
    building b1;

    b1.set_height();
    b1.set_width();
    b1.get_area();

    return 0;
}
building::building()
{
    cout<<"I love programming";
}
void building::set_height()
{
    cout<<"\n\nEnter height:";
    cin>>height;
}
void building::set_width()
{
    cout<<"Enter width:";
    cin>>width;
}
void building::get_area()
{
    area=height*width;
    cout<<"The area of the floor:";
    cout<<area;
}
