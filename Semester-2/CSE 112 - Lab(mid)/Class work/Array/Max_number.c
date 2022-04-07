#include<stdio.h>
int main()
{
    int array[50], n, i, largest,max;
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);
    printf("\n Enter %d elements of the array: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
        if(array[i]>=max)
        max=array[i];

    printf("Maximum number is:%d",max);
    return 0;
}
