// Draws a pyramid using recursion

#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    // Get height of pyramid
    int height = get_int("Height: ");

    // Call on draw frunction
    draw(height);
}

void draw(int h)
{
    // this base case allows for the function to keep
    // calling itself until h == 0.
    // once h == 0, the function will "return,"
    // meaning it will skip over the function
    // once and then do it the subsequent goes
    if (h == 0)
    {
        return;
    }

    // the function keeps calling itself to do its
    // task over and over again until it hits the base case
    // since the most recently called function
    // is always at the top of the stack, the
    // program will do the function when h == 1
    // & keep going to the next recently called
    // going up to 2, 3, 4, and so forth
    draw(h - 1);

    // Draw one more row of width h
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}