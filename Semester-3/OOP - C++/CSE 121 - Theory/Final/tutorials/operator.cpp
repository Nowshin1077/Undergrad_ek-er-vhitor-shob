//Unary operator.
#include<iostream>
using namespace std;

int main()
{
  int a,b,c,d,x,y;

  a=12; b=2; c=45; d=9;
a++;  //unary operator.

x = a + b;  //binary operator.

y = a>b ? c : d;  //ternary operator.

cout<<"a="<<a<<"x="<<x<<"y="<<y<<endl;
return 0;
}
