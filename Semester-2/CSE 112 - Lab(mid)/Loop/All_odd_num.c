//A program to print all Odd numbers.
#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        if(i%2==1)
            printf("%d ",i);
    }
    return 0;
}
