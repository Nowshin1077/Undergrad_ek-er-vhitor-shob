//Greatest Number check among three numbers.
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>=num2 && num1>=num3)
        printf("num1 is the greatest number");
    else if(num2>=num1 && num2>=num3)
        printf("num2 is the greatest number");
    else if(num3>=num1 && num3>=num2)
        printf("num3 is the greatest number");
    return 0;
}

