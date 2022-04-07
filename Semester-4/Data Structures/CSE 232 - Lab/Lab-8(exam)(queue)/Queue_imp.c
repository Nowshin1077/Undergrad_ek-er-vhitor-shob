#include<stdio.h>
#include<stdlib.h>
#define SIZE 30

int q[SIZE],front=-1,rear=-1;
void Insert();
void Delete();

int main()
{
    int ch;
    printf("\nQueue Implementation");
    printf("\n--------------------");
    printf("\n1.Insert");
    printf("\n2.Delete");
    printf("\n3.Exit");
    while(1)
    {
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            Insert();
            break;
            case 2:
                Delete();
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Wrong choice");
        }
    }
}
void Insert()
{
    int data;
    if(rear==SIZE-1)
    {
        printf("overflow");
    }
    else
    {
        if (front == -1)
        {
            front =0;
        }
        printf("enter element:");
        scanf("%d",&data);
        rear++;
        q[rear]=data;
    }
}
void Delete()
{
    if(front == -1|| front>rear )
    {
        printf("underflow");
    }
    else
    {
        printf("\nDelete:%d",q[front]);
        front++;
    }
}












/*void disp()
{
    int i;
    if(front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("elements:");
        for(i=front;i<=rear;i++)
        {
            printf("%d",q[i]);
        }
    }
}

*/
