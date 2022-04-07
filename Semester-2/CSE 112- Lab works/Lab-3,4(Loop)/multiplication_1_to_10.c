//Multiplication 1 to 10.
#include <stdio.h>

int main()
{
int i,j,n;
for(j=1; j<=10; j++)
{
printf("\nMultiplication of %d\n",j);
for(i=1; i<=10; i++)
printf("%d * %d = %d\n",j,i,j*i);
}
return 0;
}
