#include<stdio.h>

int main()
{
    int n,rem=0,result,i,j;

    printf("Enter a number:");
    scanf("%d",&n);

    result=n;
    for( ; result!=0; )
    {
        rem=result%10;
        i=rem;
        result=result/10;
        j=n%10;
    }
    printf("\nThe first digit is: %d\nThe last digit is:%d\n",i,j);
    return 0;
}
