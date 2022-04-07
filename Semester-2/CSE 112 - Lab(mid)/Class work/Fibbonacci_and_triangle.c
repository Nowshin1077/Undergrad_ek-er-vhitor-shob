#include<stdio.h>
int main()
{
    int i,j,k,n=10,a=0,b=1,temp;
    for(i=0;i<=10;i++)
    {
    if(i<=1)
    temp=i;
    else
    {
    temp=a+b;
    a=b;
    b=temp;
    for(j=1;j<=4;j++)
    {
    for(k=1;k<=4-j;k++)
    printf(" ");
    {

      printf("%d  ",temp);

    }
    }
    }
    }

    return 0;
}
