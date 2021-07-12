#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
    }
};

void insertbegin(Node *&head, int value)
{
    Node *n = new Node(value);
    Node *temp = head;
    Node *prev = n;
    prev->next = temp;
    head = prev;
}

void insert(Node *&head, int value)
{
    Node *n = new Node(value);
    //Edge case
    if (!head)
    {
        head = n;
        return;
    }
    
    //Main algorithm 
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void deleteathead(Node* &head){
    //edge case
    //Deleting the first element
    Node* del = head;
    head = head->next;
    delete del;
}

void deletion(Node *&head, int value){
    // Handling Edge cases
    if(head!=NULL){
        return; 
    }
    // Handling Edge cases
    if(head->next==NULL){
        deleteathead(head);
        return;
    }
    //Main Algorithm
    Node* temp = head;
    while(temp->next->data != value){
        temp = temp->next;
    }
    Node* del=temp->next;
    temp->next = temp->next->next;
    delete del;
}

void display(Node *head)
{
    Node *temp = head;
    if (!head)
    {
        cout << "error" << endl;
    }
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

bool Search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    display(head);
    insertbegin(head, 4);
    display(head);
    cout << Search(head, 3)<<endl;
    deletion(head, 3);
    display(head);
    return 0;
}