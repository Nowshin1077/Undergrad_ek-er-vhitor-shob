/* Program: Finding real roots of nonlinear
   equation using Bisection Method
   Author: CodeSansar
   Date: November 18, 2018 */
/* Header Files */
#include<stdio.h>
#include<conio.h>
#include<math.h>
/*
 Defining equation to be solved.
 Change this equation to solve another problem.
*/
#define f(x) x*x*x + 3*x - 5

void main()
{
	 float x0, x1, x2, f0, f1, f2, E;
	 int step = 1;
	/// clrscr();
	 /* Inputs */
	 ///up:
	 printf("\nEnter x1 and x2:\n");
	 scanf("%f%f", &x1, &x2);
	 printf("Enter tolerable error:\n");
	 scanf("%f", &E);
	 /* Calculating Functional Value */
	 f1 = f(x1);
	 f2 = f(x2);
	 /* Checking whether given guesses brackets the root or not. */
	 if( f1 * f2 > 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		  ///goto up;
	 }
   /* Implementing Bisection Method */
	 printf("\nStep\t\tx1\t\tx2\t\tx0\t\tf(x0)");


		  if( f1 * f0 < 0)
		  {
			   x2 = x0;
			   f2 = f0;
		  }
		  else
		  {
			   x1 = x0;
			   f1 = f0;
		  }
		  step = step + 1; }
	 if((x2-x1)/x2 < E) {

        x0 = (x1 + x2) / 2;

	 printf("\nRoot is: %f", x0);
	 getch();
}
