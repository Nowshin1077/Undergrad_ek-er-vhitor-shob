//number series print
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        printf("%d ",i);
    return 0;
}
