//Writing and reading from a file and sort them. Then again write them.
#include<stdio.h>
int main()
{
    FILE  *fptr;
    FILE  *fptr1;
    int i,a[100],b[100],n=5;
    fptr=fopen("file4.txt","w");

    for(i=0;i<2;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2;i++)
        fprintf(fptr,"%d\n",a[i]);
        fclose(fptr);
        fptr1=fopen("file4.txt","r");
        if(fptr1==NULL)
        printf("File not found");
        for(i=0;i<2;i++)
        fscanf(fptr1,"%d\n",&b[i]);
        for(i=0;i<2;i++)
        printf("%d\n",b[i]);

        return 0;
}

