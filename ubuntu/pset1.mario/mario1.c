#include <cs50.h>
#include <stdio.h>

int main(void)

// Prompt user for height (answer)
{
    int answer;
    do
    {
        answer = get_int("Integer between 1-8: \n");
    }
    while (answer < 1 || answer > 8);

// Prints pyramid
    for (int c = 8; c < answer; c--)
    {
       for (int space = 0; space < c + 1; space++)
        {
            printf("#");
        }
        printf(" ");
    }
}