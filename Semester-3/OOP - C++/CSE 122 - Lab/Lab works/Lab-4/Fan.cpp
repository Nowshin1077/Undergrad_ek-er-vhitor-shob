#include <bits/stdc++.h>
using namespace std;

class Fan
{
    int speed;
    bool on;
    double radius;
public:
    Fan();                            /// This is constructor
    Fan(int x, bool y, double z);     /// This is constructor
    void set(int x, bool y, double z);
    void get();
};

Fan::Fan()
{
    speed = 1;
    on = false;
    radius = 10;
}

//Fan::Fan(int x, bool y, double z)
//{
//    speed = x;
//    on = y;
//    radius = z;
//}

void Fan::set(int x, bool y, double z)
{
    speed = x;
    radius = z;
    on = y;
}

void Fan::get()
{
    cout <<  "Fan's Condition: " << on << endl;
    cout << "Speed: " << speed << endl;
    cout << "Radius: " << radius << endl;
}

int main()
{
    Fan a, b;
    a.set(3, 1, 10.0);
    b.set(2, 0, 5.0);
    a.get();
    b.get();
    return 0;
}
