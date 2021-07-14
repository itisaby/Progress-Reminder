#include <iostream>
using namespace std;

//Finding intersection point of 2 linked lists
//Time Complexity is O(m+n)

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

int length(Node* head){
    int l = 0;
    Node *temp = head;
    while(temp){
        l++;
        temp = temp->next;
    }
    return l;
}

int Intersection(Node* head1, Node* head2){
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    Node* ptr1;
    Node* ptr2;

    //Condition to put the pointer accordingly 
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while(d){
        ptr1 = ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1 && ptr2){
        if(ptr1 == ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;

}
// Repeat
int main()
{
    Node *head1 = NULL;
    Insertatend(head1, 1);
    Insertatend(head1, 2);
    Insertatend(head1, 3);
    Insertatend(head1, 4);
    Insertatend(head1, 5);
    Insertatend(head1, 6);
    Insertatend(head1, 7);
    display(head1);

    return 0;
}