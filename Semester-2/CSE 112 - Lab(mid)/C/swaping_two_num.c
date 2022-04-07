//Swapping Two numbers.
#include <stdio.h>


int main()
{
    int X,Y;
    printf("Enter two numbers:");
    scanf("%d %d",&X,&Y);
    X=X+Y;
    Y=X-Y;
    X=X-Y;
    printf("After swapping: \nX is %d  \nY is %d",X,Y);
    return 0;
}
