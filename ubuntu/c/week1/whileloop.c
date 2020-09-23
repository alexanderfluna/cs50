#include <cs50.h>
#include <stdio.h>

// The int variable i is set to 0
// The while condition checks to see if the int variable is less than 50
// If it is less than 50, it will do the commands in the curly braces
// (Print hello, world)(Add 1 to i)
// If it is not less than 50, the program moves to the next lines below the commands

int main(void)
{
    int i = 0;
    while (i < 50)
    {
        printf("i is at %i: Hello, world\n", i);
         i++;
    }
}