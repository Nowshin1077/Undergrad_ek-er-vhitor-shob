//Fibonacci plus prime print.
#include<stdio.h>
int main()
{
    int n, i=2,j,result;

    printf("Enter a number to check if it is prime or fibonacci:\n");
    scanf("%d",&n);

    for ( i = 2 ; i <= n - 1 ; i++ )
    {
        if ( n%i == 0 )
        {
            printf("%d is not prime.It is fibonacci number\n", n);
            break;
        }
    }
    if ( i == n )
        j=n;
    ;
    fibonacci(j);

    return 0;
}


int fibonacci(int n)
{
    int i,a = 0,b = 1,sum;

    while(sum<n)
    {
        sum = a + b;
        a = b;
        b = sum;
        if (sum==n)
            printf("%d",sum);
    }
    return 0;
}

