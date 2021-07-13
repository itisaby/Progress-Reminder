#include <iostream>
using namespace std;

// Reversing a linked list
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

void Insertatend(Node *&head, int value)
{
    Node *n = new Node(value);
    if (!head)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void displayll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
// Function for reversing a linked list  in a iterative way.
Node* reverse_ll(Node* &head){
    // Here we took three pointers curr, prev and nextptr
    Node *curr = head;  // Pointed to head
    Node *prev = NULL;   // Pointed to NULL
    Node *nextptr;         //Just initialised here, will initialise inside the loop 

    while(curr != NULL){
        nextptr = curr->next;          //nextptr is equal to curr-> next
        curr->next = prev;             //curr pointer pointing to prev, as we are reversing so we initialised prev as NULL

        prev = curr;           //We are moving prev to curr 
        curr = nextptr;         // and finally we are moving curr to nextptr
        //Basically Updating each pointer in the loop 
        //No need to update nextptr here because it will be taken care of in the begining as it is initialised to curr->next
    }
    return prev;
}

//Function for reversing a linked list in a recursive way.
Node* reverse_recursive(Node* &head){

    if(!head || head->next==NULL){
        return head;                       // Base Case
    }
    Node*newhead = reverse_recursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}





int main()
{
    Node *head = NULL;
    Insertatend(head, 2);
    Insertatend(head, 7);
    Insertatend(head, 4);
    Insertatend(head, 9);
    displayll(head);       // Display linked list  before reversing

    head = reverse_ll(head);
    displayll(head);       // Display linked list after reversing in iterative way

    head = reverse_recursive(head);
    displayll(head);       // Display linked  list after reversing in recursive way

    return 0;
}