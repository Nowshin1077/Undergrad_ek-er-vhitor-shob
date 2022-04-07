#include<stdio.h>
#include<conio.h>
#include<math.h>

   float fx(float y,float z)
   {
    float x1; x1=(17-y+2*z)/20;
    return x1;
   }

   float fy(float x,float z)
   {
    float y1;
    y1=(-18-3*x+z)/20;
    return y1;
   }

   float fz(float x,float y)
   {
    float z1;
    z1=(25-2*x+3*y)/20;
    return z1;
   }

   int main()
   {
    int i,j,n;
    float a1,b1,c1;
    float a,b,c;
    printf("Enter the no. of Iteration : ");
    scanf("%d",&n);
    printf("Enter The initial value : ");
    scanf("%f %f %f",&a,&b,&c);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a1=fx(b,c);
            b1=fy(a,c);
            c1=fz(a,b);
            a=a1;
            b=b1;
            c=c1;
        }
    }
    printf("\na1 = %f\na2 = %f\na3 = %f",a1,b1,c1);

    getch();
    return 0;
}

