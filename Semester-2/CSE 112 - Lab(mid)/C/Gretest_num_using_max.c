//Greatest Number check using max variable.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, max=0;
    printf("Enter three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>=num2 && num1>=num3)
        max=num1;
    else if(num2>=num1 && num2>=num3)
        max=num2;
    else if(num3>=num1 && num3>=num2)
        max=num3;
    printf("%d is the greatest number",max);
    return 0;
}
