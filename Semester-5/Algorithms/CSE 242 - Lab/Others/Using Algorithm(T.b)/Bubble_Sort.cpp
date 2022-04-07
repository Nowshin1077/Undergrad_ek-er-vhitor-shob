#include<bits/stdc++.h>
int main()
    {
        int array[100],n,Max=0,i,j;

        printf("Enter the Number of elements to be sorted: ");
        scanf("%d",&n);

        printf("\nEnter the Elements: \n");
        for(i=0;i<n;i++)
        scanf("%d",&array[i]);

        for(j=n-1;j>=0;j--){

            for(i=1;i<=j;i++){

                 // Finding Max
                if(array[i-1]>array[i]){
                    // Swapping the Max
                Max=array[i-1];
                array[i-1]=array[i];
                array[i]=Max;
                }
            }
        }

            // Printing the answer
        printf("Here are your elements sorted in ascending order: ");
        for(i=0;i<n;i++)
            printf("\n%d",array[i]);


        return 0;
    }
