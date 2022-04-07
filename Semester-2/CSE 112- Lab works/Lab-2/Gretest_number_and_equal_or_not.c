/*Find the greatest number among three numbers.
Program also evaluate whether two number among them equal or not.*/
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter three integer number:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>=b)&&(a>=c))
        printf("a is the greatest one");
    else if ((b>=a)&&(b>=c))
        printf("b is the greatest one");
    else if((c>=a)&&(c>=b))
        printf("c is the greatest one");
    if(a==b)

        printf("\na and b are equal");
    else if(b==c)
        printf("\nb and c are equal");
    else if(c==a)
        printf("\nc and a are equal");
    else
        printf("\nthey are not equal");


    return 0;

}

