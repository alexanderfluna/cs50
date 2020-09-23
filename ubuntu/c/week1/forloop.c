#include <cs50.h>
#include <stdio.h>

// For loop (set variable to 0. check if condition is true. if true, add 1 to variable)
// If the condition is true, do the command in the curly braces
// If the condition is false, move down to further lines of code

int main(void)
{
    for (int i = 0; i < 50; i++)
    {
        printf("i is at %i: Hello, world\n", i);
    }
}