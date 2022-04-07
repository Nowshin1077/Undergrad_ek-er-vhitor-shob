#include<iostream>
using namespace std;

class coord
{
    int x,y;
public:
    coord()
    {x=0; y=0;}
    coord(int i, int j)
    {x=i; y=j;}
    void get_xy(int &i, int &j)
    {i=x; j=y;}
    int operator == (coord ob2);
    int operator && (coord ob2);

};
int coord::operator==(coord ob2)
{
    return x==ob2.x && y==ob2.y;
}
int coord::operator &&(coord ob2)
{
    return (x && ob2.x) && (y&& ob2.y);
}
int main()
{
    coord ob1(10,10), ob2(5,3), ob3(10,10), ob4(0,0);

    if(ob1==ob2) cout<<"ob1 same as ob2\n";
    else cout<<"ob1 and ob2 differ \n";

    if(ob1==ob3) cout<<"ob1 same as ob3\n";
    else cout<<"o1 and o2 differ \n";

    if(ob1&&ob2) cout<<"ob1 && ob2 is true\n";
    else cout<<"ob1 && ob2 is false \n";

    if(ob1&&ob4) cout<<"ob1 && ob4 is true\n";
    else cout<<"ob1 && ob4 is false\n";

    return 0;
}
