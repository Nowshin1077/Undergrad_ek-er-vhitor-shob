/*A program to find the perimeter of rectangle.*/
#include<stdio.h>
int main()
{
    float height,width,perimeter;
    printf("Enter height of the rectangle:");
    scanf("%f",&height);
    printf("Enter width of the rectangle:");
    scanf("%f",&width);
    perimeter=2*(height+width);
    printf("\nPerimeter of Rectangle:%.2f\n",perimeter);
    return 0;
}
