#include<stdio.h>
int main()
{
  int A[100], n,i,j,index_min,temp;

  printf("Enter number of elements:\n");
  scanf("%d", &n);

  printf("Enter %d integers:\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &A[i]);

 for(i=0;i<n-1;i++)
 {
    index_min=i;
  for(j=i+1;j<n;j++)
  {
      if(A[j]<A[index_min])
      {
          index_min=j;
      }
  }
  if(index_min!=i)
  {
      temp=A[i];
      A[i]=A[index_min];
      A[index_min]=temp;
  }
 }
 printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
    printf("%d\n", A[i]);

  return 0;

}
