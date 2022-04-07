/*A C program to check whether number is POSITIVE, NEGATIVE or ZERO until user doesn't want
to exit.*/
#include <stdio.h>
int main()
{
    int num;
    char decision;
    do
    {
        printf("Enter an integer number :");
        scanf("%d",&num);
        if(num>0)
            printf("Number is POSITIVE.");
        else if(num<0)
            printf("Number is NEGATIVE.");
        else if(num==0)
            printf("Number is ZERO.");
        printf("\n\nWant to check again (press Y/y for 'yes') :");
        scanf(" %c",&decision);
    }
    while(decision=='Y' || decision=='y');
    printf("\nBye Bye!!!");
    return 0;
}
