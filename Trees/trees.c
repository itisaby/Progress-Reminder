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

void DisplayTree(struct Node* p){

}

int main(){

    // //Root Node
    // struct Node* p;
    // p = (struct Node *)malloc(sizeof(struct Node));
    // p->data = 2;
    // p->left = NULL;
    // p->right = NULL;

    // //Constructing right child
    // struct Node* p1;
    // p1 = (struct Node *)malloc(sizeof(struct Node));
    // p1->data = 4;
    // p1->left = NULL;
    // p1->right = NULL;


    // //Constructing left child
    // struct Node* p2;
    // p2 = (struct Node *)malloc(sizeof(struct Node));
    // p2->data = 6;
    // p2->left = NULL;
    // p2->right = NULL;

    // using functions
    struct Node *p = createNode(2);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(4);

    //Linking the root node with left and right children 
    p->left = p1;
    p->right = p2;

    struct Node *p3 = createNode(8);
    struct Node *p4 = createNode(5);
    p1->left = p3;
    p1->right = p4; 

    struct Node *p5 = createNode(9);
    struct Node *p6 = createNode(11);
    p2->left = p5;
    p2->right = p6; 
    



    return 0;
}