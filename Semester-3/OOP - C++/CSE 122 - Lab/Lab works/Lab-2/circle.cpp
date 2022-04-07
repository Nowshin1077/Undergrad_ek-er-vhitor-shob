#include <bits/stdc++.h>
using namespace std;

class circle
{
    double radius;
public:
    circle(); /// This is constructor
    void set_radius();
    double get_area();
    double sum();
};

circle::circle()
{
    radius = 1;
}

void circle::set_radius()
{
    static int i=0;
    cout << "Enter radius of circle  " << i <<" :";
    cin >> radius;
    i++;
}

double circle::get_area()
{
    int area;

    area = 3.1415 * radius* radius;

    return area;

}
double circle:: sum()
{
    int area;
   area = 3.1415 * radius* radius;
    return area;
}

int main()
{
    int sum = 0;
    circle a[10];
    for(int i=0; i<10; i++)
    {
        a[i].set_radius();
    }

    for(int i=0; i<10; i++)
    {
        cout << "Area of circle: " << i+1 << a[i].get_area() << endl;
    }

    for(int i=0; i<10; i++)
    {
        sum =  sum + a[i].sum();
    }

    cout << "Total area of the circles are : " << sum  << endl;


    return 0;
}
