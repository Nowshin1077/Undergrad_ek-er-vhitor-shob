#include<stdio.h>
int main()

{
    int num1,num2;
    char sign;

     printf("Enter an operator (+,-,*,/):");
     scanf("%c",&sign);
     printf("Enter two integer number :\n");
     scanf("%d %d",&num1,&num2);

    switch  (sign)
    {

    case '+':
    printf("%d %c %d = %d",num1,sign,num2,num1+num2);
    break;

    case '-':
    printf("%d %c %d = %d",num1,sign,num2,num1-num2);
    break;

    case '*':
    printf("%d %c %d = %d",num1,sign,num2,num1*num2);
    break;


    case '/':
    printf("%d %c %d = %d",num1,sign,num2,num1/num2);
    break;

    default:
    printf("Not a valid sign");
}

return 0;
}
