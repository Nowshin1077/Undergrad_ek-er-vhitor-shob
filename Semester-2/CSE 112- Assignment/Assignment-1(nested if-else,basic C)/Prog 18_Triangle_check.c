#include<stdio.h>
int main()
{
    int a,b,c;//side1=a,side2=b,side3=c
    printf("Enter three sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    printf("This is a Equilateral triangle");
    else if(a==b||b==c||c==a)
    printf("This is a Isosceles triangle");
    else
    printf("This is a Scalene triangle");

    return 0;

}
