#include<bits/stdc++.h>
int main()
    {
        int array[100],n,i,j,key;


        printf("Enter the Number of elements: ");
        scanf("%d",&n);


        printf("\nEnter the Elements:\n");
        for(i=1;i<=n;i++)
        scanf("%d",&array[i]);

        //algorithm

        for(j=2;j<=n;j++)
            {
                key=array[j];
                i=j-1;

                while(i>0&&array[i]>key)
                {
                    array[i+1]=array[i];
                    i=i-1;
                }
                array[i+1]=key;
            }





            // Printing the answer
        printf("Elements sorted in ascending order:\n");
        for(i=1;i<=n;i++)
            printf(" %d",array[i]);


        return 0;
    }
