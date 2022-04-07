#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,j,n,rslt=0;
printf("Enter an positive integer:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
j=pow(2,i);
rslt=rslt+j;
printf("2^%d=%d\n",i,j);
}
printf("\nAddition of total:%d\n",rslt);
return 0;
}
