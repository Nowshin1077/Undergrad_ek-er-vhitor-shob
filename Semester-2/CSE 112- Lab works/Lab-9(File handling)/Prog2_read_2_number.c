//A program to open a file for reading and read two numbers.
#include<stdio.h>
int main()
{
    FILE  *fptr;
    int num1,num2;
    fptr=fopen("file1.txt","r");
    if(fptr==NULL)
        printf("File is missing");
    else
    {
        fscanf(fptr,"%d %d",&num1,&num2);
        printf("%d   %d",num1,num2);
    }
    return 0;
}

