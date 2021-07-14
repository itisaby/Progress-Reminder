#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
    }
};

// Merging two Sorted linked lists 

void Insertatend(Node *&head, int value)
{
    Node *n = new Node(value);
    if (!head)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node *head)
{
    Node *temp = head;
    if (!head)
    {
        cout << "error" << endl;
        return;
    }
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

// Function to merge two sorted linked list in Iterative way.
Node *MergingLinkedList(Node *&head1, Node *&head2)
{
    Node *p1 = head1;
    Node *p2 = head2;
    Node *n = new Node(-1); //Dummy Node
    Node *p3 = n;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return n->next;
}

// Function to merge two sorted linked lists in a recursive way
Node* Merging_Recursive(Node* &head1, Node* &head2){
    
    if(head1==NULL){
        return head2;
    }
    
    if(head2==NULL){
        return head1;
    }

    Node* r;
    
    if(head1->data<head2->data){
        r = head1;
        r->next = Merging_Recursive(head1->next, head2);
    }
    else{
        r = head2;
        r->next = Merging_Recursive(head1, head2->next);
    }

    return r;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Insertatend(head1, 1);
    Insertatend(head1, 4);
    Insertatend(head1, 5);
    Insertatend(head1, 7);
    Insertatend(head2, 2);
    Insertatend(head2, 3);
    Insertatend(head2, 6);
    display(head1);
    display(head2);
    Node *newhead = Merging_Recursive(head1, head2);
    // Node *newhead = MergingLinkedList(head1, head2);
    display(newhead);

    return 0;
}