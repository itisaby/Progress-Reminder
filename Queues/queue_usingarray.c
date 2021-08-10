#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct Queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

void Enqueue(struct Queue *q, int val)
{
    if (isFull(q))
    {
        printf("overflow");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int Dequeue(struct Queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("Underflow\n");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct Queue q;
    q.size = 100;
    q.f = -1;
    q.r = -1;
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

    return 0;
}