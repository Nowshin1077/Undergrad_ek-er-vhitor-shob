/*A C program to read an amount (integer value) and break the amount into smallest possible
number of bank notes.*/

#include <stdio.h>

int main()
{
    int amount,hundred,fifty,twenty,ten,five,two,one,mid;
    printf("Enter the amount:");
    scanf("%d",&amount);
    printf("\nThere are:\n");
    hundred=amount/100;
    printf("%d Note(s) of 100.00\n",hundred);
    mid=amount%100;
    fifty=mid/50;
    printf("%d Note(s) of 50.00\n",fifty);
    mid=mid%50;
    twenty=mid/20;
    printf("%d Note(s) of 20.00\n",twenty);
    mid=mid%20;
    ten=mid/10;
    printf("%d Note(s) of 10.00\n",ten);
    mid=mid%10;
    five=mid/5;
    printf("%d Note(s) of 5.00\n",five);
    mid=mid%5;
    two=mid/2;
    printf("%d Note(s) of 2.00\n",two);
    mid=mid%2;
    one=mid/2;
    printf("%d Note(s) of 1.00\n",one);
    return 0;
}
