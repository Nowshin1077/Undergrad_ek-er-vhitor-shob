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
};

int main()
{
    student s1,s2;

    s1.id=10133;
    s1.cgpa=4.00;
    s1.display();

    s2.id=40933;
    s2.cgpa=3.83;
    s2.display();

   // cout <<"Info of s1:"<<" "<<id <<"   "<< cgpa<<endl;
   // cout <<"Info of s2:"<<" "<<id <<"   "<< cgpa<<endl;
   getch();
}

