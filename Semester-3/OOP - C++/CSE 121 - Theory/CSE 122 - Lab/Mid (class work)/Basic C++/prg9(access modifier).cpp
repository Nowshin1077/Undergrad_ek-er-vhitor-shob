#include<iostream>
using namespace std;
class myclass
{
public:
int a;  //now a is in public.
//there is no need of set_a() or get_a()
};

int main()
{
myclass ob1,ob2;
//here a is accessed directly.
ob1.a=10;
ob2.a=98;

cout<<ob1.a<<endl;
cout<<ob2.a<<endl;

return 0;
}
