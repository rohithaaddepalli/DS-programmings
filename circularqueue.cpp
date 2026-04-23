#include <stdio.h>
#include <stdlib.h>

#define max_size 5

int queue[max_size];
int front = -1, rear = -1;

int isFull()
{
    return ((rear + 1) % max_size == front);
}

int isEmpty()
{
    return (front == -1);
}

void enqueue()
{
    int data;
    printf("\nEnter element: ");
    scanf("%d", &data);

    if (isFull())
    {
        printf("Queue overflow\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
    }

    rear = (rear + 1) % max_size;
    queue[rear] = data;

    printf("Inserted element: %d\n", data);
}

void dequeue()
{
    if (isEmpty())
    {
        printf("Queue underflow\n");
        return;
    }

    int data = queue[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % max_size;
    }

    printf("Deleted element: %d\n", data);
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;

    while (i != rear)
    {
        printf("%d ", queue[i]);
        i = (i + 1) % max_size;
    }

    printf("%d\n", queue[rear]);
}

int main()
{
    int ch;

    while (1)
    {
        printf("\nQueue operations are:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice, try again\n");
        }
    }
}
