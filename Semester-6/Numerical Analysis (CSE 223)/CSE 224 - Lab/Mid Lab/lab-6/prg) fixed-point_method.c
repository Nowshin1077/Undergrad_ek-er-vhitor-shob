#include <stdio.h>
#include <math.h>

double f(double x)
{
return x*x-5;  //change equation for each problem
}

double g(double x)
{
return (5/x);
}

int main()
{
    double p, p0, Tol;
    int i=1;
    int No;

    printf("Enter approximate p: ");
    scanf ("%lf", &p0);

    printf("Desired Tolerance: ");
    scanf ("%lf", &Tol);

    printf("Maximum Iterations: ");
    scanf ("%d", &No);


    while (i<=No)
    {
        p = g(p0);

        if((fabs(p-p0))<Tol)
        {
            //printf("%lf", &p);
            break;
        }
        printf("Iteration %d: Current value = %lf\n", i, p);

        i++;  //i=i+1
        p0=p;

        if (i>No)
        {
        printf("Method Failed after %d", No);
        printf(" iterations");
        }

    }

}
