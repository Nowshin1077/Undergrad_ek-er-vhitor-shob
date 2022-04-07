#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public:

int id;
double cgpa;

void display()
{
   cout <<id <<"   "<< cgpa<<endl;
}
student(int x,double y)
{
    id=x;
    cgpa=y;

}
student()
{
    cout<<"Default constructor " <<endl;
}
};

int main()
{
    student ob;
    student s1(113,3.83);
    s1.display();

    student s2 (167,3.72);
    s2.display();
    getch();
}



