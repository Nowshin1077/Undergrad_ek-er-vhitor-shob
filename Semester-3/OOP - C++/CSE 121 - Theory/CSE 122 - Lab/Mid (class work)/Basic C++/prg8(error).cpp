#include<iostream>
using namespace std;

int main()
{
    myclass ob1,ob2;

    ob1.a=10;//Error! can't access private member
    ob2.a=99;//by non-member function.

    cout<<ob1.get_a()<<endl;
    cout<<ob2.get_a()<<endl;

    return 0;
}
