#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int answer;
    do
    {
        answer = get_int("Integer between 1-8: \n");
    }
    while (1 > answer || answer > 8);

    for (int row = 0; row < answer; row++)
    {
        for (int spaces = 0; spaces < answer - 1 - row; spaces++)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < row + 1; hashes++)

        {
            printf("#");
        }

        printf("  ");

        for (int new = 0; new < row + 1; new++)
        {
            printf("#");
        }

        printf("\n");
    }
}