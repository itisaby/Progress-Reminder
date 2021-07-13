#include<stdio.h>
#include<stdlib.h>
//Circular Linked List
struct Node{
    int data;
    struct Node* next;
};

//Traversing through Circular Linked List
void CircularTravers(struct Node* head){
    struct Node* p = head;
    do{
        printf("%d\n", p->data);
        p = p->next;
    }while(p!= head);
}

// Inserting the element at the beginning of the linked list.
struct Node* Insertatfirst(struct Node*head, int data){
    struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node* p = head->next;
    while(p->next!= head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
}


int main(){
    struct Node* head;
    struct Node* first;
    struct Node* second;
    struct Node* third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 2123;
    head->next = first;

    first->data = 231;
    first->next = second;

    second->data = 18;
    second->next = third;

    third->data = 92;
    third->next = head;             // Last node is pointed to head so that it can be a circular linked list 


    printf("Circular Linked List Before Insertion\n");
    CircularTravers(head);

    head = Insertatfirst(head, 11);     // Inserting an element at the begining 
    CircularTravers(head);

    return 0;
}