//A program to open a file for reading.
#include<stdio.h>
int main()
{
    FILE  *fptr;
    int num1;
    fptr=fopen("file.txt","r");
    if(fptr==NULL)
        printf("File is missing");
    else
    {
        fscanf(fptr,"%d",&num1);
        printf("%d",num1);
    }
    return 0;
}
