#include <cs50.h>
#include <stdio.h>

// Create a new function called get_positive_int
// Create int variable n
// Do the command in the curly braces once
// If the while condition is true, perform the do command again
// If the while condition is false, go to the next line

int get_positive_int(string prompt);

int main(void)
{
    int i = get_positive_int("Positive integer: ");
    printf("%i is your number\n", i);
}

// Prompt user for positive integer
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1);
    return n;
}
