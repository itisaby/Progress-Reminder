#include <stdio.h>
#include <stdlib.h>

//Circular Linked List
struct CQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct CQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct CQueue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

void Enqueue(struct CQueue *q, int val)
{
    if (isFull(q))
    {
        printf("overflow");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        printf("Queue Added: %d\n", val);
        q->arr[q->r] = val;
    }
}

int Dequeue(struct CQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Underflow\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct CQueue q;
    q.size = 5;
    q.f = 0;
    q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    // if (isEmpty(&q))
    // {
    //     printf("Queue is empty");
    // }
    //Enqueue
    Enqueue(&q, 12);
    Enqueue(&q, 15);
    Enqueue(&q, 17);
    Enqueue(&q, 19);

    printf("Dequeue %d\n", Dequeue(&q));
    printf("Dequeue %d\n", Dequeue(&q));
    printf("Dequeue %d\n", Dequeue(&q));
    printf("Dequeue %d\n", Dequeue(&q));
    Enqueue(&q, 9);
    printf("Dequeue %d\n", Dequeue(&q));
    
    return 0;
}