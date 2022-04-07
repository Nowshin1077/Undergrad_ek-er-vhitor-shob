#include<stdio.h>
int main()
{
    int a,b,result;
    printf("Enter Two integer number:");
    scanf("%d %d",&a,&b);
    if(a>b)
    result=a;
    else if(a<b)
    result=b ;

    switch(result)
    {
    case 0:
        printf("b is the Greatest one");
        break;

    case 1:
        printf("a is the Greatest one");
        break;
   default:
    printf("Invalid");
    }
    return 0;
}



