#include<stdio.h>
int main()
{
    int X,Y;
    printf("Enter the co-ordinate point of X and Y:");
    scanf("%d %d",&X,&Y);
    if(X>0 && Y>0)
    printf("The co-ordinate point(%d,%d)lies in the First quadrant",X,Y);
    else if(X<0 && Y>0)
    printf("The co-ordinate point(%d,%d)lies in the Second quadrant",X,Y);
    else if(X<0 && Y<0)
    printf("The co-ordinate point(%d,%d)lies in the Third quadrant",X,Y);
    else if(X>0 &&Y<0)
    printf("The co-ordinate point(%d,%d)lies in the Forth quadrant",X,Y);
    else
    printf("The co-ordinate point(%d,%d)lies in the Axes quadrant",X,Y);

    return 0;
}
