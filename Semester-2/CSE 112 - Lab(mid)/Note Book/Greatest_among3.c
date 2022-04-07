#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integer number:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>=b)&&(a>=c))
        printf("a is the greatest one");
    else if((b>=a)&&(b>=c))
        printf("b is the greatest one");
    else if((c>=a)&&(c>=b))
            printf("c is the greatest one");
          else
        printf("They are equal");
        return 0;


}
