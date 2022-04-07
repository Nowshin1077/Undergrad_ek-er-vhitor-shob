
#include <stdio.h>

int main()
{
    int arr[50];
    int n, i;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    /* Input array elements */
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*
     * Print array in reversed order
     */
    printf("\nArray in reverse order: ");
    for(i = n-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
