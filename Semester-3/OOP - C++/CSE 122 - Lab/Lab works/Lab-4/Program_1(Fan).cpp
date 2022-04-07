#include<iostream>
using namespace std;

class fan
{

public:
    int speed;
    bool f;
    double radius;

fan()
{
    speed=1;f=false;radius=10;
}
void set_value(int x,bool y,double z);
void get();
};
void fan::set_value(int x,bool y,double z)
{
speed=x;f=y;radius=z;
}
void fan::get()
{
cout<<"Fan Speed:"<<speed<<endl;
if(f==true)
cout<<"Fan is On"<<endl;
if(f==false)
cout<<"Fan is Off"<<endl;

cout<<"Fan Radius:"<<radius<<endl;
}
int main()
{
fan f1,f2;

f1.set_value(3,true,10);
f2.set_value(2,false,5);
f1.get();
f2.get();
return 0;
}

