#include <stdio.h>
int main() {
    int i, n, arr[50];
    printf("Enter the number of elements (1 to 50): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // storing the largest number to arr[0]
    for (i = 1; i < n; i++) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    printf("Largest element = %d", arr[0]);

    return 0;
}
