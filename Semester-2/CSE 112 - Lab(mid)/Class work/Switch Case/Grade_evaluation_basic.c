#include<stdio.h>

int main()
{
    int num;
    printf("Enter your number:");
    scanf("%d",&num);

    switch(num/10)

    {
     case 0:
     case 1:
     case 2:
     case 3:
     printf("Fail");
     break;
     case 4:
     printf("Your Grade is:D");
     break;
     case 5:
     printf("Your Grade is:C");
     break;
     case 6:
     printf("Your Grade is:B");
     break;
     case 7:
     printf("Your Grade is:A");
     break;
     case 8:
     printf("Your Grade is:A+");
     break;
     default:
     printf("Not possible");
     return 0;

    }
}
