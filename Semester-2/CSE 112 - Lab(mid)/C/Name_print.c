//Name Print using Switch.
#include <stdio.h>

int main()
{
    int a;
    while(1)
    {
        printf("\n");
        scanf("%d",&a);
        switch(a%11)
        {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        default:
            printf("Not Found");
            break;
        }
    }
    return 0;
}
