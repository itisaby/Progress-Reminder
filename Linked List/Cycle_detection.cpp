#include <iostream>
using namespace std;

// FLoyd's algorithm 

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

void insertathead(Node *&head, int value)
{
    Node *n = new Node(value);
    Node *temp = head;
    Node *prev = n;
    prev->next = temp;
    head = prev;
}

void insertNode(Node *&head, int value)
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

void display(Node *head)
{
    Node *temp = head;
    if (!head)
    {
        cout << "error";
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

// Cycle Detection  
bool cycledetection(Node *&head)
{
    // Here we took 2 pointers  fast and slow 
    Node *fast = head;    //This pointer will move two steps at a time 
    Node *slow = head;    //This pointer will move one step at a time
    while (fast != NULL && fast->next != NULL)  // Since fast pointer is moving two steps, so we need to check both the conditions
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)    // This condition is there to ensure that there is a cycle 
        {
            return true;
        }
    }
    return false;
}

void createcycle(Node *&head, int pos)
{   
    //We are creating a cycle  
    int count = 1;
    Node *temp = head;
    Node *startnode;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

void destroycycle(Node* &head){
    //We are destroying a cycle and converting it into a singly linked list
    Node *slow = head;
    Node *fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while (slow->next != fast->next);
    // At this point fast is again pointed to head but slow pointer will remain in the place where both of them were equal to each other.
    fast = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;

}

int main()
{
    Node *head = NULL;
    insertathead(head, 34);
    display(head);
    insertNode(head, 23);
    insertNode(head, 121);
    insertNode(head, 34);
    insertNode(head, 78);
    insertNode(head, 56);
    insertNode(head, 31);
    display(head);
    createcycle(head, 4);         
    cout << cycledetection(head) << endl;
    destroycycle(head);
    cout << cycledetection(head) << endl;
    display(head);



    return 0;
}