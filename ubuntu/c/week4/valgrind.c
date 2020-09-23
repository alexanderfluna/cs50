#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    //prompt for string s
    char *s = get_string("s: ");

    //create string t with enough space that string s has
    char *t = malloc(strlen(s) + 1);

    //for loop each char from string s into string t
    for (int i = 0, n = strlen(s); i < n + 1; i++)
    {
        t[i] = s[i];
    }

    //uppercase first char in string t
    t[0] = toupper(t[0]);

    //print string s and string t
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    //free the space made for string t
    free(t);

    //run valgrind ./valgrind to check memory leakage
}