#include<stdio.h>
int main()
{
    float Fahreheit,Celsious;
    printf("Enter Temperature:");
    Scanf("%f",&Fahreheit);
    Celsious=(5*(Fahreheit-32))/9;
    printf("%f",Celsious);
    return 0;
}
