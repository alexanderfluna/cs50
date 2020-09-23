#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //declares two pointers, x and y, that are not
    //pointing to anything yet
    int *x;
    int *y;

    //allocates enough memory for an int with malloc that
    //stores the address returned by malloc into x and y 
    x = malloc(sizeof(int));
    y = malloc(sizeof(int));

    //goes to the address pointed by x and y and in
    //those locations, 42 is stored in x and 13 in y
    *x = 42;
    *y = 13;
    printf("x is %i. y is %i.\n", *x, *y);

    //frees the memory at y location
    free(y);

    //the y pointer will point to what x is pointing at
    y = x;
    //the location that y and x are pointing to changes to 13
    *y = 86;
    printf("x is %i. y is %i.\n", *x, *y);

    free(x);
    free(y);
}