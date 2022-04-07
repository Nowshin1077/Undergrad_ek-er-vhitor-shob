#include<iostream>
#include<conio.h>
using namespace std;

void square(int n)
{
    int result=n*n;
    cout<<"Square:",<<result<<endl;
}
int main()
{
square(5);
square(7);
square(10);
getch();
}
