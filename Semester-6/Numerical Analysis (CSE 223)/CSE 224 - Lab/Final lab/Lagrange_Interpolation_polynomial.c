#include<stdio.h>
#include<math.h>
int main()
{
    float x[10],y[10],a,s=1,t=1,k=0;
    int n,i,j,d=1;
    printf("\nEnter the number of the terms of the table: ");
    scanf("%d",&n);
    printf("\n\nEnter the given values of x and y: \n");
    for(i=0; i<n; i++)
    {
        scanf ("%f",&x[i]);
        scanf("%f",&y[i]);
    }
    printf("\n\nThe table can write as follows :\n\n");
    for(i=0; i<n; i++)
    {
        printf("%0.2f\t%0.2f",x[i],y[i]);
        printf("\n");
    }
    //while(d==1)
    {
        printf("\n\n\n Enter the value of the x to find the value of y\n\n\n");
        scanf("%f",&a);
        for(i=0; i<n; i++)
        {
            s=1;
            t=1;
            for(j=0; j<n; j++)
            {
                if(j!=i)
                {
                    s=s*(a-x[j]);
                    t=t*(x[i]-x[j]);
                }
            }
            k=k+((s/t)*y[i]);
        }
        printf("\n\nThe value of y is: %0.2f",k);
    }
return 0;
}
