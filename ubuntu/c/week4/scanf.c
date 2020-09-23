#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //uses get_string for string prompt
    string first = get_string("What's your first name? \n");
    printf("Okay %s, ", first);

    //creates an array of 20 chars
    char last[20];
    //prompts user for last name
    printf("what's your last name?\n");
    //scans keyboard for input and stores it into char last array
    //the [^\n] will keep scanning even after a space
    //no '&'' needed becasue arrays go into address directly
    scanf("%[^\n]s", last);
    //prints out the strings in first and last
    printf("Hello, %s %s. ", first, last);

    //creates an int fav
    int fav;
    //prompts user for favorite nunmber
    printf("What's your favorite number?\n");
    //scans keyboard for input and stores it into address of int fav
    scanf("%i", &fav);
    //prints out string first, char last array, and int fav
    printf("Your name is %s %s and your favorite number is %i\n", first, last, fav);
}