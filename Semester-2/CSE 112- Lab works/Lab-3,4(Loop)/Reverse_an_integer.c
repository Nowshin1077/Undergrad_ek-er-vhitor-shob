//A C program to find Reverse of a given number.
#include <stdio.h>
#include <stdlib.h>
int main()
{
int reversed=0,n,reminder=0;
printf("Enter the number:");
scanf("%d",&n);
while(n!=0)
{
reminder=n%10;
reversed=(reversed*10)+reminder;
n=n/10;
}
printf("reversed number:%d",reversed);
return 0;
}
