#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Creates a node struct
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}
node;

// Creates a node called root that initially points to NULL
node *list = NULL;

// Calls functions below
node *GetNewNode(int data);
node *insert(node *root, int data);
bool search(node *root, int data);
node *minValueNode(node *n);
node *delete(node *root, int data);
void print(node *root);
void destroy(node *root);

int main(void)
{
    // Inserts node into the tree
    list = insert(list, 55); print(list); printf("\n");
    list = insert(list, 22); print(list); printf("\n");
    list = insert(list, 77); print(list); printf("\n");
    list = insert(list, 99); print(list); printf("\n");
    list = insert(list, 11); print(list); printf("\n");
    list = insert(list, 66); print(list); printf("\n");
    list = insert(list, 33); print(list); printf("\n");
    list = insert(list, 44); print(list); printf("\n");
    list = insert(list, 88); print(list); printf("\n");

    // Search through the tree
    search(list, 55);

    // Deletes one node in the tree
    delete(list, 22); print(list); printf("\n");

    // Frees all the nodes in the tree
    destroy(list);
}

node *GetNewNode(int data)
{
    node *n = malloc(sizeof(node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

node *insert(node *root, int data)
{
    if (root == NULL)
    {
        root = GetNewNode(data);
        return root;
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }

    return root;
}

bool search(node *root, int data)
{
    if (root == NULL)
    {
        printf("%i is not in the bst\n", data);
        return false;
    }
    else if (data < root->data)
    {
        return search(root->left, data);
    }
    else if (data > root->data)
    {
        return search(root->right, data);
    }
    else
    {
        printf("%i is in the bst\n", data);
        return true;
    }
}

node *minValueNode(node *n)
{
    node *current = n;

    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

node *delete(node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }

    if (data < root->data)
    {
        root->left = delete(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = delete(root->right, data);
    }
    else
    {
        if (root->left == NULL)
        {
            node *tmp = root->right;
            free(root);
            return tmp;
        }
        else if (root->right == NULL)
        {
            node *tmp = root->left;
            free(root);
            return tmp;
        }
    }

    node *tmp = minValueNode(root->right);

    root->data = tmp->data;

    root->right = delete(root->right, tmp->data);

    return root;
}

void print(node *root)
{
    // Base case
    if (root != NULL)
    {
        print(root->left);
        printf("%d ", root->data);
        print(root->right);
    }

}

void destroy(node *root)
{
    if (root != NULL)
    {
        destroy(root->left);
        destroy(root->right);
        free(root);
    }
}