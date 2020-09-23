#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int answer;
    do
    {
        answer = get_int("Integer between 1-8: \n");
    }
    while (answer < 1 || answer > 8);

    for (int row = 0; row < answer; row++)
  {
     for (int spaces = answer - 2; spaces > row - 1; spaces--)
      {
        printf(" ");
      }
     for (int hashes = 0; hashes < row +1; hashes++)
        {
           printf("#");
        }

     printf("\n");
  }
}