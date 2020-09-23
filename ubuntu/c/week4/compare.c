#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get two integers
    int i = get_int("i: ");
    int j = get_int("j: ");

    // Compares integer's values
    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
    // Prints the addresses of integers
    printf("%p %p\n", &i, &j);


     // Get two strings
    string s = get_string("s: ");
    string t = get_string("t: ");

    // Compares strings' addresses
    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
    //Prints the addresses of strings
    printf("%p %p\n", &s, &t);
}