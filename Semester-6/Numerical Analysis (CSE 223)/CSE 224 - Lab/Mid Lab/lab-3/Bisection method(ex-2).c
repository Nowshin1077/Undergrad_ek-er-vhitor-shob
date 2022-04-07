#include<stdio.h>
#include<math.h>

  float f(float x)
  {
     float z;
     z= 3*x-cos(x)-1;

     return z;
  }

  int main()
  {
     int count=1,n;
     float x1,x2,x0;

     printf("Enter the values of x1 and x2 :- ");
     scanf("%f%f",&x1,&x2);
     printf("No.of Iteration:");
     scanf("%d",&n);
     if(f(x1)*f(x2)<0);
     {
      x0 =(x1+x2)/2;
      while(count<=n)
       {
       if(f(x1)*f(x0)<0)
         {
           x2=x0;
         }
      else
      {
          x1=x0;
      }
       count++;
       x0 =(x1+x2)/2;
     }
     printf("Answer is : %f",x0);
    }

    getch();
   }
