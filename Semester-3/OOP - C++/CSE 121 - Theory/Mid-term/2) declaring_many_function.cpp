#include<iostream>
using namespace std;
/*void addition(int , int );
void Subtraction(int , int );
void Multiplication(int , int );
void Division(int , int );*/
void addition(int a, int b);
void Subtraction(int a, int b);
void Multiplication(int a, int b);
void Division(int a, int b);

{
    int result=a+b;
    cout<<"Sum ="<<result<<endl;

}
void Subtraction(int a, int b);
{
    int result=a-b;
    cout<<"Sub ="<<result<<endl;

}
void Multiplication(int a, int b);
{
    int result=a*b;
    cout<<"Mul ="<<result<<endl;

}

void Division(int a, int b);
{
    float result=(float)a/b;
    cout<<"Div ="<<result<<endl;

}
int main()

{  addition(100,10);
   Subtraction(100,10);
   Multiplication(100,10);
   Division(100,10);

   cout<<"All functions is called";

  return 0;

}

