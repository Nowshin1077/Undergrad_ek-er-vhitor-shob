#include<bits/stdc++.h>

void selection_sort(int[],int);
int Min(int[],int,int);

int main()
    {

        int a[100],i,N;

        printf("Enter the Number of elements to be sorted: ");
        scanf("%d",&N);

        printf("\nEnter the Elements: \n");
        for(i=0;i<N;i++)
        scanf("%d",&a[i]);

        selection_sort(a,N);


        // Printing the answer
        printf("Here are your elements sorted in ascending order: ");
        for(i=0;i<N;i++)
            printf("\n%d",a[i]);


        return 0;
    }


    void selection_sort(int *array,int N){
        int i=0,loc=0,temp=0;

        for(i=0;i<N;i++){
            loc=Min(array,i,N);
            temp=array[loc];
            array[loc]=array[i];
            array[i]=temp;
        }
    }


    int Min(int *array, int low_bound, int up_bound){
        int min=low_bound;
        while(low_bound<up_bound){

            if(array[low_bound]<array[min])
                min=low_bound;
                low_bound++;

        }

    return min;
    }
