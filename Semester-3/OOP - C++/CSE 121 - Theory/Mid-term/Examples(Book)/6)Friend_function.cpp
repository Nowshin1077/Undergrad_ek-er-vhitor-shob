#include<iostream>
using namespace std;

class myclass
{
    int n,d;

public:
    myclass(int i, int j)
    {
        n=i;
        d=j;
    }
    friend int isfactor(myclass ob);//declare of a friend function

};
