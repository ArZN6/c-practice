#include <stdio.h>
#define MAX 5

int rear=-1,front=-1,queue[MAX];
void enqueue(int element)
{
    if (rear == MAX - 1)
        printf("Queue is full\n");
    else
    {
        if (front ==-1)
            front = 0;
        rear++;
        queue[rear] = element;
        printf("Element inserted at position %d is %d\n", rear, element);


    }
}
void dequeue()
{
    if ( front == -1 && front > rear )
        printf("Queue is empty\n");
    else
    {
        printf("Element deleted from position %d is %d\n", front, queue[front]);
        front++;
        if (front > rear)
        {
            front =-1;
            rear =-1;

        }
    }

}
void display()
{
    if (front ==-1)
        printf("Queue is empty\n");
    else
    {
        printf("Elements in the queue are: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
void isfull()
{
    if (rear == MAX -1)
        printf("Queue is full\n");
    else
        printf("Queue is not full\n");
}
void isempty()
{
    if (front == -1)
        printf("Queue is empty\n");
    else
        printf("Queue is not empty\n");
}
int main()
{
    while (1)
    {


        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.If Full\n5.If Empty\n");
        int choice;
        scanf("%d",&choice);

        if (choice == 1)
        {
            printf("Enter the element to be inserted: ");
            int element;
            scanf("%d",&element);
            enqueue(element);
        }
        else if (choice == 2)
        {
            dequeue();
        }
        else if (choice == 3)
        {

            display();
        }

        else if (choice == 4)
        {

            isfull();
        }
        else if (choice == 5)
        {
            isempty();
        }
        else
        {
            printf("Invalid Choice\n");
            return 0;
        }
    }



}
