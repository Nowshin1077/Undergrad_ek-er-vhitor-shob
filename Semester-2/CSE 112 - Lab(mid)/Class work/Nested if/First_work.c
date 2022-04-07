#include<stdio.h>
int main()
{
    int a,b,c,Sum;
    float number1,number2,sum;
    char A;

    printf("Enter two integer number:");
    scanf("%d %d",&a,&b);
    Sum=a+b;
    printf("Sum=%d",Sum);

    printf("\nEnter two float number:");
    scanf("%f %f",&number1,&number2);
    sum=number1+number2;
    printf("sum = %f",sum);

    printf("\nEnter any character:");
    scanf("%c %c",&A,&A);
    printf("\nch=%c %c",A,A);

    printf("\nEnter three integer number:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>=b)&&(a>=c))
    printf("a is the greatest one");
    else if ((b>=a)&&(b>=c))
    printf("b is the greatest one");
    else if((c>=a)&&(c>=b))
    printf("c is the greatest one");
    if(a==b)

    printf("a and b are equal");
    else if(b==c)
    printf("b and c are equal");
    else if(c==a)
    printf("c and a are equal");
    else
    printf("\nthey are not equal");


    return 0;

}
