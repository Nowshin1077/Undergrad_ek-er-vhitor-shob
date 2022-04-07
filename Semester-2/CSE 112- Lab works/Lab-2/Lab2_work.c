
/* A program to find largest and equal using max.*/

#include<stdio.h>
int main()

{
    int a,b,c,d,e,f,g,h,max=a;
    printf("Enter eight integer number:");
    scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
    if(max<b)
    max=b;
    if(max<c)
    max=c;
    if(max<d)
    max=d;
    if(max<e)
    max=e;
    if(max<f)
    max=f;
    if(max<g)
    max=g;
    if(max<h)
    max=h;
    printf(" The greatest number is=%d\n",max);
    return 0;


}
