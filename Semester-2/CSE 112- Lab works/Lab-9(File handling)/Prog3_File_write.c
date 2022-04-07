//A program to open a file for writing.
#include<stdio.h>
int main()
{
    FILE  *fptr;
    fptr=fopen("file2.txt","w");
    int num=10043;

        fprintf(fptr,"%d",num);
        printf("%d",num);

    return 0;
}

