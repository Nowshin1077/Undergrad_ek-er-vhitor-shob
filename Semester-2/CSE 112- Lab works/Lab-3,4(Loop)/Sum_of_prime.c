//Summation of prime numbers in a given range.
#include <stdio.h>
int main()
{
    int num,i,j,flag,count=0;
    printf("Enter an positive integer numbers:");
    scanf("%d",&num);
    for(i=2; i<=num; i++)
    {
        flag=1;
        for(j=2; j<=i/2; j++)
            if(i%j==0)
            {
                flag=0;
                break;
            }
        if(flag==1)
        {
            count+=i;
        }
    }
    printf("sum=%d",count);
    return 0;
}
