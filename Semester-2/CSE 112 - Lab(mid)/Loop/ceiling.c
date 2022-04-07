//Ceiling of a program.
#include <stdio.h>
#include <math.h>

    int main()
{
    float a,b,s;
    printf("Enter any float value: ");
    scanf("%f %f",&a,&b);
    s=a/b;
    printf("\nNormal value is: %.2f\n",s);
    s=ceil(s);
    printf("\nCeiling value is : %.2f\n",s);
    s=floor(a/b);
    printf("\nFloor value is : %.2f\n",s);
    return 0;
}
