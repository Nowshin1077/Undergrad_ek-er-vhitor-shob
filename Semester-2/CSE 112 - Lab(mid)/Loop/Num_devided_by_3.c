//Print all numbers that are divided by 3 without if/else condition.
#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=3; i<=n; i+=3)
        printf("%d ",i);
    return 0;
}
