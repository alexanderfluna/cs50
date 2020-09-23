// This program will have functions for the purpose of:
// 1. Creating a doubly linked list that doesn't already exist
// 2. Inserting a new node into the front of the linked list
// 3. Inserting a new node into the middle of the linked list
// 4. Inserting a new node into the back of the linked list
// 5. Searching through a linked list to find an element
// 6. Deleting a single element from front of linked list
// 7. Deleting a single element from middle of linked list
// 8. Deleting a single element from back of linked list
// 9. Printing out an entire list
// 10. Deleting an entire linked list

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Creates a node struct
typedef struct node
{
    int number;
    struct node *prev;
    struct node *next;
}
node;

// Creates a node called list that initially points to NULL
node *list = NULL;

// Calls functions below
void create(node *head);
void front(node *head);
void middle(node *head);
void back(node *head);
void print(node *head);
void delete_front(node *head);
void delete_middle(node *head);
void delete_back(node *head);
void find(node *head);
void destroy(node *head);


int main()
{
    create(list); print(list);

    front(list); print(list);

    middle(list); print(list);

    back(list); print(list);

    find(list);

    delete_front(list); print(list);

    delete_middle(list); print(list);

    delete_back(list); print(list);

    destroy(list);
}

// 1. Creating a doubly linked list that doesn't already exist
void create(node *head)
{
    int a;
    printf("Create the first node: ");
    scanf("%i", &a);

    node *n = malloc(sizeof(node));
    if (n != NULL)
    {
        n->number = a;
        n->prev = NULL;
        n->next = NULL;
    }

    list = n;
    return;
}

// 2. Inserting a new node into the front of the linked list
void front(node *head)
{
    int a;
    printf("Add node to the front: ");
    scanf("%i", &a);

    node *n = malloc(sizeof(node));
    if (n != NULL)
    {
        n->number = a;
        n->prev = NULL;
        n->next = list;
        list->prev = n;
        list = n;
    }

    return;
}


// 3. Inserting a new node into the middle of the linked list
void middle(node *head)
{
    int a;
    printf("Add node to the middle: ");
    scanf("%i", &a);

    int b;
    printf("Position of node: ");
    scanf("%i", &b);

    node *n = malloc(sizeof(node));
    if (n != NULL)
    {
        n->number = a;
        n->prev = NULL;
        n->next = NULL;

        node *tmp = list;

        // Traverse to the n-1 position
        for (int i = 0; i < b - 2; i++)
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
        n->prev = tmp;
        tmp->next->prev = n;
        tmp->next = n;
        }
    }
}

// 4. Inserting a new node into the back of the linked list
void back(node *head)
{
    int a;
    printf("Add node to the back: ");
    scanf("%i", &a);

    node *n = malloc(sizeof(node));
    if(n != NULL)
    {
        n->number = a;
        n->prev = NULL;

        node *tmp = list;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = n;
        n->prev = tmp;
        n->next = NULL;
    }
}


// 5. Searching through a linked list to find an element
void find(node *head)
{
    int a;
    printf("Node you want to verify is in the list: ");
    scanf("%i", &a);

    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        if(tmp->number == a)
        {
            printf("%i is in the linked list\n", a);
            return;
        }
    }

    printf("%i is not in the linked list\n", a);
    return;
}


// 6. Deleting a single element from front of linked list
void delete_front(node *head)
{
    int a;
    printf("Position of front node you want to delete: ");
    scanf("%i", &a);

    node *tmp = list;
    for (int i = 0; i < a - 2; i++)
    {
        tmp = tmp->next;
    }

    list = tmp->next;
    free(tmp);
    list->prev = NULL;
    return;
}


// 7. Deleting a single element from middle of linked list
void delete_middle(node *head)
{
    int a;
    printf("Position of middle node you want to delete: ");
    scanf("%i", &a);

    node *tmp = list;
    for (int i = 0; i < a - 2; i++)
    {
        tmp = tmp->next;
    }

    tmp->next = tmp->next->next;
    free(tmp->next->prev);
    tmp->next->prev = tmp;
    return;
}


// 8. Deleting a single element from back of linked list
void delete_back(node *head)
{
    int a;
    printf("Position of back node you want to delete: ");
    scanf("%i", &a);

    node *tmp = list;
    for (int i = 0; i < a - 2; i++)
    {
        tmp = tmp->next;
    }

        free(tmp->next);
        tmp->next = NULL;
        return;
}

// 9. Printing out an entire list
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

// 10. Deleting an entire linked list
void destroy(node *head)
{
    node *tmp = list;

    while (tmp != NULL)
    {
        tmp = tmp->next;
        free(list);
        list = tmp;
    }
}