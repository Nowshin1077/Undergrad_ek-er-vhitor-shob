//Celsius to Fahrenheit.
#include <stdio.h>

int main()
{
    float C,F;
    printf("Enter temperature in celsius:");
    scanf("%f",&C);
    F=(9*(C/5))+32;
    printf("Temperature in Farenhite:%.1f",F);
    return 0;
}
