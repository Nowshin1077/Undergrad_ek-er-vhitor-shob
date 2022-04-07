/*a C program to using switch read temperature in centigrade and display a suitable message
according to temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then It is Hot
Temp >=40 then Its Very Hot*/


#include <stdio.h>

int main( )
{
    int temp;
    printf("Enter the temperature in centigrade:");
    scanf("%d",&temp);
    switch(temp/1)
    {
    case 0:
        printf("Freezing weather");
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        printf("Very Cold weather");
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        printf("Cold weather");
        break;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
        printf("Normal in Temp");
        break;
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
        printf("Its Hot");
        break;
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
        printf("Its Very Hot");
        break;
    }
    return 0;
}
