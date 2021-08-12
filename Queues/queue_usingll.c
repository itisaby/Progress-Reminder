#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *f = NULL;
struct Node *r = NULL;

void Enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int Dequeue()
{
    if (f == NULL)
    {
        printf("Queue is empty\n");
    }
    int val = -1;
    struct Node *ptr = f;
    f = f->next;
    val = ptr->data;
    free(ptr);
    return val;
}

void LinkedListTraverse(struct Node *ptr)
{
    printf("Printing elements\n");
    while (ptr != NULL)
    {
        printf("ELement: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    Enqueue(34);
    Enqueue(7);
    Enqueue(4);
    Enqueue(3);
    LinkedListTraverse(f);
    Dequeue();
    Dequeue();
    LinkedListTraverse(f);

    return 0;
}