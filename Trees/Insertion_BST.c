#include <stdio.h>
#include <stdlib.h>

//INSERTION IN BST

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n;                                 // creating a node pointer
    n = (struct Node *)malloc(sizeof(struct Node)); // allocate memory in the heap
    n->data = data;                                 // setting data
    n->left = NULL;
    n->right = NULL;
    return n; // returning the required node
}

void Inorder(struct Node *root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        printf("%d \n", root->data);
        Inorder(root->right);
    }
}

int isBST(struct Node *root)
{
    static struct Node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    return 1;
}

void Insert(struct Node *root, int key)
{
    struct Node * prev = NULL;
    while(root != NULL){
        prev = root;
        if(key==root->data){
            printf("Cannot Insert element already there \n");
            return;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    struct Node *new = createNode(key);
    if(key<prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }

}
int main()
{

    struct Node *p = createNode(5);
    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(1);
    struct Node *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    printf("%d \n", isBST(p));
    Inorder(p); // Since its printing a sorted array then its a BST

    Insert(p, 7);
    printf("%d \n",p->right->right->data);
    Insert(p, 2);
    Inorder(p); 
    
    return 0;
}
