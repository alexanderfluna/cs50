// This program will have functions for the purpose of:
// 1. Creating a singly linked list that doesn't already exist
// 2. Inserting a new node into the front of the linked list
// 3. Inserting a new node into the middle of the linked list
// 4. Inserting a new node into the back of the linked list
// 5. Printing out an entire list
// 6. Searching through a linked list to find an element
// 7. Deleting an entire linked list

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Creates a node struct
typedef struct node
{
    int number;
    struct node *next;
}
node;

// Creates a node called list that initially points to NULL
node *list = NULL;

// Calls functions below
node *create(int a);
node *front(node *head, int b);
node *middle(node *head, int c, int position);
node *back(node *head, int d);
void print(node *head);
bool find(node *head);
void destroy(node *head);

int main(void)
{
    // 1. Creating a linked list that doesn't already exist
    node *n = create(3);
    print(list);

    // 2. Inserting a new node into the front of the linked list
    n = front(list, 1);
    print(list);

    // 3. Inserting a new node into the middle of the linked list
    n = middle(list, 2, 2);
    print(list);

    // 4. Inserting a new node into the back of the linked list
    n = back(list, 4);

    // 5. Printing out an entire list
    print(list);

    // 6. Searching through a linked list to find an element
    find(list);

    // 7. Deleting an entire linked list
    destroy(list);
}


// 1. Creating a linked list that doesn't already exist
node *create(int a)
{
    // Creates memory to store a node inside of
    node *n = malloc(sizeof(node));

    // Program cancels if malloc failed to return memory
    if (n != NULL)
    {
    // Sets the int number of the first node to x
    n->number = a;
    // Sets the node *next of the first node to NULL
    n->next = NULL;
    // The list node points to the first node created
    list = n;
    }

    // Returns the newly created node n
    return n;
}


// 2. Inserting a new node into the front of the linked list
node *front(node *head, int b)
{
    // Creates memory to store a node inside of
    node *n = malloc(sizeof(node));

    // Cancels if malloc failed to return memory
    if (n != NULL)
    {
    // Sets the int number of the front node to y
    n->number = b;
    // Sets the node *next of the front node to point
    //to what list is pointing to (the first node)
    n->next = list;
    // List points to front node created
    list = n;
    }

    // Returns the newly created node n
    return n;
}


// 3. Inserting a new node into the middle of the linked list
node *middle(node *head, int c, int position)
{
    // Creates memory to store a node inside of
    node *n = malloc(sizeof(node));

    // Cancels if malloc failed to return memory
    if (n != NULL)
    {
        // Sets the int number of the middle node to int c
        n->number = c;
        // Sets the node *next of the middle node to
        n->next = NULL;

        node *tmp = list;

        // Traverse to the n-1 position
        for (int i = 0; i < position - 2; i++)
        {
            tmp = tmp->next;

            if(tmp == NULL)
            {
                break;
            }
        }

        if(tmp != NULL)
        {
        n->next = tmp->next;
        tmp->next = n;
        }
    }

    return n;
}

// 4. Inserting a new node into the back of the linked list
node *back(node *head, int d)
{
    // Creates memory to store a node inside of
    node *n = malloc(sizeof(node));

    // Cancels if malloc failed to return memory
    if (n != NULL)
    {
        // Sets the int number of the back node to z
        n->number = d;
        // Sets the node *next of the back node to NULL
        n->next = NULL;

        // Tmp node points to the first node that list is pointing to
        node *tmp = list;
        // While the pointer in each node is != NULL...
        while (tmp->next != NULL)
        {
            // ...the tmp node will point to the subsequent node
            tmp = tmp->next;
        }
        // Once the tmp node reaches the final node, its
        // node *next will point to the newly created node n
        tmp->next = n;

    }
    // Returns the newly created node n
    return n;
}


// 5. Printing out an entire list
void print(node *head)
{
    // Tmp node initally points to the first node that list is pointing to
    // While tmp node != NULL, it will be point to subsequent node
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        // Prints the int number of the node tmp is pointing to
        printf("%i ", tmp->number);
    }
        printf("\n");
}


// 6. Searching through a linked list to find an element
bool find(node *head)
{
    int x;
    printf("Find: ");
    scanf("%i", &x);

    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        if (x == tmp->number)
        {
            printf("%i is in the linked list\n", x);
            return true;
        }
    }
    printf("%i is not in the linked list\n", x);
    return false;
}


// 7. Deleting an entire linked list
void destroy(node *head)
{
    while (list != NULL)
    {
        // List points to a node & tmp points to the subsequent node
        node *tmp = list->next;
        // The node list is pointing to is freed
        free(list);
        // List points to the subsequent node tmp was already pointing to
        list = tmp;
    }
}