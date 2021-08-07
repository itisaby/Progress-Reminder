#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}

void LinkedListTraverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek(struct Node *top, int pos)
{
    struct Node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int Stacktop(struct Node *top){
    return top->data;
}

int main()
{
    struct Node *top = NULL;
    top = push(top, 78);
    top = push(top, 38);
    top = push(top, 18);
    top = push(top, 9);
    top = push(top, 8);
    top = push(top, 7);
    LinkedListTraverse(top);

    // int element = pop(&top);
    // printf("popped %d", element);
    // LinkedListTraverse(top);
    for (int i = 1; i <= 6; i++)
    {
        printf("Value at pos %d is %d \n", i, peek(top, i));
    }
    printf("%d is in the top of the stack\n", Stacktop(top));
    return 0;
}
