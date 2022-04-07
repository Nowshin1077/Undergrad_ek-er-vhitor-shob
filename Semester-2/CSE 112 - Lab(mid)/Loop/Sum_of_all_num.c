//Sum of all numbers.
#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nsum of all numbers= %d",sum);
    return 0;
}
