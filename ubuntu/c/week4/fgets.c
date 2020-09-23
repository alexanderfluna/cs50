#include <stdio.h>

int main(void)
{
    //creates array of char for string prompt
    char name[20];

    //prompts user for string
    printf("What's your name?\n");
    //gets string from user. puts string into char name array. sets cap at 20 chars. needs stdin.
    fgets(name, 20, stdin);
    //prints out char name array
    printf("%s\n", name);
    
    //use scanf for integers
}