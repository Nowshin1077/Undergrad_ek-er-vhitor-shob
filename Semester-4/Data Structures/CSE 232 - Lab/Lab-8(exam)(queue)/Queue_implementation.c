#include<stdio.h>
#define MAX 30


void insert();
void delete();
void display();
void isempty();
void isfull();
void display_front();
int queue[MAX];   ///queue array.
int rear = -1;
int front = -1;

int main()
{
    int choice;

    while(1) {
        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Display \n");
        printf("4. Is Empty \n");
        printf("5. Is Full \n");
        printf("6. Display Font element \n");
        printf("7. Exit \n");
        scanf("%d",&choice);
        printf("\n");
        switch(choice) {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            isempty();
            break;
        case 5:
            isfull();
            break;
        case 6:
            display_front();
            break;
        case 7:
            exit(1);
        default:
            printf("Wrong Choice.\n");

            //end switch
        }
        //end while
    }
//end main
}

void insert()
{
    int add_item;
    if(rear==MAX-1)

        printf("Queue Overflow.\n");

    else {
        if(front == -1)
            //if queue is initially empty.
            front = 0;


        printf("Insert the element in queue: ");
        scanf("%d",&add_item);
        rear=rear+1;
        queue[rear]=add_item;
    }
}


void delete ()
{
    if(front == -1 || front > rear) {
        printf("Queue Underflow. \n");
        return;
    }

    else {
        printf("Element Deleted from Queue is: %d\n",queue[front]);
        front = front + 1;
    }
}

void display()
{

    int i;
    if(front == -1)
        printf("Queue is empty. \n");

    else {

        printf("Queue is: \n");
        for(i=front; i<=rear; i++)
            printf("%d\n",queue[i]);
        printf("\n");
    }
}

void display_front()
{

    if(front == -1)
        printf("Queue is empty.\n");

    else {

        printf("%d\n",queue[front]);
    }
}

void isempty()
{
    if(front == -1||front>rear)
        printf("Queue is empty. \n");
    else
        printf("Queue is Not empty. \n");
}

void isfull()
{
    if(rear==MAX-1)
        printf("Queue is Full.\n");

    else {
        printf("Queue is Not full.\n");
    }
}
