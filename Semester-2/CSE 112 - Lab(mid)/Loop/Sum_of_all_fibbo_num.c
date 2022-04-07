//Sum of all Fibonacci number.
#include <stdio.h>

    int main()
{
    int n, first = 0, second = 1, reminder=0,sum=0, i;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    for (i = 0; i<= n; i++)
    {

        i=first;
        printf("%d ",first);
        reminder=first+second;
        first=second;
        second=reminder;
        sum=sum+first;
    }
    printf("\nsum of fibonacci number: %d",sum);
    return 0;
}
