#include <cs50.h>
#include <stdio.h>

// The string variable 'x' is being set to get_string(Answer)
// Use %s in printf to substitute in an already made string variable
// After the quotations, use a comma and type the string variable you want to be substituted in

int main(void)

{
    string x = get_string("What's your name?\n");
    printf("Hello, %s\n", x);
}