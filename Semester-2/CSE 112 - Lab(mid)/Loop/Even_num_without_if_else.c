//A program to print all even numbers without using if/else condition.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2; i<=n; i+=2)
        printf("%d ",i);
    return 0;
}
