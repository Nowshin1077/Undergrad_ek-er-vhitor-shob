#include<bits/stdc++.h>

    void merge(int AR[],int p,int q,int r){
        int n1=q-p+1;
        int i,j,k;
        int n2=r-q;
        int L[n1];
        int R[n2];

        for(i=0;i<n1;i++){
            L[i]=AR[p+i];
        }
         for(j=0;j<n2;j++){
            R[j]=AR[q+j+1];
        }

        L[n1]=-9999;
        R[n2]=-9999;

        i=0;
        j=0;

        k=p;

        while(i<n1 && j<n2)
        {
        if(L[i] <= R[j])
        {
            AR[k] = L[i];
            i++;
        }
        else
        {
        AR[k] = R[j];
            j++;
        }
        k++;
        }

        while(i<n1)
        {
        AR[k] = L[i];
            i++;
            k++;
        }
        while(j<n2)
        {
        AR[k] = R[j];
            j++;
            k++;
        }


    }

    void merge_sort(int A[], int p, int r){
        int q;
    if(p < r){
    q=(p+r)/2;
    merge_sort(A,p,q);
    merge_sort(A,q+1,r);
    merge(A,p,q,r);
        }
    }

    void printArray(int A[],int n)
    {
    int i;

        printf("Here are your elements sorted in ascending order: \n");
        for(i=0;i<n;i++){
            printf("%d\n",A[i]);
        }
    }


    int main()
    {
        int n,i,A[100];

        printf("Enter the Number of elements: ");
        scanf("%d",&n);


        printf("Enter the elements: \n");
        for(i=0;i<n;i++){
            scanf("%d",&A[i]);
        }

       merge_sort(A,0,n-1);

       printArray(A,n);

        return 0;
    }
