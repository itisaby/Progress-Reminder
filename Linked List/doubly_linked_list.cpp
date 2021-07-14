#include<iostream>
using namespace std;
// Doubly Linked List
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int value){
            data = value;
            next = NULL;
            prev = NULL;
        }
};

void insertathead(Node *&head, int value){
    
    Node *n = new Node(value);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    
    head = n;
}

void insertatend(Node *&head, int value){
    if(head == NULL){
        insertathead(head, value);
        return;
    }
    Node* n = new Node(value);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void display(Node* head){
    Node *temp = head;
    while(temp!=NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
void deleteathead(Node *head){
    Node* td = head;
    head = head->next;
    head->prev = NULL;
    delete td;
}
void deleteNode(Node* &head, int pos){
    if(pos==1){
        deleteathead(head);
        return;
    }
    Node *temp = head;
    int index = 1;
    while(index!=pos && temp!=NULL){
        temp = temp->next;
        index++;
    }
    temp->prev->next = temp->next;
    if(temp->next!=NULL){
        temp->next->prev = temp->prev;
    }
    delete temp;
}

int main() {
    Node* head = NULL;
    insertatend(head, 23);
    insertatend(head, 13);
    insertatend(head, 97);
    insertatend(head, 43);
    insertatend(head, 878);
    insertatend(head, 332);
    insertathead(head, 11);
    display(head);

    deleteNode(head, 3);
    display(head);

    deleteNode(head, 1);                                 //Check
    display(head);

    
    return 0;
}