#include<stdio.h>


int A[100];
int POCKET[10][9];
int N;


void RADIX(void);

int main(){

    int i,j;

    for(i=0;i<10;i++)
        for(j=0;j<9;j++)
        POCKET[i][j]=-9999;


        printf("Enter the Number of elements to be sorted: ");
        scanf("%d",&N);

        printf("\nEnter the Elements: \n");
        for(i=0;i<N;i++){
        scanf("%d",&A[i]);
        }


    RADIX();

    printf("Here are your elements sorted in ascending order: \n");
    for(i=N-1;i>=0;i--)
    {
        printf("%d\n",A[i]);
    }



}

void RADIX(void){
int a,b,c,temp,l,x=1;
int k=3;
for(k=1;k<=3;k++){

    for(l=0;l<N;l++){
        temp=(A[l]/x)%10;
        POCKET[temp][l]=A[l];
    }
    x=x*10;
    c=0;

    for(a=9;a>=0;a--){

        for(b=0;b<9;b++){
            if(POCKET[a][b]!=-9999){
                A[c]=POCKET[a][b];
                c=c+1;
            }
        }
    }

    for(a=0;a<10;a++)
        for(b=0;b<9;b++)
        POCKET[a][b]=-9999;
    }
}
