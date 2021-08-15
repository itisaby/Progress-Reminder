#include<stdio.h>
#include<stdlib.h>

//Linked Representation

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data){
    struct Node* n;  // creating a node pointer
    n = (struct Node *)malloc(sizeof(struct Node));   // allocate memory in the heap
    n->data = data;     // setting data
    n->left = NULL; 
    n->right = NULL;
    return n; // returning the required node

}

void PostOrder(struct Node* root){
    if(root!=NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d \n", root->data);
    }
}

int main(){

    struct Node *p = createNode(4);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

   PostOrder(p);

    return 0; 
}
