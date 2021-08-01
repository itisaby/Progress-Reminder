#include<iostream>
using namespace std;

//Put even elements after odd elements in linked list 

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

void Insertatend(Node* &head, int value){
    Node*n = new Node(value);
    if(!head){
        head = n;
        return;
    }
    Node *temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node *head){
    Node*temp = head;
    if(!head){
        cout<<"error"<<endl;
        return;
    }
    while(temp){
        cout<< temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}


// Function Even after Odd

void Even_odd(Node* &head){
    Node* odd = head;
    Node* even = head->next;
    Node* evenstart = even;
    while(odd->next!=NULL && even->next!= NULL){
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;

    }

    odd->next = evenstart;
  
    if(odd->next == NULL){
        even->next=NULL;
    }
    
}

int main() {
    Node *head1 = NULL;
    Insertatend(head1, 1);
    Insertatend(head1, 2);
    Insertatend(head1, 3);
    Insertatend(head1, 4);
    Insertatend(head1, 5);
    Insertatend(head1, 6);
    Insertatend(head1, 7);
    display(head1);
    Even_odd(head1);
    display(head1);
    
    return 0;
}