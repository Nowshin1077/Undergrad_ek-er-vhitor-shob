#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public:

long long id;
double cgpa;

void display()
{
   cout <<id <<"   "<< cgpa<<endl;
}

void set_value(long long x, double y)
{
    id=x;
    cgpa=y;
}
};

int main()
{
    student s1,s2;

    s1.set_value(1213,4.00);
    s1.display();

    s2.set_value(1970,3.72);
    s2.display();
    getch();
}


