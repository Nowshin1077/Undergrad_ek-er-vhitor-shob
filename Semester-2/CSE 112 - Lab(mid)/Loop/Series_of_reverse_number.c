//series of reverse number.
#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    for(i=n; i>=0; i--)
    {
        printf("%d ",i);
    }
    return 0;
}
