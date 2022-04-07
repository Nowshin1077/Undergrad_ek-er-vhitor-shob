//Equal number check among three numbers.
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1==num2)
        printf("num1 and num2 are equal");
    else if(num1==num3)
        printf("num1 and num3 are equal");
    else if(num2==num3)
        printf("num2 and num3 are equal");
    else if((num1==num2)&&(num1==num3))
        printf("num1,num2 and num3 are equal");
    else
      printf("They are not equal");
    return 0;
}
