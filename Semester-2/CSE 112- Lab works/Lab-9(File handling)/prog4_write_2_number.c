//A program to open a file for writing two numbers.
#include<stdio.h>
int main()
{
    FILE  *fptr;
    fptr=fopen("file3.txt","w");
    int num1=10043,num2=20091;

        fprintf(fptr,"%d %d",num1,num2);
        printf("%d \n%d",num1,num2);

    return 0;
}

