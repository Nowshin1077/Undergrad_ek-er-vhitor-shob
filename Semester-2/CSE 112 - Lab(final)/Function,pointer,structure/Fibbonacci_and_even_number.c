#include<stdio.h>

int main()
{
    int a=0,b=1,temp=0,i,n;
    printf("Enter range:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=a+b;
        a=b;
        b=temp;}
        if(temp%2==0)
        printf("%d",temp);
        else
        printf("Not even\n");

    return 0;
}
