#include <stdio.h>
#include <cs50.h>

// The int variable 'x' is being set to get_int(Answer)
// Use %i in printf to substitute in an already made int variable
// After the quotations, use a comma and type the int variable you want to be substituted in

int main(void)

{
    int x = get_int("Age: ");
    printf("You are %i years old\n", x);
}