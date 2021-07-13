#include <iostream>
using namespace std;

//Reversing K nodes (Important)

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

//Function to reverse K nodes (little tricky but easy)
Node *Reverseknodes(Node *&head, int k)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *nextptr; // Using the same iterative way to reverse linked list but in limit that is K
    int count = 0;
    while (curr != NULL && count < k)
    {
        nextptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextptr;
        count++;
    }

    if (nextptr != NULL)
    {
        head->next = Reverseknodes(nextptr, k);                 
    }
    head = prev;
    return head;
}

int main()
{
    Node *head = NULL;
    Insertatend(head, 1);
    Insertatend(head, 2);
    Insertatend(head, 3);
    Insertatend(head, 4);
    Insertatend(head, 5);
    Insertatend(head, 6);
    Insertatend(head, 7);
    displayll(head);
    head = Reverseknodes(head, 3);
    displayll(head);
    return 0;
}