#include <stdio.h>
#include <stdlib.h>

#define size 5  // Size of the dequeue

int dequeue[size], front = -1, rear = -1;

int isFull(void);

int isEmpty(void);

void insertFront(int num);

void insertRear(int num);

void deleteFront(void);

void deleteRear(void);

void display(void);

int main (void)
{
    //write code for deque operations

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

void insertFront(int num)
{
    if (isFull())
    {
        printf("Full Queue\n");
    }

    if (front == -1)  // if deque is empty
    {
        front = rear = 0;
    }

    else if (front == 0)
    {
        front = size - 1;
    }

    else
    {
        front--;
    }

    dequeue[front] = num;
}

void insertRear (int num)
{
    if (isFull())
    {
        printf("Full Queue\n");
    }

    if (rear == -1)  // if deque is empty
    {
        front = rear = 0;
    }

    else if (rear == size - 1)
    {
        rear = 0;
    }

    else
    {
        rear++;
    }

    dequeue[rear] = num;
}

void deleteFront (void)
{
    if (isEmpty())
    {
        printf("Empty Queue\n");    
    }

    if (front == rear)  // deque has only one element
    {
        front = rear = -1;
    }

    else if (front = size - 1)
    {
        front = 0;
    }

    else
    {
        front++;
    }
}

void deleteRear (void)
{
    if (isEmpty())
    {
        printf("Empty Queue\n");    
    }

    if (front == rear)  // deque has only one element
    {
        front = rear = -1;
    }

    else if (rear == 0)
    {
        rear = size - 1;
    }

    else
    {
        rear--;
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
            printf("%i ", dequeue[i]);
        }
    }
}