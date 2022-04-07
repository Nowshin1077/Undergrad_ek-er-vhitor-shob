#include<stdio.h>
int main()
{
    int num;

    printf("Enter an integer number:");
    scanf("%d",&num);

    switch (num % 2)
    {
    case 0:
    printf("\nNumber is Even");
    break;

    case 1:
    printf("\nNumber is Odd\n");
    break;
    }

    return 0;

}
