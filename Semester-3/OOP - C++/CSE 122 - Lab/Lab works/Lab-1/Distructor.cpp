#include<iostream>
using namespace std;

class building
{
public:
    building();
    float height,width,area;

    void set_height();
    {
        cin>>height;
    }

    void set_width();
    {
        cin>>width;
    }

    void get_area();
    {
        area=height*width;
        cout<<"The area of the floor:"<<area<<endl;
    }
    building()
    ~building()
    {
        cout<<"I am Destroyed";count<<endl;
    }


};
int main()
{
    building b1;

    b1.set_height();
    b1.set_width();
    b1.get_area();

    return 0;
}


