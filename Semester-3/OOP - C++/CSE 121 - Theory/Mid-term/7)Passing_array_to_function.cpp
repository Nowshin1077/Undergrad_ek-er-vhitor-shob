#include<iostream>
#include<conio.h>
using namespace std;


void display_array(int num[],int size)//array size optional
{
    for(int i=0;i<=4;i++)
    cout<<num[i]<<" ";
}


int main()
{
int number[5]={10,20,03,7,6};
display_array(number,5);
getch();
}
