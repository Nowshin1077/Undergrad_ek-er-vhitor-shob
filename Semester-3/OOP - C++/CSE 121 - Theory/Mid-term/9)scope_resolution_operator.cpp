#include<iostream>
#include<conio.h>
using namespace std;
int x = 100;
void display()
{
    cout<<"Inside the display x="<<x<<endl;
}

int main()
{
 int x = 10;
 cout << "Inside the main function x="<<::x<<endl;

  display();
getch();
}
