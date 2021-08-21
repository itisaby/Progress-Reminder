#include <stdio.h>
#include <stdlib.h>

//Deletion IN BST

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

struct Node *InorderPred(struct Node *root){
    root = root->left;
    while(root->right!= NULL){
        root = root->right;
    }
    return root;
}

struct Node *Deletion(struct Node *root, int value)
{

    if (root == NULL)
    {
        return NULL;
    }

    if((root->left == NULL) && (root->right == NULL)){
        free(root);
        return NULL;
    }

    // Search for the node to be deleted
    struct Node *iPre;
    if (value < root->data)
    {
        Deletion(root->left, value);
    }
    else if (value > root->data)
    {
        Deletion(root->right, value);
    }
    //Deletion when node is found
    else
    {
        iPre = InorderPred(root);
        root->data = iPre->data;
        root->left = Deletion(root->left, iPre->data);
    }

    return root;
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
    printf("BST : %d \n", isBST(p));
    Inorder(p); // Since its printing a sorted array then its a BST

    Deletion(p, 3);
    printf("After Deletion\n");
    Inorder(p);

    return 0;
}
