// Equal Number Check.
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1==num2)
        printf("They are equal");
    else
        printf("They are not equal");
    return 0;
}

