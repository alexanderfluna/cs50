#include <cs50.h>
#include <stdio.h>

int main(void)

// Make your own variable or get one made by the user
// Check if the variable is less than, greater than, or equal to a value
// If it's less than, then do one thing. Else, if it's greater than do another thing. Else do another thing

{
    int x = get_int("x: ");
    int y = get_int("y: ");
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else if (x == y)
    {
        printf("x is equal to y\n");
    }
}