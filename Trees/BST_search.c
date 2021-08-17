#include <stdio.h>
#include <stdlib.h>

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

struct Node *SearchNode(struct Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return SearchNode(root->left, key);
    }
    else
    {
        return SearchNode(root->right, key);
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
    struct Node *s = SearchNode(p, 10);
    if (s != NULL)
    {
        printf("%d \n", s->data);
    }
    else{
        printf("Element Not found\n");
    }

    return 0;
}
