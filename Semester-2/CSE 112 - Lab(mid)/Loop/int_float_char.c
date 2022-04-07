//Integer, Float, Character together print.
#include<stdio.h>
#include<math.h>
int main()
{
int X,Y,sum;
float A,B,Product;
char a;
printf("Enter Two Integer Numbers:\n");
scanf("%d %d",&X,&Y);
sum= X+Y;
printf("%d + %d = %d\n",X,Y,sum);
printf("Enter Two Float Number:\n");
scanf("%f %f",&A,&B);
Product= A*B;
printf("%.2f * %.2f = %.2f\n",A,B,Product);
printf("Enter a Character:\n");
scanf("%c",&a);
printf("%c %c",a,a);
return 0;
}
