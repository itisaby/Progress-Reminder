int length(Node* head){
    int l = 0;
    Node *temp = head;
    while(temp){
        l++;
        temp = temp->next;
    }
    return l;
}