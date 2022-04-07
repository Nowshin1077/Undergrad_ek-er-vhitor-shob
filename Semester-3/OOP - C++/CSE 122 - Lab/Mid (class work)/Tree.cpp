#include<iostream>
using namespace std;

class tree
{
public:
    float height,width;
    void set_height();
     void set_width();
      void display();

};
int main()
{
    tree t1;

    {
    t1.set_height();
    t1.set_width();
    t1.display();
    }
return 0;
}
void tree::set_height()
{
height=20.00;
}
void tree::set_width()
{
width=5.00;
}
void tree::display()
{
    count <<"HEIGHT="<<height<<end;
    count <<"WIDTH="<<width<<end;
}
