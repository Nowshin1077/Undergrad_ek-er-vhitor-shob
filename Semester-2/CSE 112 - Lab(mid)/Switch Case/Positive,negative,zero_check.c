#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer number:");
    scanf("%d",&num);
    switch(num>0)
    {
    case 1:
        printf("\nPositive number");
        break;
    case 0:
        switch(num<0)
       {
    case 1:
        printf("\nNegative number");
        break;
    case 0:
            printf("\nZero");
            break;
    default:
        printf("Invalid input");
    }
    break;
    }
    return 0;
}

