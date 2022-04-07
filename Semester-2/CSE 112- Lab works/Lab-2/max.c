//Find maximum number among 5 numbers.
#include<stdio.h>
int main()
{
    int a,b,c,d,e,max;
    printf("Enter five integer number:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a<b)
    max=b;
    else if(b<c)
    max=c;
    else if(c<d)
    max=d;
    else if(d<e)
    max=e;
    else
    max=a;
    printf("\nMax number is:%d",max);
    return 0;
}

