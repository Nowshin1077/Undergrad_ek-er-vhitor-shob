#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer number:");
    scanf("%d",&n);
    switch(n%2==0)
    {
    case 1:
   printf("Even number");
   break;
    default:
    printf("Odd number");
    }
    return 0;
}
