//Print all even number.
#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        if(i%2==0)
            printf("%d ",i);
    }
    return 0;
}
