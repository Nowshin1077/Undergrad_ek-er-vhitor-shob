//CGPA count using Switch case.
#include <stdio.h>
#include <conio.h>

int main()
{
    int mark;
    while(1)
    {
        printf("Enter the marks: ");
        scanf("%d",&mark);
        if(mark<=100)
            switch (mark/5)
            {

            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                printf("Failed \n");
                break;
            case 8:
                printf("D & Grade:2.00 \n");
                break;
            case 9:
                printf("C & Grade:2.25 \n");
                break;
            case 10:
                printf("C+ & Grade:2.50 \n");
                break;
            case 11:
                printf("B- & Grade:2.75 \n");
                break;
            case 12:
                printf("B & Grade:3.00 \n");
                break;
            case 13:
                printf("B+ & Grade:3.25 \n");
                break;
            case 14:
                printf("A- & Grade:3.50 \n");
                break;
            case 15:
                printf("A & Grade:3.75 \n");
                break;
            case 16:
                printf("A+ & Grade:4.00 \n");
                break;
            case 17:
                printf("A+ & Grade:4.00 \n");
                break;
            case 18:
                printf("A+ & Grade:4.00 \n");

                break;
            case 19:
                printf("A+ & Grade:4.00 \n");
                break;
            case 20:
                printf("A+ & Grade:4.00 \n");
                break;
            }
        else
            printf("Enter Your Mark range 0 to 100.\nEnter again\n\n");
    }
    return 0;
}
