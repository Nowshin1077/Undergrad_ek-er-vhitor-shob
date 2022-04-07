//Factorial of a number.
#include <stdio.h>

int main()
{
int i,n;
unsigned long long factorial=1;
scanf("%d",&n);
if(n<0)
printf("Error");
else
{
for(i=1; i<=n;i++)
{
factorial*=i;
}
printf("Factorial of %d = %llu",n,factorial);
}
return 0; }
