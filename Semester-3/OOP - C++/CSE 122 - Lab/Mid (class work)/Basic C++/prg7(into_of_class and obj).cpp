//a simple program to set values for objects.
#include<iostream>
using namespace std;

class myclass
{
    int a;  //private to my class.
public:
    void set_a(int num);
    int get_a();
};
void myclass::set_a(int num)
{
    a=num;
}
int myclass::get_a()
{
    return a;
}
int main()
{
    myclass ob1,ob2;

    ob1.set_a(19);
    ob2.set_a(169);


    cout<<ob1.get_a()<<endl;
    cout<<ob2.get_a()<<endl;

    return 0;
}
