#include<stdio.h>
 main()
{
   int n, c = 2,k,result;

   printf("Enter a number to check if it is prime and fibonacci\n");
   scanf("%d",&n);

   for ( c = 2 ; c <= n - 1 ; c++ )
   {
      if ( n%c == 0 )
      {
         printf("%d is not prime.It's a Fibonnaci number.\n", n);
	 break;
	 else if
        printf("%d is  Fibonnaci number.\n", n);
      }
   }
   if ( c == n )
       k=n;
       ;
       fibonacci(k);

   return 0;
}


int fibonacci(int n)
{
int a = 0;
int b = 1;
int sum;
int i;
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
