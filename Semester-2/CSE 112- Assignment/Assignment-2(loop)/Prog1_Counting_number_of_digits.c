#include<stdio.h>

int main()
{
    int n,temp,c=0;
    printf("Enter a number:");
    scanf("%d",&n);

    temp=n;
    for( ;temp!=0; )
    {
    temp=temp/10;
    c++;
    }
    printf("\nThere are %d digit(s).\n",c);

    return 0;
}
