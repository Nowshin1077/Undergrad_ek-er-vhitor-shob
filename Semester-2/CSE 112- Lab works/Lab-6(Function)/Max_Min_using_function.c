#include<stdio.h>

int Max_Min(int a,int b,int c)

{
int Max=0,Min=0;
if(a>b&&a>c)
Max=a;
else if(b>a&&b>c)
Max=b;
else
Max=c;
if(a<b&&a<c)
Min=a;
else if(b<a&&b<c)
Min=b;
else
Min=c;
return Max,Min;
}
int main()
{
int a,b,c,d,e;
printf("Enter three numbers:");
scanf("%d %d %d",&a,&b,&c);
d,e=Max_Min(a,b,c);
printf("The Max number is:%d",d);
printf("\nThe Min number is:%d",e);

return 0;
}

