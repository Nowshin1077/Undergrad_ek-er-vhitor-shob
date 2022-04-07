#include<stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer number:");
    scanf("%d",&n);
    if((n>0)&&(n%2==0))
    printf("Its a positive even number");
    else if((n>0)&&(n%2!=0))
    printf("Its a positive odd number");
    else if((n<0)&&(n%2==0))
    printf("Its a negative even number");
    else if(n==0)
    printf("The number is zero");
    else
    printf("Its a negative odd number");
    return 0;

}
