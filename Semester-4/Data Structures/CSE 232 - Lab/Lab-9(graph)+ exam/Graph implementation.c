#include<stdio.h>
int main()
{
    int i,j,sum=0,n=4,m[10][10];

    printf("Number of elements :\n ");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&m[i][j]);

    for(i=0;i<n;i++){
            sum=0;
        for(j=0;j<n;j++){
        sum=sum+m[j][i];
    }
    printf("Out-degree %d: %d\n",i+1,sum);

    }

    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<n;j++){
            sum=sum+m[i][j];
        }


        printf("In-degree %d: %d\n",i+1,sum);
    }
    return 0;
}
