//Compute "2^0 + 2^1 + 2^2 + ... + 2^14" using loop.
#include<stdio.h>
#include<math.h>

int main()
{
    int i,a=2,b=14,sum=0;//base=a,power=b

    for(i=0; i<=b; i++)
    {
        sum=sum+pow(a,i);
    }
    printf("%d\n",sum);
    return 0;
}
