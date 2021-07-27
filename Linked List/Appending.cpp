#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int value){
            data = value;
        }
};
// Appending last Knodes of a linked list 

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


//Finding the length of linked list
int length(Node* head){
    int l = 0;
    Node *temp = head;
    while(temp){
        l++;
        temp = temp->next;
    }
    return l;
}

Node* Appendlastk(Node* &head, int k){

    Node* headnew;
    Node* newtail;
    Node* tail = head;
    int ct = 1;
    int l = length(head);
    while(tail->next){
        if(ct==l-k){
            newtail = tail;
        }
        if(ct ==l-k+1){
            headnew = tail;
        }
        tail = tail->next;
        ct++;
    }
    newtail->next = NULL;
    tail->next = head;
    head = headnew;
    return head;
}

int main() {
     Node *head = NULL;
    Insertatend(head, 1);
    Insertatend(head, 2);
    Insertatend(head, 3);
    Insertatend(head, 4);
    Insertatend(head, 5);
    Insertatend(head, 6);
    Insertatend(head, 7);
    display(head);
    cout<<length(head)<<endl;
    head = Appendlastk(head, 3);
    display(head);
    return 0;
}