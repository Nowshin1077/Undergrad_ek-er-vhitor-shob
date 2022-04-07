#include<stdio.h>

float Max(float a,float b,float c)

{
float Max=0;
if(a>b&&a>c)
Max=a;
else if(b>a&&b>c)
Max=b;
else
Max=c;
return Max;
}
int main()
{
float a,b,c,d;
printf("Enter three numbers:");
scanf("%f %f %f",&a,&b,&c);
d=Max(a,b,c);
printf("The Max number is:%.2f",d);
getch();
return 0;
}
