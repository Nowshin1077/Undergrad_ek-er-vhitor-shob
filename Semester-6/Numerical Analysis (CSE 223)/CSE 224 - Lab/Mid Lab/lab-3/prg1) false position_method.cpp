#include<bits/stdc++.h>
#include<math.h>

    double f(double x){
    return x*x-x-2;
    }

    int main(){
        double x0,x1,x2,Fx0,Fx1,Fx2;
        int itr;


        printf("\nEnter the value of X1: ");
        scanf("%lf",&x1);
        printf("\nEnter the value of X2: ");
        scanf("%lf",&x2);

        printf("\nEnter the number of Iteration: ");
        scanf("%d",&itr);


        for(int i=0;i<itr;i++){

            Fx1=f(x1);
            Fx2=f(x2);

            x0=((x1*Fx2)-(x2*Fx1))/(Fx2-Fx1);


            Fx0=f(x0);

            printf("X1: %lf \t\t\t X2: %lf \t\t\t F(X1): %lf \t\t\t  F(X2): %lf \t\t\t X0: %lf      \t\t\t F(X0): %lf \t\t\n\n",x1,x2,Fx1,Fx2,x0,Fx0);

            if((Fx0*Fx1)<0){
                x2=x0;
            }
            else
            {
                x1=x0;
            }
        }


    return 0;
    }





















