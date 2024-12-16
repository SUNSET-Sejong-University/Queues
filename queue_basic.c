#include <stdio.h>
#include <stdlib.h>

#define size 5  // Size of the queue

int queue[size], front = -1, rear = -1;

void enqueue(int num);

void dequeue(void);

void display(void);

int main (void)
{
    //write code for queue operations

    return 0;
}

void enqueue(int num)
{
    if (isFull())
    {
        printf("Full Queue\n");
    }

    else if (rear == -1 && front == -1)
    {
        front = rear = 0;

        queue[rear] = num;
    }

    else
    {
        rear++;

        queue[rear] = num;
    }

}

void dequeue(void)
{
    if (isEmpty())
    {
        printf("Empty Queue\n");
    }

    else if (front == rear)
    {
        front = rear = -1;
    }

    else
    {
        front++;
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
        for (int i = front; i <= rear; i++)
        {
            printf("%i ", queue[i]);
        }
    }
}

int isEmpty (void)
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

int isFull (void)
{
    if (rear == size - 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int peek (void)
{
    if (isEmpty())
    {
        printf("Empty Queue\n");
    }

    else
    {
        return queue[front];
    }
}