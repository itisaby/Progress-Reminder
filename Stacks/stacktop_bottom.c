#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct Stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow");
    }
    ptr->top++;
    ptr->arr[ptr->top] = val;
}

int pop(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack UnderFlow");
        return -1;
    }
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
}

int StackTop(struct Stack *ptr){
    return ptr->arr[ptr->top];
}
int StackBottom(struct Stack *ptr){
    return ptr->arr[0];
}

int main()
{
    // struct Stack s;
    // s.size = 85;
    // s.top = -1;
    // s.arr = (int*)malloc(s.size*sizeof(int));
    struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int)); //Allocated Dynamically
    printf("Stack created\n");
    printf("%d \n", isFull(sp));
    printf("%d \n", isEmpty(sp));
    push(sp, 56);
    push(sp, 57);
    push(sp, 58);
    push(sp, 59);
    push(sp, 51);
    push(sp, 33);
    push(sp, 63);
    push(sp, 23);
    push(sp, 33);
    push(sp, 94);
    printf("Top - > %d \n", StackTop(sp));
    printf("Bottom - > %d \n", StackBottom(sp));
     return 0;
}
