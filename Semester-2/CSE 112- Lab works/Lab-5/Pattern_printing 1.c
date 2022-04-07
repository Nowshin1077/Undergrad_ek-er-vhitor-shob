//Pattern printing 1.
#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
    for(j=1;j<=5;j++)
    if(i==3)
    printf("0 ");
    else
    printf("* ");

    printf("\n");

   }
    return 0;
}
