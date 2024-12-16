#include <stdio.h>
#include <stdlib.h>

#define size 5  // Size of the queue

int queue[size], front = -1, rear = -1;

int isFull(void);

int isEmpty(void);

void enqueue(int num);

void dequeue(void);

void display(void);

int main (void)
{
    //write code for circular queue operations

    return 0;
}

int isFull(void)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        return 1;
    } 

    else
    {
        return 0;
    }
}

int isEmpty(void)
{
    if (front == -1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

void enqueue(int num)
{
    if (isFull())
    {
        printf("Full Queue\n");
    }
     
    else if (isEmpty() && (rear == -1))
    {
        front = rear = 0;

        queue[rear] = num;
    } 

    else
    {
        rear = (rear + 1) % size;

        queue[rear] = num;
    }
}

void dequeue(void)
{
    if (isEmpty() && (rear == -1))
    {
        printf("Empty Queue\n");
    }

    else if (front == rear)
    {
        front = rear = -1;
    }

    else
    {
        front = (front + 1) % size;
    }
}

void display (void)
{
    if (isEmpty())
    {
        printf("Empty Queue\n");
    }

    else
    {
        int i = front;

        while (i != rear)
        {
            printf("%i ", queue[i]);

            i = (i + 1) % size;
        }

        printf("%i ", queue[i]);
    }
}