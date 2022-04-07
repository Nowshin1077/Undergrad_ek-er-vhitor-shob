#include<stdio.h>

int main ()

{  int i,j,k,sum=0,r1,c1,r2,c2;  ///r=row,c=column
   int firstm[10][10],secondm[10][10],resultm[10][10];

   printf("Number of rows in first matrix:");
   scanf("%d",&r1);

   printf("Number of columns in first  matrix:");
   scanf("%d",&c1);

   printf("Elements in first matrix: \n");

   for(i=0; i<r1; i++)
   for(j=0; j<c1; j++)
   scanf("%d", &firstm[i][j]);


   printf("Number of rows in second matrix:");
   scanf("%d",&r2);

   printf("Number of columns in second  matrix:");
   scanf("%d",&c2);

   if(c1!=r2)
   printf("Can't Multiplied\n");
   else
   {printf("Elements in second matrix: \n");

   for(i=0; i<r2; i++)
   for(j=0; j<c2; j++)
   scanf("%d", &secondm[i][j]);

   for(i=0; i<r1; i++){
    for(j=0; j<c2; j++){
    for(k=0; k<r2; k++){

    sum = sum + firstm[i][k]*secondm[k][j];
    }
    resultm[i][j] = sum;
    sum = 0;
    }
   }
   printf("Multiplication: \n");
   for(i=0; i<r1; i++)
    for(j=0; j<c2; j++)


  printf("%d\t\n",resultm[i][j]);
  //printf("");
   }
return 0;
}

