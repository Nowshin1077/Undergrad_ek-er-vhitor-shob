#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public:

long long id;
double cgpa;

};

int main()
{
    student s1,s2;

    s1.id=10133;
    s1.cgpa=4.00;
    s2.id=40933;
    s2.cgpa=3.83;

    cout <<"Info of s1:"<<" "<<s1.id <<"   "<< s1.cgpa<<endl;
    cout <<"Info of s2:"<<" "<<s2.id <<"   "<< s2.cgpa<<endl;
   getch();
}
