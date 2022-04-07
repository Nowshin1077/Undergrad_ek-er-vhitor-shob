#include<stdio.h>
int main()
{
    int a,b,c,d,e,max;
    printf("Enter five integer number:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if (max<a)
    max=a;
    if(max<b)
    max=b;
    if(max<c)
    max=c;
    if(max<d)
    max=d;
    else
    max=e;
    printf("The Greatest number among five numbers=%d\n",max);

    if(a==b)
    printf("a and b are equal");
    else if(b==c)
    printf("b and c are equal");
    else if(c==a)
    printf("c and a are equal");
    else if(c==d)
    printf("c and d are equal");
    else if(d==e)
    printf("d and e are equal");
    else if(e==a)
    printf("e and a are equal");
    else
    printf("There is no equal number");

    return 0;
}
