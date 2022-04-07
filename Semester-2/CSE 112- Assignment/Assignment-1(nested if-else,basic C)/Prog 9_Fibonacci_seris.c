//Fibonacci series C program.
#include <stdio.h>
int main()
{
    int n, frst = 0, second = 1, next, c, sum;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    printf("First %d terms of Fibonacci series are:\n", n);
    for (c = 0; c < n; c++)
    {
        if (c <= 1)
            next = c;
        else
        {
            next = frst + second;
            frst = second;
            second = next;
        }

        printf("%d\n", next);
    }
    return 0;
}
