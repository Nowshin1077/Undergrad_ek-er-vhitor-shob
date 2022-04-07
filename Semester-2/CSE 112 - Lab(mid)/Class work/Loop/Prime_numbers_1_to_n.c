#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("Enter any positive integer number:");
    scanf("%d",&num);
    for(i=2;i<num;i++){
    if(num%i==0)
    {
    count++;
    break;
    }
    }
    if(count==0)
    printf("Prime number");
    else
    printf("Not prime number");
    getch();
    return 0;
}
