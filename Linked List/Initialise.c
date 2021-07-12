
#include <stdio.h>
#include <stdlib.h>

// Initialising the Linked list
struct Node
{
    int data;
    struct Node *next;
};

// Traversing through linked list
void LinkedListTraverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// Insertion in linked list
// There are 4 cases possible for insretion
//     1. Insert at begining
//     2. Insert in between
//     3. Insert at the end
//     4. Insert after the Node

// Case1 - Insert at beginning
struct Node *insertatfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    head = ptr;
    return head;
}

// Case2 - Insert in between
struct Node *insertatindex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); //Won't work for index = 0
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

// Case3 - Insert at the end
struct Node *insertatend(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

// Case4 - Insert after a node
struct Node* insertafternode(struct Node *head, struct Node *prevNode, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;

}

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = first;

    first->data = 23;
    first->next = second;

    second->data = 12;
    second->next = third;

    third->data = 1;
    third->next = fourth;

    fourth->data = 23;
    fourth->next = NULL;

    LinkedListTraverse(head);

    head = insertatfirst(head, 56);   //Case1
    LinkedListTraverse(head);

    head = insertatindex(head, 39, 3);   //Case2
    LinkedListTraverse(head);

    head = insertatend(head, 92);      //Case3
    LinkedListTraverse(head);

    head = insertafternode(head, second, 37);  //Case4
    LinkedListTraverse(head);

    
    return 0;
}